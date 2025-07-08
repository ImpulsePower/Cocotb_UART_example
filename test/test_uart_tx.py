'''
* Author: ImpulsePower
* Date of creation: 04/02/2025
* Description: Cocotb testbench of UART interface transmitter, 
* License:
* Language: Python
* History:

'''
import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from random import seed
from test.lib.ports import *
from test.lib.config import *
from cocotb.clock import Clock

SEED = 123
seed(SEED)
cocotb.RANDOM_SEED = SEED
dc = DesignConstants()
tbc = TestbenchConstants(design=dc)

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

async def check_uart_frame(tx_pin, expected_byte, baud_rate=9600, clock_freq=100e6):
    """Проверка корректности UART фрейма"""
    bit_time = 1e9 / baud_rate  # нс
    
    # Проверка старт-бита
    await FallingEdge(tx_pin)
    assert tx_pin.value == 0, "Старт-бит должен быть 0"
    await Timer(bit_time*1.5, units="ns")  # Середина первого бита
    
    # Проверка данных (LSB first)
    received = 0
    for i in range(8):
        received |= (tx_pin.value << i)
        await Timer(bit_time, units="ns")
    
    assert received == expected_byte, f"Ожидалось {hex(expected_byte)}, получено {hex(received)}"
    
    # Проверка стоп-бита
    assert tx_pin.value == 1, "Стоп-бит должен быть 1"

@cocotb.test()
async def test_uart_tx_single_byte(dut):
    """Проверка передачи одного байта"""
    clock = Clock(dut.CLKip, 10, units="ns")  # 100 MHz
    cocotb.start_soon(clock.start())
    
    # Сброс и инициализация
    dut.RSTi.value = 1
    dut.TX_ENi.value = 0
    await Timer(100, units="ns")
    dut.RSTi.value = 0
    
    # Установка скорости 9600 бод
    dut.BAUD_RATEi.value = 9600
    
    # Запуск передачи
    test_byte = 0x55
    dut.TXi.value = test_byte
    dut.TX_ENi.value = 1
    await RisingEdge(dut.CLKip)
    dut.TX_ENi.value = 0
    
    # Проверка флагов состояния
    assert dut.BUSYo.value == 1, "Модуль должен быть в состоянии BUSY"
    
    # Проверка выходного сигнала (бит за битом)
    await check_uart_frame(dut.DATAo, test_byte, baud_rate=9600, clock_freq=100e6)
    
    # Проверка завершения
    await RisingEdge(dut.DONEo)
    assert dut.BUSYo.value == 0, "Флаг BUSY должен сброситься"

@cocotb.test()
async def test_uart_tx_sequence(dut):
    """Проверка передачи последовательности байтов"""
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Настройка 115200 бод
    dut.BAUD_RATEi.value = 115200
    
    test_sequence = [0x00, 0xFF, 0x55, 0xAA]
    
    for byte in test_sequence:
        dut.TXi.value = byte
        dut.TX_ENi.value = 1
        await RisingEdge(dut.CLKip)
        dut.TX_ENi.value = 0
        
        await check_uart_frame(dut.DATAo, byte, baud_rate=115200, clock_freq=100e6)
        await RisingEdge(dut.DONEo)

@cocotb.test()
async def test_uart_tx_baud_change(dut):
    """Проверка смены скорости передачи"""
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Первый байт на 9600 бод
    dut.BAUD_RATEi.value = 9600
    dut.TXi.value = 0x55
    dut.TX_ENi.value = 1
    await RisingEdge(dut.CLKip)
    dut.TX_ENi.value = 0
    await check_uart_frame(dut.DATAo, 0x55, baud_rate=9600)
    
    # Второй байт на 115200 бод
    dut.BAUD_RATEi.value = 115200
    dut.TXi.value = 0xAA
    dut.TX_ENi.value = 1
    await RisingEdge(dut.CLKip)
    dut.TX_ENi.value = 0
    await check_uart_frame(dut.DATAo, 0xAA, baud_rate=115200)

@cocotb.test()
async def test_uart_tx_abort(dut):
    """Проверка прерывания передачи"""
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    dut.BAUD_RATEi.value = 9600
    dut.TXi.value = 0x55
    dut.TX_ENi.value = 1
    await RisingEdge(dut.CLKip)
    dut.TX_ENi.value = 0
    
    # Ждем середину передачи
    await Timer(1e9/9600*5, units="ns")  # После 5 битов
    
    # Сброс
    dut.RSTi.value = 1
    await RisingEdge(dut.CLKip)
    dut.RSTi.value = 0
    
    # Проверяем что линия вернулась в idle
    assert dut.DATAo.value == 1, "Линия должна быть в состоянии idle"
    assert dut.BUSYo.value == 0, "Флаг BUSY должен сброситься"

@cocotb.test()
async def test_uart_tx_overflow(dut):
    """Проверка недопустимой скорости передачи"""
    clock = Clock(dut.CLKip, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Установка скорости выше максимальной
    dut.BAUD_RATEi.value = FREQ_CLK//2  # 50 Mbps!
    dut.TXi.value = 0x55
    dut.TX_ENi.value = 1
    await RisingEdge(dut.CLKip)
    dut.TX_ENi.value = 0
    
    # Проверка обработки ошибки (если реализовано)
    if hasattr(dut, 'ERRORo'):
        await RisingEdge(dut.ERRORo)