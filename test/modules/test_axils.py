import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotbext.axi import AxiLiteBus, AxiLiteMaster
from random import seed
from test.lib.ports import *
from test.lib.config import *

SEED = 123
seed(SEED)
cocotb.RANDOM_SEED = SEED
dc = DesignConstants()
tbc = TestbenchConstants(design=dc)

async def reset(dut):
    """Reset the DUT"""
    dut.S_AXI_ARESETN.value = 0
    await Timer(100, units="ns")
    await RisingEdge(dut.S_AXI_ACLK)
    dut.S_AXI_ARESETN.value = 1
    await RisingEdge(dut.S_AXI_ACLK)

@cocotb.test()
async def basic_io(dut):
    """Basic write and read operations test"""
    ports = AXILS_ports(dut)
    # Create AXI Lite Master
    axi_master = AxiLiteMaster(AxiLiteBus.from_prefix(dut, "S_AXI"), ports.S_AXI_ACLK)
    
    # Start clock
    clock = Clock(dut.S_AXI_ACLK, 10, units="ns")  # 100 MHz
    cocotb.start_soon(clock.start())
    
    # Reset
    await reset(dut)
    
    # Test 1: Write to baud rate register (address 0x0)
    baud_rate = 115200
    # ports.BAUD_RATE.value = tbc.design.BAUD_RATE = baud_rate
    await axi_master.write(0x0, baud_rate.to_bytes(4, 'little'))
    await Timer(100, units="ns")
    
    # Verify write by reading back
    read_data = await axi_master.read(0x0, 4)
    assert int.from_bytes(read_data.data, 'little') == baud_rate, "Baud rate register write/read mismatch"
    
    # Test 2: Write to control register (address 0x4) to enable interrupts
    await axi_master.write(0x4, (1 << 8).to_bytes(4, 'little'))  # Set bit 8
    await Timer(100, units="ns")
    
    # Verify control register
    read_data = await axi_master.read(0x4, 4)
    assert (int.from_bytes(read_data.data, 'little') & (1 << 8)) != 0, "Interrupt enable bit not set"

@cocotb.test()
async def status_registers(dut):
    """Test status register behavior"""
    
    axi_master = AxiLiteMaster(AxiLiteBus.from_prefix(dut, "S_AXI"), dut.S_AXI_ACLK)
    clock = Clock(dut.S_AXI_ACLK, 10, units="ns")
    cocotb.start_soon(clock.start())
    await reset(dut)
    
    # Initial status check (should be 0)
    read_data = await axi_master.read(0x4, 4)
    status = int.from_bytes(read_data.data, 'little')
    assert (status & 0x1) == 0, "Data ready flag should be 0 after reset"
    
    # Simulate RX data received (via backdoor or force)
    dut.rx_data.value = 0x55
    dut.rx_done.value = 1
    await RisingEdge(dut.S_AXI_ACLK)
    dut.rx_done.value = 0
    await Timer(100, units="ns")
    
    # Check status register (bit 0 should be 1)
    read_data = await axi_master.read(0x4, 4)
    status = int.from_bytes(read_data.data, 'little')
    assert (status & 0x1) == 1, "Data ready flag not set after RX complete"
    
    # Read data register (should clear data ready flag)
    await axi_master.read(0x8, 4)
    await Timer(100, units="ns")
    
    # Verify flag cleared
    read_data = await axi_master.read(0x4, 4)
    status = int.from_bytes(read_data.data, 'little')
    assert (status & 0x1) == 0, "Data ready flag not cleared after read"

# @cocotb.test()
# async def concurrent_access(dut):
#     """Test concurrent read and write operations"""
    
#     axi_master = AxiLiteMaster(AxiLiteBus.from_prefix(dut, "S_AXI"), dut.S_AXI_ACLK)
#     clock = Clock(dut.S_AXI_ACLK, 10, units="ns")
#     cocotb.start_soon(clock.start())
#     await reset(dut)
    
#     # Start concurrent operations
#     baud_rate = 115200
#     write_task = cocotb.start_soon(axi_master.write(0x0, baud_rate.to_bytes(4, 'little')))
#     read_task = cocotb.start_soon(axi_master.read(0x4, 4))
    
#     await write_task
#     await read_task
    
#     # Verify write completed
#     read_data = await axi_master.read(0x0, 4)
#     assert int.from_bytes(read_data.data, 'little') == 115200, "Concurrent write failed"

# @cocotb.test()
# async def error_conditions(dut):
#     """Test error conditions and responses"""
    
#     axi_master = AxiLiteMaster(AxiLiteBus.from_prefix(dut, "S_AXI"), dut.S_AXI_ACLK)
#     clock = Clock(dut.S_AXI_ACLK, 10, units="ns")
#     cocotb.start_soon(clock.start())
#     await reset(dut)
    
#     # Test 1: Read from invalid address
#     try:
#         await axi_master.read(0xC, 4)  # Undefined address
#         assert False, "Should have received error response"
#     except Exception as e:
#         dut._log.info(f"Expected error received: {str(e)}")
    
#     # Test 2: Write to invalid address
#     try:
#         await axi_master.write(0xC, b'\x11\x22\x33\x44')
#         assert False, "Should have received error response"
#     except Exception as e:
#         dut._log.info(f"Expected error received: {str(e)}")

# @cocotb.test()
# async def performance(dut):
#     """Test performance with multiple rapid transactions"""
    
#     axi_master = AxiLiteMaster(AxiLiteBus.from_prefix(dut, "S_AXI"), dut.S_AXI_ACLK)
#     clock = Clock(dut.S_AXI_ACLK, 10, units="ns")
#     cocotb.start_soon(clock.start())
#     await reset(dut)
    
#     # Perform 100 random writes followed by reads
#     for _ in range(100):
#         addr = random.choice([0x0, 0x4, 0x8])
#         data = random.randint(0, 0xFFFFFFFF)
        
#         await axi_master.write(addr, data.to_bytes(4, 'little'))
#         read_data = await axi_master.read(addr, 4)
        
#         assert int.from_bytes(read_data.data, 'little') == data, \
#             f"Data mismatch at address {hex(addr)}"