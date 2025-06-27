import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.result import TestFailure
from random import choice, randint, seed
from test.lib.config import *


SEED = 123
seed(SEED)
cocotb.RANDOM_SEED = SEED

dc = DesignConstants()
tbc = TestbenchConstants(design=dc)
ports = FIFO_ports()

async def generate_clock(dut,tbc) -> None:
    """
    Generate clock pulses.
    """
    clk = getattr(dut,ports.clk)
    delay = tbc.CLOCK_DELAY
    period = tbc.CLK_period
    await Timer(delay, units=tbc.UNIT)
    while True:
        clk.value = 1
        await Timer(int(period / 2), units=tbc.UNIT)
        clk.value = 0
        await Timer(int(period / 2), units=tbc.UNIT)

async def generate_reset(dut,tbc) -> None:
    """
    Generate reset pulse.
    """
    rst = getattr(dut,ports.rst)
    delay = tbc.RESET_DELAY
    period = tbc.RESET_period
    await Timer(delay, units=tbc.UNIT)
    rst.value = 1
    await Timer(period, units=tbc.UNIT)
    rst.value = 0

async def delayed_check(dut, signal_name: str, cycles: int, expected: int) -> None:
    await Timer(cycles * tbc.CLK_period, units=tbc.UNIT)
    get_value = getattr(dut, signal_name).value
    if get_value != expected:
        raise AssertionError(f"Mismatch! {signal_name}: {get_value} != {expected}\n")

@cocotb.test()
async def reset_behavior(dut):
    """Test FIFO behavior during and after reset"""

    # Generate clock and reset
    await cocotb.start(generate_clock(dut,tbc))
    if (tbc.NEED_RST): 
        await generate_reset(dut,tbc)
        # await FallingEdge(dut.RSTi)    
    
    # Write some data
    getattr(dut, ports.we).value = 1
    for i in range(3):
        getattr(dut, ports.datai).value = i
        await RisingEdge(getattr(dut, ports.clk))
    getattr(dut, ports.we).value = 0
    
    # Assert FIFO has data
    assert getattr(dut, ports.empty).value == 0

    # Reset again
    getattr(dut, ports.rst).value = 1
    await RisingEdge(getattr(dut, ports.clk))
    # Check FIFO is empty after reset
    cocotb.start_soon(delayed_check(dut,ports.empty, 1, 1))
    cocotb.start_soon(delayed_check(dut,ports.full, 1, 0))
    
    # Bring reset back high
    getattr(dut, ports.rst).value = 0
    await RisingEdge(getattr(dut, ports.clk))
    
    # Verify FIFO is ready for new operations
    test_data = 0x42
    getattr(dut, ports.we).value = 1
    getattr(dut, ports.datai).value = test_data
    await RisingEdge(getattr(dut, ports.clk))
    getattr(dut, ports.we).value = 0
    
    cocotb.start_soon(delayed_check(dut,ports.empty, 1, 0))
    
    getattr(dut, ports.rd).value = 1
    await RisingEdge(getattr(dut, ports.clk))
    # Data should be readable after reset
    cocotb.start_soon(delayed_check(dut,ports.empty, 1, test_data))
    getattr(dut, ports.rd).value = 0

@cocotb.test()
async def basic_operations(dut):
    """Test basic FIFO operations (write, read, full, empty flags)"""

    # Generate clock and reset
    await cocotb.start(generate_clock(dut,tbc))
    if (tbc.NEED_RST): 
        await generate_reset(dut,tbc)
        await FallingEdge(dut.RSTi)
    
    # Check initial state
    assert dut.EMPTYo.value == 1, "FIFO should be empty after reset"
    assert dut.FULLo.value == 0, "FIFO should not be full after reset"
    await RisingEdge(dut.CLKip)

    # Test single write and read
    test_data = 0x45
    dut.WEi.value = 1
    dut.RDi.value = 0
    dut.DATAi.value = test_data
    await RisingEdge(dut.CLKip)
    dut.WEi.value = 0
    await RisingEdge(dut.CLKip)


    # FIFO should not be empty after write
    # assert dut.EMPTYo.value == 0
    cocotb.start_soon(delayed_check(dut,"EMPTYo", 1, 0))
    
    # # Read the data
    dut.RDi.value = 1
    await RisingEdge(dut.CLKip)
    dut.RDi.value = 0
    await RisingEdge(dut.CLKip)
    assert dut.DATAo.value == test_data, f"Mismatch. Expected {test_data}, got {dut.DATAo.value}"
    await RisingEdge(dut.CLKip)
    # FIFO should be empty after read
    # assert dut.EMPTYo.value == 1, ""
    cocotb.start_soon(delayed_check(dut,"EMPTYo", 1, 1))
    await FallingEdge(dut.CLKip)

@cocotb.test()
async def full_condition(dut):
    """Test FIFO full condition"""
    # Generate clock and reset
    await cocotb.start(generate_clock(dut,tbc))
    if (tbc.NEED_RST): 
        await generate_reset(dut,tbc)
        await FallingEdge(dut.RSTi)
    
    # Get FIFO depth from parameter
    fifo_depth = int(dut.FIFO_DEPTH.value)
    # Fill the FIFO
    dut.WEi.value = 1
    for i in range(fifo_depth):
        dut.DATAi.value = i
        await RisingEdge(dut.CLKip)
        if i == fifo_depth - 1:
            await RisingEdge(dut.CLKip)
            # assert dut.FULLo.value == 1, "FIFO should be full"
            cocotb.start_soon(delayed_check(dut,"FULLo", 1, 1))
        else:
            assert dut.FULLo.value == 0, "FIFO should not be full yet"
    
    dut.WEi.value = 0
    # Try to write one more (should be ignored)
    dut.DATAi.value = 0xFF
    await RisingEdge(dut.CLKip)
    assert dut.FULLo.value == 1, "FIFO should remain full"
    await FallingEdge(dut.CLKip)

@cocotb.test()
async def simultaneous_read_write(dut):
    """Test simultaneous read and write operations"""

    # Generate clock and reset
    await cocotb.start(generate_clock(dut,tbc))
    if (tbc.NEED_RST): 
        await generate_reset(dut,tbc)
        await FallingEdge(dut.RSTi)

    # Fill half the FIFO
    half_depth = int(dut.FIFO_DEPTH.value) // 2
    dut.WEi.value = 1
    for i in range(half_depth):
        dut.DATAi.value = i
        await RisingEdge(dut.CLKip)
    dut.WEi.value = 0
    
    # Simultaneous read and write
    test_data = 0xAA
    dut.WEi.value = 1
    dut.RDi.value = 1
    dut.DATAi.value = test_data
    await RisingEdge(dut.CLKip)
    
    # Check that count remains the same
    assert dut.EMPTYo.value == 0, "FIFO should not be empty"
    assert dut.FULLo.value == 0, "FIFO should not be full"
    
    # Read the next value to check it's correct
    dut.WEi.value = 0
    await RisingEdge(dut.CLKip)
    assert dut.DATAo.value == 1, "Expected second written value"
    await FallingEdge(dut.CLKip)

@cocotb.test()
async def random_operations(dut):
    """Test random read/write operations"""
    # Generate clock and reset
    await cocotb.start(generate_clock(dut,tbc))
    if (tbc.NEED_RST): 
        await generate_reset(dut,tbc)
        await FallingEdge(dut.RSTi)
    
    fifo_depth = int(dut.FIFO_DEPTH.value)
    data_width = int(dut.DATA_WIDTH.value)
    reference_queue = []
    
    for _ in range(100):  # Perform 100 random operations
        # Randomly choose to read or write
        do_write = choice([True, False])
        
        if do_write and len(reference_queue) < fifo_depth:
            # Write operation
            data = randint(0, (2 ** data_width) - 1)
            dut.WEi.value = 1
            dut.DATAi.value = data
            reference_queue.append(data)
            # print(reference_queue[-1])
            await RisingEdge(dut.CLKip)
            dut.WEi.value = 0

        elif not do_write and len(reference_queue) > 0:
            # Read operation
            dut.RDi.value = 1
            await RisingEdge(dut.CLKip)
            dut.RDi.value = 0
            expected_data = reference_queue.pop(0)
            # await RisingEdge(dut.CLKip)
            cocotb.start_soon(delayed_check(dut,"DATAo", 1, expected_data))

        else:
            # No operation (either FIFO full and trying to write, or empty and trying to read)
            await RisingEdge(dut.CLKip)
            cocotb.start_soon(delayed_check(dut,"EMPTYo", 1, (len(reference_queue)) == 0))
            cocotb.start_soon(delayed_check(dut,"FULLo", 1, (len(reference_queue) == fifo_depth)))

