'''
* Author: ImpulsePower
* Date of creation: 01/04/2025
* Description: Classes for testbench constant 
* License:
* Language: Python
* History:

'''
from dataclasses import dataclass
from functools import cached_property

class Units:
    """
    Class of time measurement unit. Needed for calculations of delays, 
    periods of signals, etc
    """
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
        current_unit = unit if unit is not None else TestbenchConstants.UNIT
        self.name: str = self.get_name(current_unit)
        self.value: int = self.get_value(current_unit)

    def get_name(self, unit: str) -> str:
        """
        Return full name of units

        Args:   
            unit: Name of unit.

        Return:
            str: Full name UNIT string
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

    def get_value(self, unit: str) -> int | None:
        """ Get mult factor of UNIT string 

        Args:   
            unit: Name of unit.

        Return:
            int: Unit value from value table
        """
        try:
            return getattr(self, unit)
        except AttributeError:
            return None

    def __repr__(self) -> str:
        """Printing current value UNIT

        Return:
            str: Printing string with mask:
            UNIT: X (value=X)
        """
        return f"<UNIT: {self.name} (value={self.value})>"
    
@dataclass(frozen=True)
class DesignConstants:
    """
    Design-related constants

    Attributes:
        CLOCK_FREQ: Clock frequency in Hz (default: 100 MHz)
        BAUD_RATE: Baud rate in bps (default: 115200)
        DATA_WIDTH: Data width in bits (default: 8)
        CLK_NAME: Name of clock signal in hardware design (default: "CLKip") 
        RST_NAME: Name of reset signal in hardware design (default: "RST_NAME") 
    """
    CLOCK_FREQ: int = 100_000_000
    BAUD_RATE: int  = 115_200
    DATA_WIDTH: int = 8
    CLK_NAME: str   = "CLKip"
    RST_NAME: str   = "RSTi"
    DONE_NAME: str  = "DONEo"

@dataclass(frozen=True)
class TestbenchConstants:
    """
    Testbench-related constants
    
    Args:
        NEED_RST: Whether reset is needed (default: True)
        NUM_OF_TEST: Number of tests (default: 1)
        UNIT: Time unit (default: 'ns')
        RESET_period: Reset period in time units (default: 20)
        CLOCK_DELAY: Clock delay in ns (default: 10)
        RESET_DELAY: Reset delay in ns (default: 10)
        DELAY: Generic delay in ns (default: 20)
    """
    design: DesignConstants
    NEED_RST: bool = True
    NUM_OF_TEST: int = 1
    UNIT: str = 'ns'
    RESET_period: int = 20
    CLOCK_DELAY: int = 10
    RESET_DELAY: int = 10
    DELAY: int = 20
    
    @cached_property
    def CLK_period(self) -> float:
        """Calculates the time of the clock period in current units

        Return: 
            float: Calculated time of the clock period
        """
        return Units().value / self.design.CLOCK_FREQ
    
    @cached_property
    def BIT_period(self) -> int:
        """Bit period in current units

        Return: 
            int: Calculated time of the bit period
        """
        return int((self.design.CLOCK_FREQ / self.design.BAUD_RATE) * self.CLK_period)
    
    @cached_property
    def TB_DELAY(self) -> int:
        """Testbench delay in current units

        Return: 
            int: Calculated time of the internal testbench period
        """
        return self.BIT_period * 2

    def __repr__(self) -> str:
        """
        Printing current value

        Return: 
            str: Printing string with mask:
            RESET: X UNIT: X
            CLOCK DELAY: X RESET DELAY: X DELAY: X 
        """
        return f'''
        <RESET: {self.NEED_RST} UNIT: {self.UNIT}>
        <CLOCK DELAY: {self.CLOCK_DELAY} RESET DELAY: {self.RESET_DELAY}) DELAY: {self.DELAY})>
        '''
    
class FIFO_ports:
    clk: str    = "CLKip"
    rst: str    = "RSTi"
    datai: str  = "DATAi"
    datao: str  = "DATAo"
    we: str     = "WEi"
    rd: str     = "RDi"
    full: str   = "FULLo"
    empty: str  = "EMPTYo"
    fifo_depth: str = "FIFO_DEPTH"
    data_width: str = "DATA_WIDTH"

    def __init__(self, dut):
        self._dut = dut

    @property
    def CLK(self):
        return getattr(self._dut, self.clk)

    @property
    def RST(self):
        return getattr(self._dut, self.rst)

    @property
    def DATAi(self):
        return getattr(self._dut, self.datai)
    
    @property
    def DATAo(self):
        return getattr(self._dut, self.datao)
    
    @property
    def WE(self):
        return getattr(self._dut, self.we)
    
    @property
    def RD(self):
        return getattr(self._dut, self.rd)

    @property
    def FULL(self):
        return getattr(self._dut, self.full)
    
    @property
    def EMPTY(self):
        return getattr(self._dut, self.empty)
    
    @property
    def FIFO_DEPTH(self):
        return getattr(self._dut, self.fifo_depth)

    @property
    def DATA_WIDTH(self):
        return getattr(self._dut, self.data_width)

class UART_RX_ports:
    clk: str = "CLKip"
    rst: str = "RSTi"
    rx: str = "RXi"
    baud_rate_rd: str = "BAUD_RATE_RDi"
    baud_rate_we: str = "BAUD_RATE_WEi"
    baud_rate: str = "BAUD_RATEi"
    done: str = "DONEo"
    ready: str = "READYo"
    data: str = "DATAo"
    freq_clk: str = "FREQ_CLK"
    data_width: str = "DATA_WDTH"

    def __init__(self, dut):
        self._dut = dut

    @property
    def CLK(self):
        return getattr(self._dut, self.clk)

    @property
    def RST(self):
        return getattr(self._dut, self.rst)

    @property
    def RX(self):
        return getattr(self._dut, self.rx)
    
    @property
    def BAUD_RATE_RD(self):
        return getattr(self._dut, self.baud_rate_rd)
    
    @property
    def BAUD_RATE_WE(self):
        return getattr(self._dut, self.baud_rate_we)
    
    @property
    def BAUD_RATE(self):
        return getattr(self._dut, self.baud_rate)

    @property
    def DONE(self):
        return getattr(self._dut, self.done)
    
    @property
    def READY(self):
        return getattr(self._dut, self.ready)
    
    @property
    def DATA(self):
        return getattr(self._dut, self.data)
    
    @property
    def FREQ_CLK(self):
        return getattr(self._dut, self.freq_clk)

    @property
    def DATA_WIDTH(self):
        return getattr(self._dut, self.data_width)
    
class UART_TX_ports:
    clk: str = "CLKip"
    rst: str = "RSTi"
    tx_data: str = "TXi"
    tx_en: str = "TX_ENi"
    baud_rate: str = "BAUD_RATEi"
    busy: str = "BUSYo"
    done: str = "DONEo"
    data_out: str = "DATAo"
    freq_clk: str = "FREQ_CLK"
    data_width: str = "DATA_WDTH"

    def __init__(self, dut):
        self._dut = dut

    @property
    def CLK(self):
        return getattr(self._dut, self.clk)

    @property
    def RST(self):
        return getattr(self._dut, self.rst)

    @property
    def TX_DATA(self):
        return getattr(self._dut, self.tx_data)
    
    @property
    def TX_EN(self):
        return getattr(self._dut, self.tx_en)
    
    @property
    def BAUD_RATE(self):
        return getattr(self._dut, self.baud_rate)

    @property
    def BUSY(self):
        return getattr(self._dut, self.busy)
    
    @property
    def DONE(self):
        return getattr(self._dut, self.done)
    
    @property
    def DATA_OUT(self):
        return getattr(self._dut, self.data_out)
    
    @property
    def FREQ_CLK(self):
        return getattr(self._dut, self.freq_clk)

    @property
    def DATA_WIDTH(self):
        return getattr(self._dut, self.data_width)
    
class AXILS_ports:
    # Parameters
    axi_data_width: str = "C_S_AXI_DATA_WIDTH"
    axi_addr_width: str = "C_S_AXI_ADDR_WIDTH"
    clk_freq: str = "CLK_FREQ"
    data_width: str = "DATA_WIDTH"

    # AXI Lite Interface signals
    axi_aclk: str = "S_AXI_ACLK"
    axi_aresetn: str = "S_AXI_ARESETN"
    
    # Write address channel
    axi_awaddr: str = "S_AXI_AWADDR"
    axi_awvalid: str = "S_AXI_AWVALID"
    axi_awready: str = "S_AXI_AWREADY"
    
    # Write data channel
    axi_wdata: str = "S_AXI_WDATA"
    axi_wstrb: str = "S_AXI_WSTRB"
    axi_wvalid: str = "S_AXI_WVALID"
    axi_wready: str = "S_AXI_WREADY"
    
    # Write response channel
    axi_bresp: str = "S_AXI_BRESP"
    axi_bvalid: str = "S_AXI_BVALID"
    axi_bready: str = "S_AXI_BREADY"
    
    # Read address channel
    axi_araddr: str = "S_AXI_ARADDR"
    axi_arvalid: str = "S_AXI_ARVALID"
    axi_arready: str = "S_AXI_ARREADY"
    
    # Read data channel
    axi_rdata: str = "S_AXI_RDATA"
    axi_rresp: str = "S_AXI_RRESP"
    axi_rvalid: str = "S_AXI_RVALID"
    axi_rready: str = "S_AXI_RREADY"

    def __init__(self, dut):
        self._dut = dut

    # Parameters properties
    @property
    def C_S_AXI_DATA_WIDTH(self):
        return getattr(self._dut, self.axi_data_width)

    @property
    def C_S_AXI_ADDR_WIDTH(self):
        return getattr(self._dut, self.axi_addr_width)

    @property
    def CLK_FREQ(self):
        return getattr(self._dut, self.clk_freq)

    @property
    def DATA_WIDTH(self):
        return getattr(self._dut, self.data_width)

    # AXI Interface properties
    @property
    def S_AXI_ACLK(self):
        return getattr(self._dut, self.axi_aclk)

    @property
    def S_AXI_ARESETN(self):
        return getattr(self._dut, self.axi_aresetn)

    # Write address channel properties
    @property
    def S_AXI_AWADDR(self):
        return getattr(self._dut, self.axi_awaddr)

    @property
    def S_AXI_AWVALID(self):
        return getattr(self._dut, self.axi_awvalid)

    @property
    def S_AXI_AWREADY(self):
        return getattr(self._dut, self.axi_awready)

    # Write data channel properties
    @property
    def S_AXI_WDATA(self):
        return getattr(self._dut, self.axi_wdata)

    @property
    def S_AXI_WSTRB(self):
        return getattr(self._dut, self.axi_wstrb)

    @property
    def S_AXI_WVALID(self):
        return getattr(self._dut, self.axi_wvalid)

    @property
    def S_AXI_WREADY(self):
        return getattr(self._dut, self.axi_wready)

    # Write response channel properties
    @property
    def S_AXI_BRESP(self):
        return getattr(self._dut, self.axi_bresp)

    @property
    def S_AXI_BVALID(self):
        return getattr(self._dut, self.axi_bvalid)

    @property
    def S_AXI_BREADY(self):
        return getattr(self._dut, self.axi_bready)

    # Read address channel properties
    @property
    def S_AXI_ARADDR(self):
        return getattr(self._dut, self.axi_araddr)

    @property
    def S_AXI_ARVALID(self):
        return getattr(self._dut, self.axi_arvalid)

    @property
    def S_AXI_ARREADY(self):
        return getattr(self._dut, self.axi_arready)

    # Read data channel properties
    @property
    def S_AXI_RDATA(self):
        return getattr(self._dut, self.axi_rdata)

    @property
    def S_AXI_RRESP(self):
        return getattr(self._dut, self.axi_rresp)

    @property
    def S_AXI_RVALID(self):
        return getattr(self._dut, self.axi_rvalid)

    @property
    def S_AXI_RREADY(self):
        return getattr(self._dut, self.axi_rready)
    