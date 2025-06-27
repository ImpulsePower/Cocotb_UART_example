'''
* Author: ImpulsePower
* Date of creation: 03/04/2025
* Description: Design ports
* License:
* Language: Python
* History:

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
    