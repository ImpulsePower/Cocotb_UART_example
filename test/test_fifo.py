import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.result import TestFailure
import random

async def reset_dut(dut):
    dut.RSTi.value = 0
    await RisingEdge(dut.CLKip)
    await RisingEdge(dut.CLKip)
    dut.RSTi.value = 1
    await RisingEdge(dut.CLKip)

@cocotb.test()
async def test_fifo_basic_operations(dut):
    """Test basic FIFO operations (write, read, full, empty flags)"""
    
    # Generate clock
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset the DUT
    await reset_dut(dut)
    
    # Check initial state
    assert dut.EMPTYo.value == 1, "FIFO should be empty after reset"
    assert dut.FULLo.value == 0, "FIFO should not be full after reset"
    
    # Test single write and read
    test_data = 0x55
    dut.WEi.value = 1
    dut.DATAi.value = test_data
    await RisingEdge(dut.CLKip)
    dut.WEi.value = 0
    
    assert dut.EMPTYo.value == 0, "FIFO should not be empty after write"
    
    # Read the data
    dut.RDi.value = 1
    await RisingEdge(dut.CLKip)
    assert dut.DATAo.value == test_data, f"Mismatch. Expected {test_data}, got {dut.DATAo.value}"
    dut.RDi.value = 0
    
    assert dut.EMPTYo.value == 1, "FIFO should be empty after read"

@cocotb.test()
async def test_fifo_full_condition(dut):
    """Test FIFO full condition"""
    
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    await reset_dut(dut)
    
    # Get FIFO depth from parameter
    fifo_depth = int(dut.FIFO_DEPTH.value)
    
    # Fill the FIFO
    dut.WEi.value = 1
    for i in range(fifo_depth):
        dut.DATAi.value = i
        await RisingEdge(dut.CLKip)
        if i == fifo_depth - 1:
            assert dut.FULLo.value == 1, "FIFO should be full"
        else:
            assert dut.FULLo.value == 0, "FIFO should not be full yet"
    
    dut.WEi.value = 0
    
    # Try to write one more (should be ignored)
    dut.DATAi.value = 0xFF
    await RisingEdge(dut.CLKip)
    assert dut.FULLo.value == 1, "FIFO should remain full"

@cocotb.test()
async def test_fifo_simultaneous_read_write(dut):
    """Test simultaneous read and write operations"""
    
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    await reset_dut(dut)
    
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

@cocotb.test()
async def test_fifo_random_operations(dut):
    """Test random read/write operations"""
    
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    await reset_dut(dut)
    
    fifo_depth = int(dut.FIFO_DEPTH.value)
    reference_queue = []
    
    for _ in range(1000):  # Perform 1000 random operations
        # Randomly choose to read or write
        do_write = random.choice([True, False])
        
        if do_write and len(reference_queue) < fifo_depth:
            # Write operation
            data = random.randint(0, 255)
            dut.WEi.value = 1
            dut.DATAi.value = data
            reference_queue.append(data)
            await RisingEdge(dut.CLKip)
            dut.WEi.value = 0
        elif not do_write and len(reference_queue) > 0:
            # Read operation
            dut.RDi.value = 1
            await RisingEdge(dut.CLKip)
            expected_data = reference_queue.pop(0)
            assert dut.DATAo.value == expected_data, f"Data mismatch. Expected {expected_data}, got {dut.DATAo.value}"
            dut.RDi.value = 0
        else:
            # No operation (either FIFO full and trying to write, or empty and trying to read)
            await RisingEdge(dut.CLKip)
        
        # Check flags match our reference model
        assert dut.EMPTYo.value == (len(reference_queue)) == 0, "Empty flag mismatch"
        assert dut.FULLo.value == (len(reference_queue) == fifo_depth), "Full flag mismatch"

@cocotb.test()
async def test_fifo_reset_behavior(dut):
    """Test FIFO behavior during and after reset"""
    
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Initial reset
    await reset_dut(dut)
    
    # Write some data
    dut.WEi.value = 1
    for i in range(3):
        dut.DATAi.value = i
        await RisingEdge(dut.CLKip)
    dut.WEi.value = 0
    
    # Assert FIFO has data
    assert dut.EMPTYo.value == 0
    
    # Reset again
    dut.RSTi.value = 0
    await RisingEdge(dut.CLKip)
    await RisingEdge(dut.CLKip)
    
    # Check FIFO is empty after reset
    assert dut.EMPTYo.value == 1, "FIFO should be empty after reset"
    assert dut.FULLo.value == 0, "FIFO should not be full after reset"
    
    # Bring reset back high
    dut.RSTi.value = 1
    await RisingEdge(dut.CLKip)
    
    # Verify FIFO is ready for new operations
    test_data = 0x42
    dut.WEi.value = 1
    dut.DATAi.value = test_data
    await RisingEdge(dut.CLKip)
    dut.WEi.value = 0
    
    assert dut.EMPTYo.value == 0, "FIFO should accept writes after reset"
    
    dut.RDi.value = 1
    await RisingEdge(dut.CLKip)
    assert dut.DATAo.value == test_data, "Data should be readable after reset"
    dut.RDi.value = 0
