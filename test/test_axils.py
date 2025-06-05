import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotbext.axi import AxiLiteBus, AxiLiteMaster

@cocotb.test()
async def test_axils(dut):
    # Запуск тактового сигнала
    clock = Clock(dut.S_AXI_ACLK, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Сброс
    dut.S_AXI_ARESETN.value = 0
    await RisingEdge(dut.S_AXI_ACLK)
    await RisingEdge(dut.S_AXI_ACLK)
    dut.S_AXI_ARESETN.value = 1
    await RisingEdge(dut.S_AXI_ACLK)

    # Инициализация AXI Lite Master
    axil_master = AxiLiteMaster(
        bus=AxiLiteBus.from_prefix(dut, "S_AXI"),
        clock=dut.S_AXI_ACLK,
        reset=dut.S_AXI_ARESETN
    )

    # Пример записи в регистр 0 (Baud rate)
    await axil_master.write(0x0, 0x00001388.to_bytes(4, 'little'))  # Запись 9600 в регистр
    print("Запись Baud rate: 9600")

    # Пример чтения регистра 0
    read_data = await axil_master.read(0x0, 4)
    print(f"Прочитано из регистра 0: {int.from_bytes(read_data, 'little')}")

    # Пример записи в регистр 4 (разрешение прерываний)
    await axil_master.write(0x4, 0x00000100.to_bytes(4, 'little'))  # Установка бита 8
    print("Разрешены прерывания")

    # Чтение статусного регистра (регистр 4)
    status_data = await axil_master.read(0x4, 4)
    print(f"Статусный регистр: {bin(int.from_bytes(status_data, 'little'))}")