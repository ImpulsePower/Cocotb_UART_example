from cocotb.triggers import Timer, RisingEdge
from const import *
import logging
import cocotb
from random import randint

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
        for i in range(1, DesignConstants.DATA_WIDTH+1):
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
        self.dc = DesignConstants()
        self.tbc = TestbenchConstants(design=self.dc)

    async def start(self):
        """Start UVM agent process"""
        await cocotb.start(TB.generate_clock(self))
        if (self.tbc.NEED_RST): 
            await TB.generate_reset(self)
        scr = scoreboard()
        for trans in next(TB.sequencer(self,self.tbc.NUM_OF_TEST)):
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

    async def generate_clock(self):
        """
        Generate clock pulses.
        """
        delay=self.tbc.CLOCK_DELAY
        period=self.tbc.CLK_period
        await Timer(delay, units=self.tbc.UNIT)
        while not self.stop_clk_flg:
            self.clk.value = 1
            await Timer(int(period / 2), units=self.tbc.UNIT)
            self.clk.value = 0
            await Timer(int(period / 2), units=self.tbc.UNIT)

    async def generate_reset(self):
        """
        Generate reset pulse.
        """
        delay=self.tbc.RESET_DELAY
        period=self.tbc.RESET_period
        await Timer(delay, units=self.tbc.UNIT)
        self.rst.value = 1
        await Timer(period, units=self.tbc.UNIT)
        self.rst.value = 0
        
    def sequencer(self,num_transactions):
        """
        UVM sequencer. The generator creates or generates randomized transactions 
        or stimulus and passes them to the driver.

        Args:   
            num_transactions : number of test case transactions
        """
        transaction = []
        for _ in range(num_transactions):
            for index in range(self.dc.DATA_WIDTH + 1):
                transaction.append(transactions(
                                  BAUD_RATEi=self.dc.BAUD_RATE,
                                  RXi=randint(0,1) if index > 0 else 0,
                                  set_time=self.tbc.BIT_period
                                  )
                )
            transaction.append(transactions(
                              BAUD_RATEi=self.dc.BAUD_RATE,
                              RXi=1,
                              set_time=self.tbc.BIT_period
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
            await Timer(transactions.set_time, units=self.tbc.UNIT)  