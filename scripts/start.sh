#!/bin/bash
# chmod u+x start.sh
iverilog -g2012 -o uart.vvp ../test/tb/uart.sv ../src/uart.sv
vvp uart.vvp
gtkwave uart.vcd