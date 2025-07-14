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

mon_event = cocotb.triggers.Event()

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

async def monitor(signal):
    while True:
        await RisingEdge(signal)
        mon_event.set()

@cocotb.test()
async def single_byte(dut):
    """Проверка корректного приема одного байта"""
    ports = UART_RX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)   

    # Установка скорости 9600 бод
    # update_baud_rate(tbc,9600)
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 9600
    ports.BAUD_RATE_WE.value = 1
    await RisingEdge(ports.CLK)
    ports.BAUD_RATE_WE.value = 0
    
    # Генерация фрейма (0x55 с правильным стоп-битом)
    byte_to_send = 0x55
    done_wait_task = cocotb.start_soon(monitor(ports.DONE))
    await uart_send_byte(ports.RX, byte_to_send)
    await mon_event.wait()
    done_wait_task.kill()
    # Проверка результата
    assert ports.DATA.value == byte_to_send, f"Exp {byte_to_send:X}, got {ports.DATA.value:X}"
    assert ports.READY.value == 1, "Флаг READY не установлен"

@cocotb.test()
async def sequence(dut):
    """Проверка приема последовательности байтов"""
    ports = UART_RX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)   
    
    # Настройка 115200 бод
    ports.BAUD_RATE_WE.value = 1
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 115200
    await RisingEdge(ports.CLK)
    ports.BAUD_RATE_WE.value = 0
    
    test_sequence = [0x00, 0xFF, 0x55, 0xAA]
    done_wait_task = cocotb.start_soon(monitor(ports.DONE))
    for byte in test_sequence:
        await uart_send_byte(ports.RX, byte)
        # await RisingEdge(dut.DONEo)
        await mon_event.wait()
        done_wait_task.kill()
        assert dut.DATAo.value == byte
        dut.BAUD_RATE_RDi.value = 1  # Подтверждение чтения
        await RisingEdge(ports.CLK)
        dut.BAUD_RATE_RDi.value = 0

@cocotb.test()
async def overflow(dut):
    """Проверка обработки слишком высокой скорости"""
    ports = UART_RX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)   
    
    # Установка недопустимой скорости (выше максимальной)
    ports.BAUD_RATE_WE.value = 1
    ports.BAUD_RATE.value = dc.CLOCK_FREQ // 2  # 50 Mbps!
    await RisingEdge(ports.CLK)
    ports.BAUD_RATE_WE.value = 0
    byte_to_send = 0xAA
    # Попытка передачи
    await uart_send_byte(dut.RXi, byte_to_send)
    
    # Должен быть флаг ошибки (если реализован в модуле)
    assert ports.DATA.value != (byte_to_send, 
                                f"Ожидалось 0, получено {byte_to_send}")

@cocotb.test()
async def glitch(dut):
    """Проверка устойчивости к помехам"""
    ports = UART_RX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)  

    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 9600
    # Генерация ложного старт-бита
    await Timer(100, units="ns")
    dut.RXi.value = 0  # Старт-бит
    await Timer(int(tbc.design.CLOCK_FREQ / tbc.design.BAUD_RATE / 2), 
                units="ns")
    dut.RXi.value = 1  # Возврат в idle
    
    # Проверка что READY не активировался
    await Timer(int(tbc.design.CLOCK_FREQ/tbc.design.BAUD_RATE*2), 
                units="ns")
    assert dut.READYo.value == 0, "Ложное срабатывание приема"

@cocotb.test()
async def baud_change(dut):
    """Проверка смены скорости передачи"""
    ports = UART_RX_ports(dut)
    # Generate clock and reset
    await cocotb.start(generate_clock(tbc,ports))
    if (tbc.NEED_RST): 
        await generate_reset(tbc,ports)  
    done_wait_task = cocotb.start_soon(monitor(ports.DONE))
    # Первый байт на 9600 бод
    ports.BAUD_RATE_WE.value = 1
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 9600
    await RisingEdge(ports.CLK)
    ports.BAUD_RATE_WE.value = 0
    
    byte_to_send = 0x55
    await uart_send_byte(ports.RX, byte_to_send)
    await mon_event.wait()
    done_wait_task.kill()
    
    # Смена на 115200 бод
    ports.BAUD_RATE_WE.value = 1
    ports.BAUD_RATE.value = tbc.design.BAUD_RATE = 115200
    await RisingEdge(ports.CLK)
    ports.BAUD_RATE_WE.value = 0

    byte_to_send = 0xAA
    await uart_send_byte(ports.RX, byte_to_send)
    await mon_event.wait()
    done_wait_task.kill()   

# if __name__ == "__main__":
# if cocotb.SIM_NAME:
#     factory = TestFactory(run_test_uart_rx)
#     factory.generate_tests()