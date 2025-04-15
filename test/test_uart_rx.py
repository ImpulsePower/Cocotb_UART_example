'''
* Author: ImpulsePower
* Date of creation: 03/02/2025
* Description: Cocotb testbench of UART interface receiver, 
* License:
* Language: Python
* History:

'''
# from icecream import ic
# from sys import getsizeof

import cocotb
# from cocotb.regression import TestFactory
from cocotb.handle import SimHandleBase

from lib.uvm import *

def is_hierarchy_object(obj) -> bool:
    """
    Checks whether the Hierarchy Object (SimHandle) is an object.
    """
    return isinstance(obj, SimHandleBase)

def print_dut_structure(dut, indent=0):
    """
    Outputs the DUT structure as a tree.
    Args:   
        dut : Design under test.
    """
    for name in dir(dut):
        if name.startswith("_"):
            continue
        obj = getattr(dut, name)
        if isinstance(obj, SimHandleBase):
            print("  " * indent + f"├─ {name} (HierarchyObject)")
            print_dut_structure(obj, indent + 1)
        else:
            print("  " * indent + f"├─ {name} ({type(obj).__name__})")

@cocotb.test()
async def run_test_uart_rx(dut):
    """
    Try accessing the design.

    Args:   
        dut : Design under test.
    """
    tb = TB(dut)
    # tb.transactions = generate_transaction()
    # # clk_edge = RisingEdge(clk)
    tb.setup()
    await tb.start()
    await tb.stop()
    # await Timer(int(TestbenchConstants.TB_DELAY), units=TestbenchConstants.UNIT)
        

# if __name__ == "__main__":
# if cocotb.SIM_NAME:
#     factory = TestFactory(run_test_uart_rx)
#     factory.generate_tests()