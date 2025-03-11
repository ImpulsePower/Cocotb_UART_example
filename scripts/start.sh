#!/bin/bash
# chmod u+x start.sh
iverilog -g2012 -o CH4.vvp ../test/tb/ch4_tb.sv ../src/CH4.sv
vvp CH4.vvp
gtkwave test.vcd