# Makefile
PWD=$(shell pwd)
TOPLEVEL_LANG ?= verilog
TOPLEVEL = uart
TEST = uart
MODULE = test_$(TEST)
VERILOG_SOURCES += $(PWD)/../src/$(TOPLEVEL).sv $(PWD)/../src/$(TOPLEVEL)_rx.sv $(PWD)/../src/sync.sv $(PWD)/../src/uart_rx_mem.sv $(PWD)/../src/fifo.sv

COCOTB_RESULTS_FILE = $(PWD)/../temp/res_$(TOPLEVEL).xml
COCOTB_HDL_TIMEUNIT = 1ns
COCOTB_HDL_TIMEPRECISION = 1ps
WAVES=1
all=icarus
# Правило для Icarus Verilog
icarus:
	SIM=icarus \
	TOPLEVEL_LANG="$(TOPLEVEL_LANG)" \
	VERILOG_SOURCES="$(VERILOG_SOURCES)" \
	TOPLEVEL="$(TOPLEVEL)" \
	MODULE="$(MODULE)" \
	WAVES=1 \
	SIM_BUILD=$(PWD)/../test/build/$(TOPLEVEL)/icarus \
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim

# Правило для Verilator
verilator:
	SIM=verilator \
	TOPLEVEL_LANG="$(TOPLEVEL_LANG)" \
	EXTRA_ARGS="--trace --coverage" \
	VERILOG_SOURCES="$(VERILOG_SOURCES)" \
	TOPLEVEL="$(TOPLEVEL)" \
	MODULE="$(MODULE)" \
	SIM_BUILD=$(PWD)/../test/build/$(TOPLEVEL)/verilator \
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim

# Очистка
# clean:
# 	rm -rf $(PWD)/../test/build/$(TOPLEVEL) __pycache__ *.vcd *.vst *.fst *.xml