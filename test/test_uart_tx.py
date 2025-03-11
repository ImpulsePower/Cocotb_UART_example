'''
* Author: ImpulsePower
* Date of creation: 04/02/2025
* Description: Cocotb testbench of UART interface transmitter, 
* License:
* Language: Python
* History:

'''

from enum import Enum
from random import randint

from icecream import ic
import cocotb
from cocotb.triggers    import Timer

# Constants
# ==========================================================
CLOCK_FREQ = 100000000
BAUD_RATE = 115200
DATA_WIDTH = 8
TRANSMIT_VALUE = 250
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
# ==========================================================

# Global vars
# ==========================================================
EXP_TRANS = []
# ==========================================================

# Initializing transaction class
# ==========================================================
class Transaction:
    def __init__(self, BAUD_RATEi=0,TXi=0, TX_ENi=0):
        self.BAUD_RATEi = BAUD_RATEi
        self.TXi = TXi
        self.TX_ENi = TX_ENi
        self.DATAo = 0

# Interface for transaction (monitor -> scoreboard)
class interface(Transaction): pass
out_transaction = []
# ==========================================================

async def scoreboard(dut):
    """
    UVM scoreboard. The scoreboard receives the transaction packet from the monitor 
    and compares it with the reference model. The reference module is written based 
    on design specification understanding and design behavior.

    Args:   
        dut : Design under test.
    """
    # def reference_model():
    #     """
    #     The reference model
    #     """
    #     exp_data = 0  
    #     for i in range(DATA_WIDTH):
    #         exp_data += (EXP_TRANS[i] * 2**(i))
    #     return exp_data
    # def kek(list):
    #     for i in range(len(list)):
    #         sum += list[i] * (2**i)
    #     return sum
    
    # exp_data = map(kek,EXP_TRANS)
    # ic(out_transaction)
    # ic(EXP_TRANS)
    EXP_TRANS.reverse()
    for i in range(DATA_WIDTH):
    # assert interface.DATAo == exp_data, "value is not expected!"
        assert out_transaction[i] == EXP_TRANS[i], "value is not expected!"
    # dut._log.info("out is %s", interface.DATAo)

async def agent(dut):
    """
    UVM agent. Container that holds the sequencer, driver, and monitor

    Args:   
        dut : Design under test.
    """
    async def monitor(dut,transaction):
        """
        UVM monitor. The monitor observes pin-level activity on the connected 
        interface at the input and output of the design. This pin-level 
        activity is converted into a transaction packet and sent 
        to the scoreboard for checking purposes

        Args:   
            dut : Design under test.
            transaction : The transaction is a packet that is driven to the DUT
        """
        global out_transaction
        for cycle in range(DATA_WIDTH):
            await Timer(BIT_period, units=UNIT)
            transaction.DATAo = dut.DATAo.value
            out_transaction.append(transaction.DATAo)
        # interface.DATAo = transaction.DATAo
        await Timer(BIT_period, units=UNIT)
        
        
    def sequencer(num_transactions=10):
        """
        UVM sequencer. The generator creates or generates randomized transactions 
        or incentives and passes them to the driver.

        Args:   
            num_transactions : number of test case transactions
        """ 
        transactions = []
        global EXP_TRANS
        # for i in range(num_transactions):
        BAUD_RATEi = BAUD_RATE
        TX_ENi = 1
        TXi = randint(0, (2 ** DATA_WIDTH) - 1)
        transactions.append(Transaction(BAUD_RATEi,TXi,TX_ENi))
        EXP_TRANS = [int(bit) for bit in format(TXi, '08b')]
        return transactions

    async def driver(dut,transaction):
        """
        UVM driver. The driver interacts with DUT. It receives randomized transactions 
        from the generator and drives them to the driven as a pin level activity.

        Args:
            dut : Design under test.   
            num_transactions : number of test case transactions
        """ 
        dut.BAUD_RATEi.value = transaction.BAUD_RATEi
        dut.TXi.value = transaction.TXi
        dut.TX_ENi.value = transaction.TX_ENi
        await Timer(BIT_period, units=UNIT)

    transactions = sequencer()
    await Timer(DELAY, units=UNIT)
    for transaction in transactions:
        await driver(dut, transaction)
        await monitor(dut, transaction)

async def generate_clock(clock):
    """
    Generate clock pulses.
    
    Args:   
        clock : Clock signal.
    """
    await Timer(CLOCK_DELAY, units=UNIT)
    while True:
        clock.value = 1
        await Timer(int(CLK_period / 2), units=UNIT)
        clock.value = 0
        await Timer(int(CLK_period / 2), units=UNIT)

async def generate_reset(reset):
    """
    Generate reset pulse.
    
    Args:   
        reset : Reset signal.
    """
    await Timer(RESET_DELAY, units=UNIT)
    reset.value = 1
    await Timer(RESET_period, units=UNIT)
    reset.value = 0
    # reset._log.debug("Reset complete")

@cocotb.test()
async def test_uart_tx(dut):
    """Try accessing the design."""
    # data_out = []
    # bit_period = int( (CLOCK_FREQ / BAUD_RATE) * CLK_period)
    # await cocotb.start(generate_clock(dut))
    # await Timer(20, units="ns")
    # dut.BAUD_RATEi.value = BAUD_RATE
    # dut.TX_ENi.value = 1  
    # dut.TXi.value = TRANSMIT_VALUE
    # binary_string = format(TRANSMIT_VALUE, '08b')
    # bit_array = [int(bit) for bit in binary_string]
    # print(f"test case in binary: {bit_array}")
    # await Timer(int(bit_period), units="ns")
    # for cycle in range(DATA_WIDTH):
    #     await Timer(bit_period, units="ns")
    #     data_out.append(dut.DATAo.value)
    #     dut._log.info("out is %s", dut.DATAo.value)

    # await Timer(bit_period * 2, units="ns")
    # for i in range(DATA_WIDTH):
    #     assert bit_array[(DATA_WIDTH - 1) - i] == data_out[i], "value is not expected!"
    await cocotb.start(generate_clock(dut.CLKip))    
    await generate_reset(dut.RSTi)
    await agent(dut)
    await scoreboard(dut)
