'''
* Author: ImpulsePower
* Date of creation: 01/04/2025
* Description: UVM class 
* License:
* Language: Python
* History:

'''
import logging
from random import randint

import cocotb
from cocotb.triggers import Timer, RisingEdge

from lib.const import *
from lib.transaction import *

class TB:
    """
    UVM agent. Container that holds the sequencer, driver, and monitor.
    """
    def __init__ (self, dut):
        self.dut = dut
        self.log = logging.getLogger("cocotb.tb")
        self.log.setLevel(logging.DEBUG)
        self.dc             = DesignConstants()
        self.tbc            = TestbenchConstants(design=self.dc)
        self.scoreboard     = Scoreboard()
        self.sequencer      = Sequencer(dut=self.dut)
        self.monitor        = Monitor()
        self.driver         = Driver(dut=self.dut,scr=self.scoreboard,tbc=self.tbc)
        # Setup
        self.sig_in: str
        self.sig_out: str
        self.stop_clk_flg = False

    def setup(self, sig_in: str, sig_out: str) -> None:
        """
        Testbench setup. Initialization of class fields
        
        Args:
            sig_in: input variable parameter of the test case 
            sig_out: output parameter of the test case
        """
        if (sig_in and sig_out):
            # Здесь должна быть проверка на наличие данного сигнала в списке портов
            self._sig_in = sig_in
            self._sig_in = sig_out
            self.log.info("Signals setting!")
        else:
            self.log.error("Signals is not set!")

    async def start(self) -> None:
        """
        Start UVM agent process.
        """
        self.dut._log.info("Start testing")
        await cocotb.start(self.generate_clock())
        if (self.tbc.NEED_RST): 
            await self.generate_reset()
        trs = self.sequencer.start(self._sig_in)
        print(trs)
        # for tr in trs:
        #     # self.scoreboard.interface_drv_scr(tr)
        #     await self.driver.start(self,tr)
        #     await self.monitor.start(self,tr,sig=self.sig_out)
        # await self.scoreboard.start()

        # for trans in next(self.sequencer.start(self,self.tbc.NUM_OF_TEST)):
        #     self.scoreboard.interface_drv_scr(trans)
        #     await TB.driver(self,trans)
        #     await TB.monitor(self,trans,sig=self.sig_out)
        # await self.scoreboard.start()

    async def stop(self) -> None:
        """
        Stop UVM agent process.
        """
        self.dut._log.info("Finish testing!") 
        self.sequencer.stop()
        self.driver.stop()
        self.monitor.stop()
        self.scoreboard.stop()

    async def generate_clock(self) -> None:
        """
        Generate clock pulses.
        """
        # Проверка на присутствие CLK_NAME в списке портов 
        clk = getattr(self.dut,self.dc.CLK_NAME)
        delay = self.tbc.CLOCK_DELAY
        period = self.tbc.CLK_period
        await Timer(delay, units=self.tbc.UNIT)
        while not self.stop_clk_flg:
            clk.value = 1
            await Timer(int(period / 2), units=self.tbc.UNIT)
            clk.value = 0
            await Timer(int(period / 2), units=self.tbc.UNIT)

    async def generate_reset(self) -> None:
        """
        Generate reset pulse.
        """
        # Проверка на присутствие RST_NAME в списке портов 
        rst = getattr(self.dut,self.dc.RST_NAME)
        delay = self.tbc.RESET_DELAY
        period = self.tbc.RESET_period
        await Timer(delay, units=self.tbc.UNIT)
        rst.value = 1
        await Timer(period, units=self.tbc.UNIT)
        rst.value = 0

    def get_stats(self) -> Dict[str, Any]:
        """
        Getting statistics on a transaction.
        """
        return {
            'start_time': self.set_time,
            'errors': self.error_count,
        }

    def __repr__(self) -> str:
        return (f"baud={self.dc.BAUD_RATE}, "
                f"rx={hex(self.RXi)}, "
                f"data={hex(self.DATAo)}, "
                f"time={self.set_time:.2f}{self.config.unit})"
                f"sig_in={self.sig_in}, "
                f"sig_out={self.sig_out}, "
                )

class Sequencer:
    """
    UVM sequencer. The generator creates or generates randomized transactions 
    or stimulus and passes them to the driver.
    Args:   
        num_transactions : number of test case transactions
    """
    def __init__(self,dut):
        self.dut = dut
        self.log = logging.getLogger("cocotb.sequencer")
        self.log.setLevel(logging.DEBUG)
        self.transaction    = UART_Transaction()
        self.dc             = DesignConstants()
        self.tbc            = TestbenchConstants(design=self.dc)
        self.sig_in: str

    def start(self, sig_name):
        packet_width = self.dc.DATA_WIDTH + 2
        self._set_in(sig_name)
        for i in range(packet_width):
            br =  self._gen_br(i) if self.sig_in == "BAUD_RATEi" else self.dc.BAUD_RATE
            rx =  self._gen_rx(i) if self.sig_in == "RXi" else 0
            tm =  self._gen_tm(i) if self.sig_in == "TIME" else self.tbc.BIT_period
            self.transaction.forge(
                br=br, 
                rx=rx, 
                tm=tm
                )
            self.transaction.add()
        return self.transaction.get()

    def stop(self) -> None:
        """
        Stop sequencer
        """
        self.log.info("sequencer stop")

    def _set_in(self,name):
        '''
        '''
        self.sig_in = name

    def _gen_br(self,index) -> int:
        '''
        '''
        return randint(self.transaction.blank.config.min_baud_rate,
                       self.transaction.blank.config.max_baud_rate)

    def _gen_rx(self,index) -> int:
        '''
        '''
        if index == 0:
            return 0
        if index == self.dc.DATA_WIDTH + 1:
            return 1
        return randint(0,1)

    def _gen_tm(self,index) -> int:
        '''
        '''
        return randint(self.tbc.BIT_period - index, self.tbc.BIT_period + index)

class Driver:
    """
    UVM driver. The driver interacts with DUT. It receives randomized transactions 
    from the generator and drives them to the driven as a pin level activity.
    Args:
        transactions : The transactions is a packet that is driven to the DUT
    """
    def __init__(self, dut, scr, tbc):
        self.log = logging.getLogger("cocotb.driver")
        self.log.setLevel(logging.DEBUG)
        self.dut = dut
        self.scr = scr
        self.tbc = tbc

    async def start(self,tr, 
                     sig_name: str = "RXi", 
                     baud_rate: str = "BAUD_RATEi"
                     ):
        self.scr.interface_drv_scr(tr)
        if not self.stop_drv_flg:
            getattr(self.dut, baud_rate).value = getattr(tr,baud_rate)
            getattr(self.dut, sig_name).value = getattr(tr,sig_name)
            await Timer(tr.set_time, units=self.tbc.UNIT)

    def stop(self) -> None:
        """
        Stop driver
        """
        self.log.info("driver stop")

class Monitor:
    """
    UVM monitor. The monitor observes pin-level activity on the connected 
    interface at the input and output of the design. This pin-level 
    activity is converted into a transactions packet and sent 
    to the scoreboard for checking purposes
    
    Args:
        sig_out : The transactions is a packet that is driven to the DUT
    """
    def __init__(self):
        self.sig_out: str = ""
        self.log = logging.getLogger("cocotb.monitor")
        self.log.setLevel(logging.DEBUG)

    async def start(self, 
                      transactions, 
                      output_handler=None, 
                      done_bit: str = "DONEo",
                      dut_interface=None
                      ):
        dut = dut_interface if dut_interface is not None else self.dut
        sig = self.sig_out
        done = getattr(dut, done_bit).value
        if done:
            signal_value = getattr(dut, sig).value
            handler = output_handler if output_handler is not None else 0
            setattr(transactions, sig, signal_value)
            setattr(handler, sig, signal_value)

    def stop(self) -> None:
        """
        Stop monitor
        """
        self.log.info("monitor stop")

class Scoreboard:
    """
    UVM scoreboard. The scoreboard receives the transactions packet from the monitor 
    and compares it with the reference model. The reference module is written based 
    on design specification understanding and design behavior.
    """ 
    def __init__(self):
        self.expected: list = []
        self.log = logging.getLogger("cocotb.scoreboard")
        self.log.setLevel(logging.DEBUG)

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
        exp_data = self.reference_model(self)
        expected_value = exp_data
        # actual_value = int_mon_scr.DATAo.integer
        actual_value = 0
        error_message = f"Expected: {expected_value}, Got: {actual_value}"
        assert actual_value == expected_value, error_message

    def interface_drv_scr(self, data):
        """Recieve transaction from sequencer"""
        self.expected.append(data)

    def stop(self) -> None:
        """
        Stop scoreboard
        """
        self.log.info("scoreboard stop")