'''
* Author: ImpulsePower
* Date of creation: 03/02/2025
* Description: Cocotb testbench of UART interface receiver, 
* License:
* Language: Python
* History:

'''
from random import randint
import logging
from dataclasses import dataclass
# import warnings
# import logging
from icecream import ic
from sys import getsizeof

import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.regression import TestFactory
from cocotb.handle import SimHandleBase

# @dataclass (frozen=True)
# class DESIGN_CONSTANT:
#     '''
#     Design constants
#         CLOCK_FREQ: Clock frequency in Hz
#         BAUD_RATE: Baud rate in bps
#         DATA_WIDTH: Data width in bits
#     '''
#     CLOCK_FREQ: int = 100000000 
#     BAUD_RATE: int = 115200 
#     DATA_WIDTH: int = 8
class UNITS:
    __slots__ = ('fs', 'ps', 'ns', 'us', 'ms', 'sc', 'name', 'value')
    def __init__(self, unit: str = None):
        # Unit value table
        self.fs: int = 10**15
        self.ps: int = 10**12
        self.ns: int = 10**9
        self.us: int = 10**6
        self.ms: int = 10**3
        self.sc: int = 1
        # Set unit attribute
        current_unit = unit if unit is not None else TB_CONSTANT.UNIT
        self.name: str = self.get_name(current_unit)
        self.value: int = self.get_value(current_unit)

    def get_name(self, unit: str) -> str:
        """
        Return full name of units

        Args:   
            unit: Name of unit.
        """
        unit_names = {
            'fs': 'Femtosecond',
            'ps': 'Picosecond',
            'ns': 'Nanosecond',
            'us': 'Microsecond',
            'ms': 'Millisecond',
            'sc': 'Second'
        }
        return unit_names.get(unit, 'unknown')

    def get_value(self, unit: str) -> int:
        """
        Return value

        Args:   
            unit: Name of unit.
        """
        return getattr(self, unit)

    def __repr__(self) -> str:
        """
        Printing current value UNIT
        """
        return f"<UNIT: {self.name} (value={self.value})>"
    
class CONSTANT:
    @dataclass (frozen=True)
    class DESIGN:
        '''
        Design constants
            CLOCK_FREQ: Clock frequency in Hz
            BAUD_RATE: Baud rate in bps
            DATA_WIDTH: Data width in bits
        '''
        CLOCK_FREQ: int = 100000000 
        BAUD_RATE: int = 115200 
        DATA_WIDTH: int = 8
    
    @dataclass (frozen=True)
    class TB:
        '''
        Testbench constants
            NEED_RST: Clock frequency in Hz
            NUM_OF_TEST: Baud rate in bps
            UNIT: Data width in bits
        '''
        NEED_RST: bool = True
        NUM_OF_TEST: int = 1
        UNIT: str = 'ns'
        CLK_period = UNITS().value / CONSTANT.DESIGN.CLOCK_FREQ
        RESET_period: int = 20
        BIT_period = int( (DESIGN_CONSTANT.CLOCK_FREQ / DESIGN_CONSTANT.BAUD_RATE) * CLK_period)
        CLOCK_DELAY: int = 10 # Clock delay in ns
        RESET_DELAY: int = 10 # Reset delay in ns
        DELAY: int = 20 # Reset delay in ns
        TB_DELAY: int = BIT_period * 2

EXP_TRANS = []

class transactions:
    def __init__(self, BAUD_RATEi=0,RXi=0,set_time=0):
        self.BAUD_RATEi = BAUD_RATEi
        self.RXi = RXi
        self.DATAo = 0
        self.set_time = set_time

# Interface for transactions (monitor -> scoreboard)
class int_mon_scr(transactions): pass
# Interface for expected transactions (sequencer -> scoreboard)
# class int_drv_scr(transactions): pass
class int_drv_scr:
    def __init__(self):
        self.RXi = [int]
# int_drv_scr = int_drv_scr()
# ==========================================================

class scoreboard:
    """
    UVM scoreboard. The scoreboard receives the transactions packet from the monitor 
    and compares it with the reference model. The reference module is written based 
    on design specification understanding and design behavior.
    """
    def __init__(self):
        self.expected = []

    def reference_model(self):
        """
        The reference model
        """
        if not self.expected:
            raise ValueError("No expected data in scoreboard!")
        exp_data = 0
        for i in range(1, DESIGN_CONSTANT.DATA_WIDTH+1):
            exp_data += (self.expected[i].RXi * 2 ** (i - 1))
        return exp_data

    async def start(self):
        if not self.expected:
            raise ValueError("No expected data in scoreboard!")
        exp_data = scoreboard.reference_model(self)
        expected_value = exp_data
        actual_value = int_mon_scr.DATAo.integer
        error_message = f"Expected: {expected_value}, Got: {actual_value}"
        assert actual_value == expected_value, error_message

    def interface_drv_scr(self, data):
        """Recieve transaction from sequencer"""
        self.expected.append(data)

class TB:
    """
    UVM agent. Container that holds the sequencer, driver, and monitor
    """
    def __init__(self, dut):
        """
        Setup the testbench.

        Args:   
            dut : Design under test.
        """
        self.log = logging.getLogger("cocotb.tb")
        self.log.setLevel(logging.DEBUG)
        self.dut = dut
        self.clk = dut.CLKip
        self.rst = dut.RSTi
        self.transactions = ()
        self.stop_clk_flg = False
        self.stop_drv_flg = False
        self.stop_agt_flg = False
    
    async def start(self):
        """Start UVM agent process"""
        await cocotb.start(TB.generate_clock(self))
        if (TB_CONSTANT.NEED_RST): 
            await TB.generate_reset(self)
        scr = scoreboard()
        for trans in next(TB.sequencer(TB_CONSTANT.NUM_OF_TEST)):
            scr.interface_drv_scr(trans)
            await TB.driver(self,trans)
            await TB.monitor(self,trans)
        await scr.start()
        
    async def stop(self):
        """Stop UVM agent process."""
        self.dut._log.info("Finish!") 
        self.stop_clk_flg = True
        self.stop_drv_flg = True
        self.stop_agt_flg = True

    async def generate_clock(self,delay=TB_CONSTANT.CLOCK_DELAY,period=TB_CONSTANT.CLK_period):
        """
        Generate clock pulses.
        """
        await Timer(delay, units=TB_CONSTANT.UNIT)
        while not self.stop_clk_flg:
            self.clk.value = 1
            await Timer(int(period / 2), units=TB_CONSTANT.UNIT)
            self.clk.value = 0
            await Timer(int(period / 2), units=TB_CONSTANT.UNIT)

    async def generate_reset(self,delay=TB_CONSTANT.RESET_DELAY,period=TB_CONSTANT.RESET_period):
        """
        Generate reset pulse.
        """
        await Timer(delay, units=TB_CONSTANT.UNIT)
        self.rst.value = 1
        await Timer(period, units=TB_CONSTANT.UNIT)
        self.rst.value = 0
        
    def sequencer(num_transactions):
        """
        UVM sequencer. The generator creates or generates randomized transactions 
        or stimulus and passes them to the driver.

        Args:   
            num_transactions : number of test case transactions
        """
        transaction = []
        for _ in range(num_transactions):
            for index in range(DESIGN_CONSTANT.DATA_WIDTH + 1):
                transaction.append(transactions(
                                  BAUD_RATEi=DESIGN_CONSTANT.BAUD_RATE,
                                  RXi=randint(0,1) if index > 0 else 0,
                                  set_time=TB_CONSTANT.BIT_period
                                  )
                )
            transaction.append(transactions(
                              BAUD_RATEi=DESIGN_CONSTANT.BAUD_RATE,
                              RXi=1,
                              set_time=TB_CONSTANT.BIT_period
                              )
            )
        sequencer_out = tuple(transaction)
        yield sequencer_out

    async def monitor(self, 
                      transactions, 
                      output_handler=None, 
                      sig: str = "DATAo",
                      done_bit: str = "DONEo",
                      dut_interface=None
                      ):
        """
        UVM monitor. The monitor observes pin-level activity on the connected 
        interface at the input and output of the design. This pin-level 
        activity is converted into a transactions packet and sent 
        to the scoreboard for checking purposes

        Args:
            transactions : The transactions is a packet that is driven to the DUT
        """
        dut = dut_interface if dut_interface is not None else self.dut
        
        done = getattr(dut, done_bit).value
        if done:
            signal_value = getattr(dut, sig).value
            handler = output_handler if output_handler is not None else int_mon_scr
            setattr(transactions, sig, signal_value)
            setattr(handler, sig, signal_value)

    async def driver(self,transactions, 
                     sig_name: str = "RXi", 
                     baud_rate: str = "BAUD_RATEi"
                     ):
        """
        UVM driver. The driver interacts with DUT. It receives randomized transactions 
        from the generator and drives them to the driven as a pin level activity.

        Args:
            transactions : The transactions is a packet that is driven to the DUT
        """
        if not self.stop_drv_flg:
            getattr(self.dut, baud_rate).value = getattr(transactions,baud_rate)
            getattr(self.dut, sig_name).value = getattr(transactions,sig_name)
            await Timer(transactions.set_time, units=TB_CONSTANT.UNIT)  

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

# def generate_transaction() -> tuple:
#     """
#     Generate input transaction
#     """
#     test_case = []
#     exp = []
#     for cycle in range(DATA_WIDTH + 1):
#         test_case.append(transactions(
#             BAUD_RATEi=BAUD_RATE,
#             RXi=randint(0,1) if cycle > 0 else 0,
#             set_time=BIT_period)
#         )
#     test_case.append(transactions(
#             BAUD_RATEi=BAUD_RATE,
#             RXi=1,
#             set_time=BIT_period)
#         )
#     for case in test_case:
#         exp.append(case.RXi)
#     return tuple(test_case)

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
    await tb.start()
    await tb.stop()
    await Timer(int(TB_CONSTANT.TB_DELAY), units=TB_CONSTANT.UNIT)
        

# if __name__ == "__main__":
# if cocotb.SIM_NAME:
#     factory = TestFactory(run_test_uart_rx)
#     factory.generate_tests()