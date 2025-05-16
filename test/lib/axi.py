import cocotb
from cocotb.triggers import RisingEdge, ReadOnly
from cocotb.binary import BinaryValue
from cocotb.clock import Clock

class AXI4LiteMaster:
    def __init__(self, dut, prefix=""):
        self.dut = dut
        self.prefix = prefix
        
        # Адресные сигналы
        self.awaddr = getattr(dut, f"{prefix}awaddr")
        self.awvalid = getattr(dut, f"{prefix}awvalid")
        self.awready = getattr(dut, f"{prefix}awready")
        
        # Данные записи
        self.wdata = getattr(dut, f"{prefix}wdata")
        self.wstrb = getattr(dut, f"{prefix}wstrb")
        self.wvalid = getattr(dut, f"{prefix}wvalid")
        self.wready = getattr(dut, f"{prefix}wready")
        
        # Ответ записи
        self.bresp = getattr(dut, f"{prefix}bresp")
        self.bvalid = getattr(dut, f"{prefix}bvalid")
        self.bready = getattr(dut, f"{prefix}bready")
        
        # Адрес чтения
        self.araddr = getattr(dut, f"{prefix}araddr")
        self.arvalid = getattr(dut, f"{prefix}arvalid")
        self.arready = getattr(dut, f"{prefix}arready")
        
        # Данные чтения
        self.rdata = getattr(dut, f"{prefix}rdata")
        self.rresp = getattr(dut, f"{prefix}rresp")
        self.rvalid = getattr(dut, f"{prefix}rvalid")
        self.rready = getattr(dut, f"{prefix}rready")
    
    async def write(self, addr, data, strb=0xF):
        """Выполнить запись по AXI Lite"""
        # Фаза адреса
        self.awaddr.value = addr
        self.awvalid.value = 1
        await RisingEdge(self.dut.clk)
        while not self.awready.value:
            await RisingEdge(self.dut.clk)
        self.awvalid.value = 0
        
        # Фаза данных
        self.wdata.value = data
        self.wstrb.value = strb
        self.wvalid.value = 1
        await RisingEdge(self.dut.clk)
        while not self.wready.value:
            await RisingEdge(self.dut.clk)
        self.wvalid.value = 0
        
        # Фаза ответа
        self.bready.value = 1
        await RisingEdge(self.dut.clk)
        while not self.bvalid.value:
            await RisingEdge(self.dut.clk)
        resp = self.bresp.value
        self.bready.value = 0
        
        return resp
    
    async def read(self, addr):
        """Выполнить чтение по AXI Lite"""
        # Фаза адреса
        self.araddr.value = addr
        self.arvalid.value = 1
        await RisingEdge(self.dut.clk)
        while not self.arready.value:
            await RisingEdge(self.dut.clk)
        self.arvalid.value = 0
        
        # Фаза данных
        self.rready.value = 1
        await RisingEdge(self.dut.clk)
        while not self.rvalid.value:
            await RisingEdge(self.dut.clk)
        data = self.rdata.value
        resp = self.rresp.value
        self.rready.value = 0
        
        return data, resp