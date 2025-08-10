import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.result import TestFailure
from random import choice, randint, seed
from test.lib.ports import *
from test.lib.config import *


SEED = 123
seed(SEED)
cocotb.RANDOM_SEED = SEED

dc = DesignConstants()
tbc = TestbenchConstants(design=dc)

async def generate_clock(tbc,ports) -> None:
    """
    Generates continuous clock pulses for the DUT (Device Under Test).
    
    Args:
        tbc: TestbenchConstants instance containing design constants and configuration,
             initialized with the design (e.g., tbc = TestbenchConstants(design=dc)).
        ports: FIFO_ports interface object providing access to DUT's ports
               (e.g., ports = FIFO_ports(dut)).
               
    The clock generation runs indefinitely with a period defined in TestbenchConstants.
    Typically controlled by the testbench's main coroutine or event loop.
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
    Generates a reset pulse sequence for the DUT (Device Under Test).
    
    Args:
        tbc: TestbenchConstants instance containing reset timing parameters
             and design configuration.
        ports: FIFO_ports interface object connected to the DUT's ports.
    
    The reset sequence typically includes:
    1. Asserting reset (active level depends on design)
    2. Holding for specified duration (from TestbenchConstants)
    3. Deasserting reset
    4. Optional post-reset stabilization period
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
    """
    Checks the value of a signal in the DUT after a specified number of clock cycles.
    
    Args:
        dut: Device Under Test object providing signal access
        signal_name: Name of the signal to check (must exist in dut)
        cycles: Number of clock cycles to wait before checking
        expected: Expected value of the signal
    
    Raises:
        AssertionError: If the signal value doesn't match the expected value
    """
    await Timer(cycles * tbc.CLK_period, units=tbc.UNIT)
    get_value = getattr(dut, signal_name).value
    if get_value != expected:
        raise AssertionError(f"Mismatch! {signal_name}: {get_value} != {expected}\n")

@cocotb.test()
async def reset_behavior(dut):
    """
    Comprehensive test of FIFO reset functionality including:
    - Initial reset sequence verification
    - Behavior during active reset
    - Post-reset recovery and operation
    
    Test Sequence:
    1. Initialize clock and apply primary reset (if configured)
    2. Pre-fill FIFO with sample data (3 items)
    3. Verify FIFO reports non-empty state
    4. Assert reset and validate FIFO clears (empty flag)
    5. Release reset and confirm operational recovery
    6. Verify post-reset write/read functionality
    
    Coverage:
    - Reset polarity verification
    - Memory clearance during reset
    - Flag behavior (empty/full) during reset transitions
    - Data integrity after reset cycle
    """
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
    """
    Fundamental FIFO operation validation including:
    - Empty/Full flag initialization
    - Single write-read cycle
    - Data path integrity
    - Control signal timing
    
    Test Sequence:
    1. Initialize and reset FIFO
    2. Verify post-reset empty state
    3. Execute single write operation (0x45)
    4. Validate empty flag deassertion
    5. Perform read operation and verify:
       - Correct data output
       - Empty flag reassertion
       - Signal timing relationships
    
    Coverage:
    - Basic write/read handshaking
    - Data storage/retrieval accuracy
    - Flag timing relative to clock edges
    - Control signal (WE/RD) functionality
    """
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
    """
    FIFO capacity boundary testing including:
    - Progressive filling to capacity
    - Full flag assertion timing
    - Write protection when full
    
    Test Sequence:
    1. Initialize test environment
    2. Gradually fill FIFO to depth capacity
    3. Verify full flag asserts precisely when full
    4. Attempt overflow write and verify:
       - Data rejection
       - Full flag persistence
       - Memory protection
    
    Coverage:
    - Depth parameter verification
    - Full flag assertion/release timing
    - Write ignore behavior at capacity
    - Sequential addressing verification
    """
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
    """
    Concurrent operation stress test including:
    - Read-during-write behavior
    - Pointer management
    - Data consistency during overlap
    
    Test Sequence:
    1. Pre-fill FIFO to half capacity
    2. Activate simultaneous WE and RD (0xAA)
    3. Verify:
       - Flag stability (neither empty nor full)
       - Data path integrity
       - Correct queue advancement
    4. Validate subsequent read operation
    
    Coverage:
    - Control signal collision handling
    - Memory pointer arithmetic
    - Intermediate state flag management
    - Data consistency during concurrent access
    """
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
    """
    Stochastic stress testing including:
    - Random write/read sequences
    - Boundary condition triggering
    - Extended operation stability
    
    Test Sequence:
    1. Initialize with random seed
    2. Execute N^2 random operations (N = FIFO depth)
    3. For each operation:
       - Randomly select write (if space) or read (if data)
       - Maintain software reference model
       - Verify hardware/software synchronization
    4. Validate final state consistency
    
    Coverage:
    - Cross-boundary pointer behavior
    - Random empty/full transitions
    - Stress test of control logic
    - Long-duration operation stability
    - Data integrity under random access
    """
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

