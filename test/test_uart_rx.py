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

# from debugpy import listen, wait_for_client
# listen(5004); print("Wait debugger...ZZZ"); wait_for_client()

import cocotb
# from cocotb.regression import TestFactory
from cocotb.handle  import SimHandleBase
from lib.uvm        import *
from cocotb.clock import Clock


@cocotb.test()
async def test_uart_rx(dut,sig_in="RXi",sig_out="DATAo"):
    """
    Args: sig_in : "RXi" sig_out : "DATAo"
    """
    tb = TB(dut)
    tb.setup(sig_in,sig_out)
    await tb.start()
    await tb.stop()
    
# @cocotb.test()
# async def test_uart_tx(dut,sig_in="TXi",sig_out="DATAo"):
#     """
#     Args: sig_in : "TXi" sig_out : "DATAo"
#     """
#     # tb = TB(dut)
#     # tb.setup(sig_in,sig_out)
#     # await tb.start()
#     # await tb.stop()
#     ...

# if __name__ == "__main__":
# if cocotb.SIM_NAME:
#     factory = TestFactory(run_test_uart_rx)
#     factory.generate_tests()