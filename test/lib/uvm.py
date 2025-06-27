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
from icecream import ic

import cocotb
from cocotb.triggers import Timer, RisingEdge, Edge, Event

from test.lib.config import *
from lib.transaction import *
# from cocotbext.axi import AxiLiteBus, AxiLiteMaster

class TB:
    """
    UVM agent. Container that holds the sequencer, driver, and monitor.
    """
    def __init__ (self, dut):
        self.dut = dut
        self.log = logging.getLogger("cocotb.tb")
        self.log.setLevel(logging.DEBUG)
        self.transaction_id: int = 0
        self.sequencer_done = Event()
        self.driver_done    = Event()
        self.monitor_done   = Event()
        self.dc             = DesignConstants()
        self.tbc            = TestbenchConstants(design=self.dc)
        self.scoreboard     = Scoreboard(id=self.transaction_id)
        self.sequencer      = Sequencer(dut=self.dut,
                                        dc=self.dc, 
                                        tbc=self.tbc)
        self.monitor        = Monitor(done=self.monitor_done,
                                      dut=self.dut,
                                      scr=self.scoreboard)
        self.driver         = Driver(done=self.driver_done,
                                     dut=self.dut,
                                     scr=self.scoreboard,
                                     tbc=self.tbc)
        # Setup
        self.sig_in: str
        self.sig_out: str
        self.stop_clk_flg = False
        self.repeat_flag = True
        self.tests = self.tbc.NUM_OF_TEST
        

    def setup(self, sig_in: str, sig_out: str) -> None:
        """
        Testbench setup. Initialization of class fields
        
        Args:
            sig_in: input variable parameter of the test case 
            sig_out: output parameter of the test case
        """
        if (sig_in and sig_out):
            self._sig_in = sig_in
            self._sig_out = sig_out
        else:
            self.log.error("Signals is not set!")

    async def start(self) -> None:
        """
        Start UVM agent process.
        """
        # if self.repeat_flag:
        await cocotb.start(self.generate_clock())
        if (self.tbc.NEED_RST): 
            await self.generate_reset()
        self.driver.trs = self.sequencer.start(self._sig_in)
        self.transaction_id += 1
        # self.monitor.trs = self.driver.trs
        cocotb.start_soon(self.driver.start())
        cocotb.start_soon(self.monitor.start(sig=self._sig_out))
        # await self.driver.start()
        # await self.monitor.start(self._sig_out)

        # read: str = "RDi"
        # self.log.debug(f"Trying to set signal: {read}")  # Должно вывести "RDi"
        # if not hasattr(self.dut, read):
        #     self.log.error(f"Signal {read} not found in DUT!")
        # getattr(self.dut, read).value = 1

        await self.driver_done.wait()
        await self.monitor_done.wait()
        await self.scoreboard.start(id=self.transaction_id)

        # for trans in next(self.sequencer.start(self,self.tbc.NUM_OF_TEST)):
        #     self.scoreboard.interface_drv_scr(trans)
        #     await TB.driver(self,trans)
        #     await TB.monitor(self,trans,sig=self.sig_out)
        # await self.scoreboard.start()

    async def stop(self) -> None:
        """
        Stop UVM agent process.
        """
        self.repeat_flag = False
        self.sequencer.stop()
        self.driver.stop()
        self.monitor.stop()
        self.scoreboard.stop()
        self.reset()
        if (self.tests > 0): 
            self.tests -= 1
            if self.tests != 0: 
                await self.start()
                await self.stop()
        else: 
            self.dut._log.info("Finish")
            

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

    def reset(self) -> None:
        """
        Reset the TB and its components to initial state.
        """
        self.sequencer_done.clear()
        self.driver_done.clear()
        self.monitor_done.clear()
        # self.transaction_id = 0
        # self.stop_clk_flg = False
        # self.tests = self.tbc.NUM_OF_TEST
        # Reset components
        self.scoreboard.reset()
        self.sequencer.reset()
        self.driver.reset()
        self.monitor.reset()

    # def __repr__(self) -> str:
    #     return (f"baud={self.BAUD_RATEi}, "
    #             f"rx={hex(self.RXi)}, "
    #             f"data={hex(self.DATAo)}, "
    #             f"time={self.set_time:.2f}{self.config.unit})")

class Sequencer:
    """
    UVM sequencer. The generator creates or generates randomized transactions 
    or stimulus and passes them to the driver.
    Args:   
        num_transactions : number of test case transactions
    """
    def __init__(self, dut, dc, tbc):
        self.dut = dut
        self.log = logging.getLogger("cocotb.sequencer")
        self.log.setLevel(logging.DEBUG)
        self.transaction    = UART_Transaction()
        self.dc             = dc
        self.tbc            = tbc
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
                tm=tm,
                rd=1
                )
            self.transaction.add(i)
        return self.transaction.get()

    def stop(self) -> None:
        """
        Stop sequencer
        """
        self.transaction.reset()
        # self.log.info("sequencer stop")

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

    def reset(self):
        self.transaction = UART_Transaction()  # Create fresh transaction object
        # self.sig_in = ""  # Reset input signal name
        # If there are any other internal state variables, reset them here
        # For example:
        # if hasattr(self, 'current_transaction_num'):
        #     self.current_transaction_num = 0

class Driver:
    """
    UVM driver. The driver interacts with DUT. It receives randomized transactions 
    from the generator and drives them to the driven as a pin level activity.
    Args:
        transactions : The transactions is a packet that is driven to the DUT
    """
    def __init__(self, dut, scr, tbc, done):
        self.log = logging.getLogger("cocotb.driver")
        self.log.setLevel(logging.DEBUG)
        self.dut = dut
        self.scr = scr
        self.tbc = tbc
        self.trs: List[Any]
        self.done = done

    async def start(self,
                    sig_name: str = "RXi", 
                    baud_rate: str = "BAUD_RATEi",
                    read: str = "RDi"
                    ):
        for tr in self.trs:
            self.scr.interface_drv_scr(tr)
            getattr(self.dut, baud_rate).value = getattr(tr,baud_rate)
            getattr(self.dut, sig_name).value = getattr(tr,sig_name)
            getattr(self.dut, read).value = getattr(tr,read)
            await Timer(tr.set_time, units=self.tbc.UNIT)
        self.done.set()

    def stop(self) -> None:
        """
        Stop driver
        """
        self.trs = []
        # self.log.info("driver stop")

    def reset(self):
        """
        Reset the driver to its initial state.
        - Clears the transaction list
        - Resets the done event
        - Maintains references to dut, scr, tbc and log as they are considered constant
        """
        self.trs = []  # Clear transaction list
        self.done.clear()  # Reset the completion event

class Monitor:
    """
    UVM monitor. The monitor observes pin-level activity on the connected 
    interface at the input and output of the design. This pin-level 
    activity is converted into a transactions packet and sent 
    to the scoreboard for checking purposes
    
    Args:
        sig_out : The transactions is a packet that is driven to the DUT
    """
    def __init__(self, dut, scr, done):
        self.log = logging.getLogger("cocotb.monitor")
        self.log.setLevel(logging.DEBUG)
        self.dut = dut
        self.sig_out: str
        self.out_value: int
        self.scr = scr
        self.done = done

    def _set_out(self,name):
        '''
        '''
        self.sig_out = name

    async def start(self, 
                    sig, 
                    output_handler=None, 
                    done_bit: str = "DONEo",
                    dut_interface=None
                    ):
        
        dut = dut_interface if dut_interface is not None else self.dut
        self._set_out(sig)
        # self.log.info(f'Done: {self.dut.DONEo.value}')
        self.log.info(f'RDi: {self.dut.RDi.value}')
        await RisingEdge(dut.DONEo)
        self.out_value = getattr(dut, self.sig_out).value
        self.scr.interface_mon_scr(self.out_value)
        self.done.set()
        

    def stop(self) -> None:
        """
        Stop monitor
        """
        # self.log.info("monitor stop")
        ...

    def reset(self):
        """
        Reset the monitor to its initial state.
        - Clears output signal name and value
        - Resets the done event
        - Maintains references to dut and scr as they are considered constant
        """
        self.out_value = 0     # Reset captured output value
        self.done.clear()      # Reset completion event

class Scoreboard:
    """
    UVM scoreboard. The scoreboard receives the transactions packet from the monitor 
    and compares it with the reference model. The reference module is written based 
    on design specification understanding and design behavior.
    """ 
    def __init__(self,id):
        self.log = logging.getLogger("cocotb.scoreboard")
        self.log.setLevel(logging.DEBUG)
        self.expected: list = []
        self.actual: int
        self.id = id
        self.exp: int
        self.exp_list: int

    def reference_model(self):
        """
        The reference model
        """
        if not self.expected:
            raise ValueError("No expected data in scoreboard!")
        exp_data = 0
        for i in range(1, DesignConstants.DATA_WIDTH+1):
            exp_data += (self.expected[i].RXi * 2 ** (i - 1))
            self.exp_list = bin(exp_data)
        self.exp = exp_data

    async def start(self,id):
        if not self.expected:
            raise ValueError("No expected data in scoreboard!")
        self.id = id
        self.reference_model()

        # expected_value = self.exp
        error_message = f"Expected: {self.exp}, Got: {self.actual}"
        assert self.actual == self.exp, error_message

    def interface_drv_scr(self, data):
        """Recieve transaction from sequencer"""
        self.expected.append(data)

    def interface_mon_scr(self, data):
        """Recieve transaction from sequencer"""
        self.actual = data

    def stop(self) -> None:
        """
        Stop scoreboard
        """
        self.log.info(
            f"TR ID:{self.id} TRANSMIT:{self.exp_list} EXP:{hex(self.exp)} GOT:{hex(self.actual)}"
            )
        # self.log.info("scoreboard stop")

    def reset(self) -> None:
        """
        Reset the scoreboard to its initial state.
        - Clears all expected and actual values
        - Resets error counters
        - Maintains the transaction ID
        """
        self.expected = []      # Очистка списка ожидаемых значений
        self.exp_list = None      # Очистка альтернативного списка ожидаемых значений
        self.actual = None      # Сброс фактического значения
        self.exp = None         # Сброс ожидаемого значения
        # self.errors = 0         # Сброс счетчика ошибок
        # self.matches = 0        # Сброс счетчика совпадений