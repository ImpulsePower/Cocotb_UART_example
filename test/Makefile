# Makefile
# defaults
TOPLEVEL_LANG ?= verilog
SIM ?= icarus
WAVES = 1
# COMPILE_ARGS += -g2012
PWD=$(shell pwd)

TOPLEVEL = uart_rx

COCOTB_RESULTS_FILE = $(PWD)/../temp/res_$(TOPLEVEL).xml

# VERILOG_SOURCES += $(PWD)/../src/CH4.sv
VERILOG_SOURCES += $(PWD)/../src/$(TOPLEVEL).sv $(PWD)/../src/sync.sv $(PWD)/../src/uart_rx_mem.sv

# MODULE = test_$(TOPLEVEL)
MODULE = test_$(TOPLEVEL)

# export COCOTB_LOG_LEVEL=DEBUG

# SIM_BUILD = $(PWD)/../test/sim_build/$(TOPLEVEL)
SIM_BUILD = $(PWD)/../test/build/$(TOPLEVEL)

# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim