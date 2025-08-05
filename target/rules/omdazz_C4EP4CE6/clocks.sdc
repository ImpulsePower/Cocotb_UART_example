# Clock constraints for 100 MHz clock
create_clock -name CLKip -period 10.0 -waveform {0 5} [get_ports CLKip]

# Clock uncertainty
set_clock_uncertainty -setup 0.5 [get_clocks CLKip]
set_clock_uncertainty -hold 0.1 [get_clocks CLKip]

# Clock latency (network delay)
set_clock_latency -source 1.5 [get_clocks CLKip]
set_clock_latency 2.0 [get_clocks CLKip]

# Clock transition (slew)
set_clock_transition 0.1 [get_clocks CLKip]

# Input delay for signals relative to clock
set_input_delay -clock clk -max 3.0 [remove_from_collection [all_inputs] [get_ports CLKip]]
set_input_delay -clock clk -min 1.0 [remove_from_collection [all_inputs] [get_ports CLKip]]

# Output delay for signals relative to clock
set_output_delay -clock CLKip -max 2.5 [all_outputs]
set_output_delay -clock CLKip -min 0.5 [all_outputs]