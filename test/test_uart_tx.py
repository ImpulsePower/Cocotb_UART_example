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
mon_event = cocotb.triggers.Event()

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

async def check_uart_frame(tx_pin):
    """Проверка корректности UART фрейма"""
    # Ожидаем старт-бит (falling edge)
    await FallingEdge(tx_pin)
    # dut._log.info(f"Current simulation time: {cocotb.utils.get_sim_time(units='ns')} ns")
    assert tx_pin.value == 0, "Старт-бит должен быть 0"
    
    # Ждем до середины первого бита данных
    await Timer(tbc.BIT_period * 1.5, units="ns")
    # dut._log.info(f"Current simulation time: {cocotb.utils.get_sim_time(units='ns')} ns")    
    # Читаем биты данных (LSB first)
    received = 0
    for i in range(8):
        received |= (tx_pin.value.integer << i)
        await Timer(tbc.BIT_period, units="ns")
    
    # Проверяем стоп-бит
    assert tx_pin.value == 1, "Стоп-бит должен быть 1"
    return received

async def monitor(signal):
    while True:
        await RisingEdge(signal)
        mon_event.set()

async def fall_monitor(signal):
    while True:
        await FallingEdge(signal)
        mon_event.set()

async def delayed_check(dut, signal_name: str, cycles: int, expected: int) -> None:
    await Timer(cycles * tbc.CLK_period, units=tbc.UNIT)
    get_value = getattr(dut, signal_name).value
    if get_value != expected:
        raise AssertionError(f"Mismatch! {signal_name}: {get_value} != {expected}\n")
    
@cocotb.test()
async def single_byte(dut):
    """Проверка передачи одного байта"""
    ports = UART_TX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports) 
    # Сброс и инициализация
    ports.TX_EN.value = 0
    # Установка скорости 9600 бод
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 9600
    
    done_wait_task = cocotb.start_soon(monitor(ports.DONE))
    # Запуск передачи
    test_byte = 0xCD
    ports.TX_DATA.value = test_byte
    ports.TX_EN.value = 1
    await RisingEdge(ports.CLK)
    # await RisingEdge(ports.CLK)
    ports.TX_EN.value = 0
    
    # Проверка флагов состояния
    cocotb.start_soon(delayed_check(dut, ports.busy, 3, 1))
    # Проверка выходного сигнала (бит за битом)

    received = await check_uart_frame(ports.DATA_OUT)
    assert received == test_byte, f"Ожидалось {test_byte:X}, получено {received:X}"
    # Проверка завершения
    await mon_event.wait()
    done_wait_task.kill()
    assert dut.BUSYo.value == 0, "Флаг BUSY должен сброситься"

@cocotb.test()
async def sequence(dut):
    """Проверка передачи последовательности байтов"""
    ports = UART_TX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports) 
    done_wait_task = cocotb.start_soon(monitor(ports.DONE))
    # Настройка 115200 бод
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 115200
    
    test_sequence = [0x01, 0xFF, 0x55, 0xAA]
    
    for byte in test_sequence:
        ports.TX_DATA.value = byte
        if ports.BUSY == 1:
            await FallingEdge(ports.BUSY)
        ports.TX_EN.value = 1
        await RisingEdge(ports.CLK)
        ports.TX_EN.value = 0
        received = await check_uart_frame(ports.DATA_OUT)
        assert received == byte, f"Ожидалось {byte:X}, получено {received:X}"
        await mon_event.wait()
        done_wait_task.kill()

@cocotb.test()
async def baud_change(dut):
    """Проверка смены скорости передачи"""
    ports = UART_TX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports) 
    ports.TX_EN.value = 0
    # Первый байт на 9600 бод
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 9600
    value = 0x55
    ports.TX_DATA.value = value
    ports.TX_EN.value = 1
    await RisingEdge(ports.CLK)
    ports.TX_EN.value = 0
    received = await check_uart_frame(ports.DATA_OUT)
    assert received == value, f"Ожидалось {value:X}, получено {received:X}"
    if ports.BUSY == 1:
        await FallingEdge(ports.BUSY)
    # Второй байт на 115200 бод
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 115200
    value = 0xAA
    ports.TX_DATA.value = value
    ports.TX_EN.value = 1
    await RisingEdge(ports.CLK)
    await RisingEdge(dut.CLKip)
    ports.TX_EN.value = 0
    received = await check_uart_frame(ports.DATA_OUT)
    assert received == value, f"Ожидалось {value:X}, получено {received:X}"

@cocotb.test()
async def overflow(dut):
    """Проверка недопустимой скорости передачи"""
    ports = UART_TX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports) 
    
    # Установка скорости выше максимальной
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = tbc.design.CLOCK_FREQ // 2
    ports.TX_DATA.value = 0x75
    ports.TX_EN.value = 1
    await RisingEdge(ports.CLK)
    ports.TX_EN.value = 0
    
    # Проверка обработки ошибки (если реализовано)
    if hasattr(dut, 'ERRORo'):
        await RisingEdge(dut.ERRORo)

@cocotb.test()
async def abort(dut):
    """Проверка прерывания передачи"""
    ports = UART_TX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports) 
    
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 9600
    ports.TX_DATA.value = 0x45
    ports.TX_EN.value = 1
    await RisingEdge(ports.CLK)
    ports.TX_EN.value = 0
    # Ждем середину передачи
    await Timer(tbc.BIT_period * 5, units="ns")  # После 5 битов

    # Сброс
    await generate_reset(tbc,ports)
    
    # Проверяем что линия вернулась в idle
    cocotb.start_soon(delayed_check(dut, ports.data_out, 4, 1))
    cocotb.start_soon(delayed_check(dut, ports.busy, 4, 1))
    
    # assert dut.DATAo.value == 1, "Линия должна быть в состоянии idle"
    # assert dut.BUSYo.value == 0, "Флаг BUSY должен сброситься"