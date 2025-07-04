'''
* Author: ImpulsePower
* Date of creation: 03/02/2025
* Description: Cocotb testbench of UART interface receiver, 
* License:
* Language: Python
* History:

'''
import cocotb
# from cocotb.regression import TestFactory
# from test.lib.uvm        import *
from test.lib.ports import *
from test.lib.config import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from random import seed

SEED = 123
seed(SEED)
cocotb.RANDOM_SEED = SEED
dc = DesignConstants()
tbc = TestbenchConstants(design=dc)

# @cocotb.test()
# async def test_uart_rx(dut,sig_in="RXi",sig_out="DATAo"):
#     """
#     Args: sig_in : "RXi" sig_out : "DATAo"
#     """
#     tb = TB(dut)
#     tb.setup(sig_in,sig_out)
#     await tb.start()
#     await tb.stop()

async def uart_send_byte(rx_pin, byte):
    """Генерация UART фрейма на линии RX"""
    await Timer(tbc.BIT_period, units=tbc.UNIT)
    # Старт-бит
    rx_pin.value = 0
    await Timer(tbc.BIT_period, units=tbc.UNIT)
    # Биты данных (LSB first)
    for i in range(8):
        rx_pin.value = (byte >> i) & 0x01
        await Timer(tbc.BIT_period, units=tbc.UNIT)
    # Стоп-бит
    rx_pin.value = 1
    await Timer(tbc.BIT_period, units=tbc.UNIT)

async def generate_clock(tbc,ports) -> None:
    """
    Generate clock pulses.
    """
    # clk = getattr(dut,ports.clk)
    delay = tbc.CLOCK_DELAY
    period = tbc.CLK_period
    await Timer(delay, units=tbc.UNIT)
    while True:
        ports.CLK.value = 1
        await Timer(int(period / 2), units=tbc.UNIT)
        ports.CLK.value = 0
        await Timer(int(period / 2), units=tbc.UNIT)

async def generate_reset(tbc,ports) -> None:
    """
    Generate reset pulse.
    """
    # rst = getattr(dut,ports.rst)
    delay = tbc.RESET_DELAY
    period = tbc.RESET_period
    await Timer(delay, units=tbc.UNIT)
    # rst.value = 1
    ports.RST.value = 1
    await Timer(period, units=tbc.UNIT)
    # rst.value = 0
    ports.RST.value = 0

async def delayed_check(dut, signal_name: str, cycles: int, expected: int) -> None:
    await Timer(cycles * tbc.CLK_period, units=tbc.UNIT)
    get_value = getattr(dut, signal_name).value
    if get_value != expected:
        raise AssertionError(f"Mismatch! {signal_name}: {get_value} != {expected}\n")
    
@cocotb.test()
async def test_uart_rx_single_byte(dut):
    """Проверка корректного приема одного байта"""
    ports = UART_RX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)   

    # Установка скорости 9600 бод
    ports.BAUD_RATE_WE.value = 1
    ports.BAUD_RATE.value = 9600
    await RisingEdge(ports.CLK)
    ports.BAUD_RATE_WE.value = 0
    
    # Генерация фрейма (0x55 с правильным стоп-битом)
    byte_to_send = 0x55
    await uart_send_byte(ports.RX, byte_to_send)
    
    # Проверка результата
    await RisingEdge(ports.DONE)
    assert ports.DATA.value == byte_to_send, f"Ожидалось {hex(byte_to_send)}, получено {hex(dut.DATAo.value)}"
    assert ports.READY.value == 1, "Флаг READY не установлен"

# @cocotb.test()
# async def test_uart_rx_overflow(dut):
#     """Проверка обработки слишком высокой скорости"""
#     clock = Clock(dut.CLKip, 10, units="ns")
#     cocotb.start_soon(clock.start())
    
#     # Установка недопустимой скорости (выше максимальной)
#     dut.BAUD_RATE_WEi.value = 1
#     dut.BAUD_RATEi.value = FREQ_CLK//2  # 50 Mbps!
#     await RisingEdge(dut.CLKip)
#     dut.BAUD_RATE_WEi.value = 0
    
#     # Попытка передачи
#     await uart_send_byte(dut.RXi, 0xAA, baud_rate=FREQ_CLK//2, clock_freq=100e6)
    
#     # Должен быть флаг ошибки (если реализован в модуле)
#     if hasattr(dut, 'ERRORo'):
#         await RisingEdge(dut.ERRORo)

# @cocotb.test()
# async def test_uart_rx_sequence(dut):
#     """Проверка приема последовательности байтов"""
#     clock = Clock(dut.CLKip, 10, units="ns")
#     cocotb.start_soon(clock.start())
    
#     # Настройка 115200 бод
#     dut.BAUD_RATE_WEi.value = 1
#     dut.BAUD_RATEi.value = 115200
#     await RisingEdge(dut.CLKip)
#     dut.BAUD_RATE_WEi.value = 0
    
#     test_sequence = [0x00, 0xFF, 0x55, 0xAA]
    
#     for byte in test_sequence:
#         await uart_send_byte(dut.RXi, byte, baud_rate=115200, clock_freq=100e6)
#         await RisingEdge(dut.DONEo)
#         assert dut.DATAo.value == byte
#         dut.BAUD_RATE_RDi.value = 1  # Подтверждение чтения
#         await RisingEdge(dut.CLKip)
#         dut.BAUD_RATE_RDi.value = 0

# @cocotb.test()
# async def test_uart_rx_glitch(dut):
#     """Проверка устойчивости к помехам"""
#     clock = Clock(dut.CLKip, 10, units="ns")
#     cocotb.start_soon(clock.start())
    
#     # Генерация ложного старт-бита
#     await Timer(100, units="ns")
#     dut.RXi.value = 0  # Старт-бит
#     await Timer(1e6/9600/2, units="ns")  # Половина битового интервала
#     dut.RXi.value = 1  # Возврат в idle
    
#     # Проверка что READY не активировался
#     await Timer(1e6/9600*2, units="ns")
#     assert dut.READYo.value == 0, "Ложное срабатывание приема"

# @cocotb.test()
# async def test_uart_rx_baud_change(dut):
#     """Проверка смены скорости передачи"""
#     clock = Clock(dut.CLKip, 10, units="ns")
#     cocotb.start_soon(clock.start())
    
#     # Первый байт на 9600 бод
#     dut.BAUD_RATE_WEi.value = 1
#     dut.BAUD_RATEi.value = 9600
#     await RisingEdge(dut.CLKip)
#     dut.BAUD_RATE_WEi.value = 0
    
#     await uart_send_byte(dut.RXi, 0x55, baud_rate=9600)
#     await RisingEdge(dut.DONEo)
    
#     # Смена на 115200 бод
#     dut.BAUD_RATE_WEi.value = 1
#     dut.BAUD_RATEi.value = 115200
#     await RisingEdge(dut.CLKip)
#     dut.BAUD_RATE_WEi.value = 0
    
#     await uart_send_byte(dut.RXi, 0xAA, baud_rate=115200)
#     await RisingEdge(dut.DONEo)

# @cocotb.test()
# async def test_uart_rx_baud_change(dut):
#     """Проверка смены скорости передачи"""
#     clock = Clock(dut.CLKip, 10, units="ns")
#     cocotb.start_soon(clock.start())
    
#     # Первый байт на 9600 бод
#     dut.BAUD_RATE_WEi.value = 1
#     dut.BAUD_RATEi.value = 9600
#     await RisingEdge(dut.CLKip)
#     dut.BAUD_RATE_WEi.value = 0
    
#     await uart_send_byte(dut.RXi, 0x55, baud_rate=9600)
#     await RisingEdge(dut.DONEo)
    
#     # Смена на 115200 бод
#     dut.BAUD_RATE_WEi.value = 1
#     dut.BAUD_RATEi.value = 115200
#     await RisingEdge(dut.CLKip)
#     dut.BAUD_RATE_WEi.value = 0
    
#     await uart_send_byte(dut.RXi, 0xAA, baud_rate=115200)
#     await RisingEdge(dut.DONEo)    

# if __name__ == "__main__":
# if cocotb.SIM_NAME:
#     factory = TestFactory(run_test_uart_rx)
#     factory.generate_tests()