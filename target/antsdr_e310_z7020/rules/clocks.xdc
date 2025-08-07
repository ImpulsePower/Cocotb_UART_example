###########################
# 100 MHz Clock Constraints
###########################

# Основной тактовый сигнал (предположим, что он подаётся на порт clk_100mhz)
create_clock -period 10.000 -name CLKip -waveform {0 5} [get_ports CLKip]

# Джиттер и неопределённость тактового сигнала
set_clock_uncertainty -setup 0.500 [get_clocks CLKip]
set_clock_uncertainty -hold 0.100 [get_clocks CLKip]

# Задержка тактового сигнала (если требуется)
set_clock_latency -source 1.500 [get_clocks CLKip]
set_clock_latency 2.000 [get_clocks CLKip]

# Входные/выходные задержки (примерные значения, нужно уточнять под проект)
set_input_delay -clock CLKip -max 3.000 [remove_from_collection [all_inputs] [get_ports CLKip]]
set_input_delay -clock CLKip -min 1.000 [remove_from_collection [all_inputs] [get_ports CLKip]]

set_output_delay -clock CLKip -max 2.500 [all_outputs]
set_output_delay -clock CLKip -min 0.500 [all_outputs]

# Физические ограничения (если такт подключается к FPGA через определённый вывод)
set_property PACKAGE_PIN AA10 [get_ports CLKip]  # Пример для платы с определённым pinout
set_property IOSTANDARD LVCMOS33 [get_ports CLKip]  # Уровни напряжения