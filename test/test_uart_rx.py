'''
* Author: ImpulsePower
* Date of creation: 03/02/2025
* Description: Cocotb testbench of UART interface receiver, 
* License:
* Language: Python
* History:

'''
from enum import Enum
from random import randint
# import warnings
# import logging
# from icecream import ic

import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.regression import TestFactory

# Constants
# ==========================================================
CLOCK_FREQ = 100000000 # Clock frequency in Hz
BAUD_RATE = 115200 # Baud rate in bps
DATA_WIDTH = 8 # Data width in bits
# ==========================================================

# TB constant
# ==========================================================
NEED_RST = True
# ==========================================================

# Unit enum with unit name and value
# ==========================================================
class Unit(Enum):
    fs = 10**15
    ps = 10**12
    ns = 10**9
    us = 10**6
    ms = 10**3
    sec = 1

UNIT = Unit.ns.name
UNIT_VALUE = Unit.ns.value
# ==========================================================

# Signal periods
# ==========================================================
CLK_period = UNIT_VALUE / CLOCK_FREQ
RESET_period = 20
BIT_period = int( (CLOCK_FREQ / BAUD_RATE) * CLK_period)
# ==========================================================

# Design delays
# ==========================================================
CLOCK_DELAY = 10 # Clock delay in ns
RESET_DELAY = 10 # Reset delay in ns
DELAY = 20 # Reset delay in ns
TB_DELAY = BIT_period * 2
# ==========================================================

# Global vars
# ==========================================================
EXP_TRANS = []
# ==========================================================

# Initializing transactions class
# ==========================================================
class transactions:
    def __init__(self, BAUD_RATEi=0,RXi=0,set_time=0):
        self.BAUD_RATEi = BAUD_RATEi
        self.RXi = RXi
        self.DATAo = 0
        self.set_time = set_time

# Interface for transactions (monitor -> scoreboard)
class interface(transactions): pass
# ==========================================================

class scoreboard:
    """
    UVM scoreboard. The scoreboard receives the transactions packet from the monitor 
    and compares it with the reference model. The reference module is written based 
    on design specification understanding and design behavior.
    """
    def __init__(self, dut):
        self.dut = dut
        self.expected = ()

    def reference_model(self):
        """
        The reference model
        """
        exp_data = 0  
        for i in range(1,DATA_WIDTH+1):
            exp_data += (self.expected[i] * 2**(i - 1))
        return exp_data

    async def start(self):
        exp_data = scoreboard.reference_model(self)
        assert interface.DATAo.integer == exp_data, "value is not expected!"

    def add_interface():
        pass

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
        self.dut = dut
        self.clk = dut.CLKip
        self.rst = dut.RSTi
        self.transactions = ()
        self.stop_clk_flg = False
        self.stop_drv_flg = False
        self.stop_agt_flg = False
    
    async def start(self):
        """Start generating input data."""
        await cocotb.start(TB.generate_clock(self))
        if (NEED_RST): await TB.generate_reset(self)
        if self.transactions:
            for i,trans in enumerate(self.transactions):
                # trans = TB.sequencer(i,trans)
                # value = TB.sequencer(i)
                # print(value)
                # setattr(trans,"RXi",TB.sequencer(i))
                await TB.driver(self,trans)
                await TB.monitor(self,trans)
        else: 
            self.dut._log.info("There are no transactions!") 
        
    async def stop(self):
        """Stop generating input data."""
        self.stop_clk_flg = True
        self.stop_drv_flg = True
        self.stop_agt_flg = True

    async def generate_clock(self,delay=CLOCK_DELAY,period=CLK_period):
        """
        Generate clock pulses.
        """
        await Timer(delay, units=UNIT)
        while not self.stop_clk_flg:
            self.clk.value = 1
            await Timer(int(period / 2), units=UNIT)
            self.clk.value = 0
            await Timer(int(period / 2), units=UNIT)

    async def generate_reset(self,delay=RESET_DELAY,period=RESET_period):
        """
        Generate reset pulse.
        """
        await Timer(delay, units=UNIT)
        self.rst.value = 1
        await Timer(period, units=UNIT)
        self.rst.value = 0
        
    # def sequencer(index):
    #     """
    #     UVM sequencer. The generator creates or generates randomized transactions 
    #     or stimulus and passes them to the driver.

    #     Args:   
    #         num_transactions : number of test case transactions
    #     """
    #     # transactions = []
    #     # global EXP_TRANS
    #     # # for i in range(num_transactions):
    #     # BAUD_RATEi = BAUD_RATE
    #     # RXi = 0
    #     # transactions.append(transactions(BAUD_RATEi,RXi))
    #     # for j in range(DATA_WIDTH):
    #     #     RXi = randint(0, 1)
    #     #     EXP_TRANS.append(RXi)
    #     #     transactions.append(transactions(BAUD_RATEi,RXi))
    #     # RXi = 1
    #     # transactions.append(transactions(BAUD_RATEi,RXi))
    #     # return transactions
    #     if 0 < index < DATA_WIDTH + 1:
    #         yield randint(0,1)
    #     elif index == 0:
    #         yield 0
    #     elif index == DATA_WIDTH + 1:
    #         yield 1

    
    async def monitor(self,transactions):
        """
        UVM monitor. The monitor observes pin-level activity on the connected 
        interface at the input and output of the design. This pin-level 
        activity is converted into a transactions packet and sent 
        to the scoreboard for checking purposes

        Args:
            transactions : The transactions is a packet that is driven to the DUT
        """
        transactions.DATAo = self.dut.DATAo.value
        interface.DATAo = transactions.DATAo
        
    async def driver(self,transactions):
        """
        UVM driver. The driver interacts with DUT. It receives randomized transactions 
        from the generator and drives them to the driven as a pin level activity.

        Args:
            transactions : The transactions is a packet that is driven to the DUT
        """
        if not self.stop_drv_flg:
            self.dut.BAUD_RATEi.value = transactions.BAUD_RATEi
            self.dut.RXi.value = transactions.RXi
            await Timer(transactions.set_time, units=UNIT)  

@cocotb.test()
async def run_test_uart_rx(dut):
    """
    Try accessing the design.

    Args:   
        dut : Design under test.
    """
    def generate_transaction() -> tuple:
        """
        Generate input transaction
        """
        test_case = []
        exp = []
        for cycle in range(DATA_WIDTH + 1):
            test_case.append(transactions(
                BAUD_RATEi=BAUD_RATE,
                RXi=randint(0,1) if cycle > 0 else 0,
                set_time=BIT_period)
            )
        test_case.append(transactions(
                BAUD_RATEi=BAUD_RATE,
                RXi=1,
                set_time=BIT_period)
            )
        for case in test_case:
            exp.append(case.RXi)
        return tuple(exp),tuple(test_case)

    tb = TB(dut)
    scr = scoreboard(dut)
    scr.expected,tb.transactions = generate_transaction()
    # # clk_edge = RisingEdge(clk)
    await tb.start()
    await scr.start()
    await tb.stop()
    await Timer(int(TB_DELAY), units=UNIT)

# if __name__ == "__main__":
# if cocotb.SIM_NAME:
#     factory = TestFactory(run_test_uart_rx)
#     factory.generate_tests()