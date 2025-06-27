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

async def generate_clock(tbc,ports) -> None:
    """
    Generate clock pulses.
    """
    # clk = getattr(dut,ports.clk)
    delay = tbc.CLOCK_DELAY
    period = tbc.CLK_period
    await Timer(delay, units=tbc.UNIT)
    while True:
        ports.CLK.value = 1
        await Timer(int(period / 2), units=tbc.UNIT)
        ports.CLK.value = 0
        await Timer(int(period / 2), units=tbc.UNIT)

async def generate_reset(tbc,ports) -> None:
    """
    Generate reset pulse.
    """
    # rst = getattr(dut,ports.rst)
    delay = tbc.RESET_DELAY
    period = tbc.RESET_period
    await Timer(delay, units=tbc.UNIT)
    # rst.value = 1
    ports.RST.value = 1
    await Timer(period, units=tbc.UNIT)
    # rst.value = 0
    ports.RST.value = 0

async def delayed_check(dut, signal_name: str, cycles: int, expected: int) -> None:
    await Timer(cycles * tbc.CLK_period, units=tbc.UNIT)
    get_value = getattr(dut, signal_name).value
    if get_value != expected:
        raise AssertionError(f"Mismatch! {signal_name}: {get_value} != {expected}\n")

@cocotb.test()
async def reset_behavior(dut):
    """Test FIFO behavior during and after reset"""
    ports = FIFO_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)   
    
    # Write some data
    ports.WE.value = 1
    for i in range(3):
        ports.DATAi.value = i
        await RisingEdge(ports.CLK)
    ports.WE.value = 0
    
    # Assert FIFO has data
    assert ports.EMPTY.value == 0

    # Reset again
    ports.RST.value = 1
    await RisingEdge(ports.CLK)
    # Check FIFO is empty after reset
    cocotb.start_soon(delayed_check(dut,ports.empty, 1, 1))
    cocotb.start_soon(delayed_check(dut,ports.full, 1, 0))
    
    # Bring reset back high
    ports.RST.value = 0
    await RisingEdge(ports.CLK)
    
    # Verify FIFO is ready for new operations
    test_data = 0x42
    ports.WE.value = 1
    ports.DATAi.value = test_data
    await RisingEdge(ports.CLK)
    ports.WE.value = 0
    
    cocotb.start_soon(delayed_check(dut,ports.empty, 1, 0))
    
    ports.RD.value = 1
    await RisingEdge(ports.CLK)
    # Data should be readable after reset
    cocotb.start_soon(delayed_check(dut,ports.empty, 1, test_data))
    ports.RD.value = 0
    await FallingEdge(ports.CLK)

@cocotb.test()
async def basic_operations(dut):
    """Test basic FIFO operations (write, read, full, empty flags)"""
    ports = FIFO_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)
    
    # Check initial state
    assert ports.EMPTY.value == 1, "FIFO should be empty after reset"
    assert ports.FULL.value == 0, "FIFO should not be full after reset"
    # await RisingEdge(dut.CLKip)
    await RisingEdge(ports.CLK)

    # Test single write and read
    test_data = 0x45
    ports.WE.value = 1
    ports.RD.value = 0
    ports.DATAi.value = test_data
    await RisingEdge(ports.CLK)
    ports.WE.value = 0
    await RisingEdge(ports.CLK)

    # FIFO should not be empty after write
    cocotb.start_soon(delayed_check(dut,ports.empty, 1, 0))
    
    # # Read the data
    ports.RD.value = 1
    await RisingEdge(ports.CLK)
    ports.RD.value = 0
    cocotb.start_soon(delayed_check(dut,ports.datao, 1, test_data))
    await RisingEdge(ports.CLK)
    # FIFO should be empty after read
    cocotb.start_soon(delayed_check(dut,ports.empty, 1, 1))
    await RisingEdge(ports.CLK)
    await FallingEdge(ports.CLK)

@cocotb.test()
async def full_condition(dut):
    """Test FIFO full condition"""
    ports = FIFO_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)
    
    # Get FIFO depth from parameter
    # fifo_depth = int(dut.FIFO_DEPTH.value)
    fifo_depth = int(ports.FIFO_DEPTH.value)
    # Fill the FIFO
    ports.WE.value = 1
    for i in range(fifo_depth):
        ports.DATAi.value = i
        await RisingEdge(ports.CLK)
        if i == fifo_depth - 1:
            await RisingEdge(ports.CLK)
            # assert dut.FULLo.value == 1, "FIFO should be full"
            cocotb.start_soon(delayed_check(dut,ports.full, 1, 1))
        else:
            assert ports.FULL.value == 0, "FIFO should not be full yet"
    
    ports.WE.value = 0
    # Try to write one more (should be ignored)
    ports.DATAi.value = 0xFF
    await RisingEdge(ports.CLK)
    assert ports.FULL.value == 1, "FIFO should remain full"
    await RisingEdge(ports.CLK)
    await FallingEdge(ports.CLK)

@cocotb.test()
async def simultaneous_read_write(dut):
    """Test simultaneous read and write operations"""
    ports = FIFO_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)

    # Fill half the FIFO
    half_depth = int(ports.FIFO_DEPTH.value) // 2
    ports.WE.value = 1
    for i in range(half_depth):
        ports.DATAi.value = i
        await RisingEdge(ports.CLK)
    ports.WE.value = 0
    
    # Simultaneous read and write
    test_data = 0xAA
    ports.WE.value = 1
    ports.RD.value = 1
    ports.DATAi.value = test_data
    await RisingEdge(ports.CLK)
    
    # Check that count remains the same
    assert ports.EMPTY.value == 0, "FIFO should not be empty"
    assert ports.FULL.value == 0, "FIFO should not be full"
    
    # Read the next value to check it's correct
    ports.WE.value = 0
    await RisingEdge(ports.CLK)
    cocotb.start_soon(delayed_check(dut,ports.datao, 1, 1))
    await FallingEdge(ports.CLK)

@cocotb.test()
async def random_operations(dut):
    """Test random read/write operations"""
    ports = FIFO_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)
    
    fifo_depth = int(ports.FIFO_DEPTH.value)
    data_width = int(ports.DATA_WIDTH.value)
    reference_queue = []
    
    tests = fifo_depth ** 2
    for _ in range(tests):  # Perform 256 random operations
        # Randomly choose to read or write
        do_write = choice([True, False])
        
        if do_write and len(reference_queue) < fifo_depth:
            # Write operation
            data = randint(0, (2 ** data_width) - 1)
            ports.WE.value = 1
            ports.DATAi.value = data
            reference_queue.append(data)
            # print(reference_queue[-1])
            await RisingEdge(ports.CLK)
            ports.WE.value = 0

        elif not do_write and len(reference_queue) > 0:
            # Read operation
            ports.RD.value = 1
            await RisingEdge(ports.CLK)
            ports.RD.value = 0
            expected_data = reference_queue.pop(0)
            # await RisingEdge(dut.CLKip)
            cocotb.start_soon(delayed_check(dut,ports.datao, 1, expected_data))

        else:
            # No operation (either FIFO full and trying to write, or empty and trying to read)
            await RisingEdge(ports.CLK)
            cocotb.start_soon(delayed_check(dut,ports.empty, 1, (len(reference_queue)) == 0))
            cocotb.start_soon(delayed_check(dut,ports.full, 1, (len(reference_queue) == fifo_depth)))
    
    await FallingEdge(ports.CLK)

