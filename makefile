# * Author: ImpulsePower
# * Date of creation: 20/06/2025
# * Description: Makefile of project UART 
# * License:
# * Language: makefile
# * History:

# ======================== SYSTEM ==============================
PWD=$(shell pwd)
export PYTHONPATH := $(PWD)/test:$(PYTHONPATH)
# ==============================================================

# ========================== KEYS ==============================
FORMAT ?= svg
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

# Keys checks
SUPPORTED_D2_FORMATS = svg png pdf jpg html
SUPPORTED_SIMS = icarus verilator
SUPPORTED_TL_LANG = verilog vhdl

ifneq ($(filter $(FORMAT),$(SUPPORTED_D2_FORMATS)),)
else
	$(error Unsupported format '$(FORMAT)'. \
  	Supported: $(SUPPORTED_D2_FORMATS))
endif

ifneq ($(filter $(SIM),$(SUPPORTED_SIMS)),)
else
	$(error Unsupported format '$(SIM)'. \
	Supported: $(SUPPORTED_SIMS))
endif

ifneq ($(filter $(TOPLEVEL_LANG),$(SUPPORTED_TL_LANG)),)
else
	$(error Unsupported format '$(TOPLEVEL_LANG)'. \
	Supported: $(SUPPORTED_TL_LANG))
endif
# ==============================================================

# ========================== PATHS =============================
CONDA_EXE := $(HOME)/miniconda/bin/conda
D2_EXE := $(HOME)/.d2/d2
POETRY_EXE := .poetry/bin/poetry
VERILATOR_EXE := $(shell which verilator)
PANDOC_EXE := $(shell which pandoc)

# Paths of Pandoc
MD_SRC_DIR = docs
PDF_DIR = $(MD_SRC_DIR)/pdf
MD_FILES = $(wildcard $(MD_SRC_DIR)/*.md)

# Paths of D2
D2_SRC_DIR = docs/content
D2_OUT_DIR = docs/img
D2_SOURCES = $(shell find $(D2_SRC_DIR) -name '*.d2')

# Design
HEADER_FILE = header
COCOTB_BUILD = test/build
TOPLEVEL_FIFO = fifo
TEST_FIFO_SOURCES = $(PWD)/src/$(HEADER_FILE).svh \
					$(PWD)/src/$(TOPLEVEL_FIFO).sv
					

TOPLEVEL_RX = uart_rx
TEST_RX_SOURCES = $(PWD)/src/$(TOPLEVEL_RX).sv \
					$(PWD)/src/sync.sv \
					$(PWD)/src/$(TOPLEVEL_RX)_mem.sv

TOPLEVEL_TX = uart_tx
TEST_TX_SOURCES = $(PWD)/src/$(TOPLEVEL_TX).sv \
					$(PWD)/src/sync.sv

TOPLEVEL_AXI = axils
TEST_AXI_SOURCES =	$(PWD)/src/$(TOPLEVEL_AXI).sv

TOPLEVEL_UART = uart
TEST_UART_SOURCES = $(sort \
					$(PWD)/src/$(TOPLEVEL_UART).sv \
    				$(TEST_FIFO_SOURCES) \
    				$(TEST_RX_SOURCES) \
    				$(TEST_TX_SOURCES) \
    				$(TEST_AXI_SOURCES))		

RESULTS_DIR = test/log
WAVEFORM_DIR = test/dump
 
PDOC_DIR = docs
DOC_NAME = docs
CONFIG = config/pydoc.yml
# ==============================================================

# ========================= RULES ==============================
# Pandoc rules
PANDOC = pandoc
PANDOC_OPTS = --pdf-engine=xelatex 
PANDOC_OPTS += -V mainfont="DejaVu Sans"
PANDOC_OPTS += -V geometry:margin=2cm

$(PDF_DIR)/%.pdf: $(MD_SRC_DIR)/%.md
	@mkdir -p $(PDF_DIR)
	$(PANDOC) $< -o $@ $(PANDOC_OPTS)

# Compile rules for .d2 in .svg or some else format...
# D2 Compiler: https://d2lang.com/tour/install
D2 = d2
$(D2_OUT_DIR)/%.$(FORMAT): $(D2_SRC_DIR)/%.d2
	@mkdir -p $(D2_OUT_DIR) 
	$(D2) $< $@

# Cocotb rules
FIFO_RESULTS_FILE = $(RESULTS_DIR)/$(TOPLEVEL_FIFO)_results.xml
RX_RESULTS_FILE = $(RESULTS_DIR)/$(TOPLEVEL_RX)_results.xml
COCOTB_HDL_TIMEUNIT = 1ns
COCOTB_HDL_TIMEPRECISION = 1ps
# WAVES ?= 1

# ifeq ($(SIM),icarus)
#     ifeq ($(WAVES),1)
#         export COCOTB_DISABLE_IVERILOG_DUMP=1
#         SIM_ARGS += -DDUMP_WAVES
#         EXTRA_ARGS += -fst
#     endif
# endif
# EXTRA_ARGS=--trace --coverage
# ==============================================================

# ========================= TARGETS ============================
# Default target
all: test

# Install dependencies
# Install Miniconda
install-conda: check-conda
check-conda:
	@if [ ! -f "$(CONDA_EXE)" ]; then \
		echo "Устанавливаем Miniconda..."; \
		chmod +x install_conda.sh && ./install_conda.sh; \
		echo "Miniconda установлена"; \
	else \
		echo "Miniconda уже установлена"; \
	fi

# Install d2
install-d2: check-d2
check-d2:
	@if [ ! -f "$(D2_EXE)" ]; then \
		echo "Устанавливаем D2..."; \
		chmod +x install_d2.sh && ./install_d2.sh; \
		echo "D2 установлен"; \
	else \
		echo "D2 уже установлен"; \
	fi

# УInstall Pandoc
install-pandoc: check-pandoc
check-pandoc:
	@if [ ! -f "$(PANDOC_EXE)" ]; then \
		echo "Устанавливаем Pandoc..."; \
		chmod +x install_pandoc.sh && ./install_pandoc.sh; \
		echo "Pandoc установлен"; \
	else \
		echo "Pandoc уже установлен"; \
	fi

# Install Poetry
install-poetry: check-poetry
check-poetry:
	@if [ ! -f "$(POETRY_EXE)" ]; then \
		echo "Устанавливаем Poetry..."; \
		chmod +x install_poetry.sh && ./install_poetry.sh; \
		echo "Poetry установлен"; \
	else \
		echo "Poetry уже установлен"; \
	fi

# Install verilator
install-verilator: check-verilator
check-verilator:
	@if [ -z "$(VERILATOR_EXE)" ]; then \
		echo "Устанавливаем Verilator..."; \
		chmod +x install_verilator.sh && ./install_verilator.sh; \
		echo "Verilator установлен"; \
	else \
		echo "Verilator уже установлен"; \
	fi

# Docs
docs: pdoc docs_d2 docs_pdf

# Generate pdf files from Markdown
docs_pdf: $(patsubst $(MD_SRC_DIR)/%.md, \
			$(PDF_DIR)/%.pdf, \
			$(MD_FILES))

# Generate images from d2 schemes
docs_d2: $(patsubst $(D2_SRC_DIR)/%.d2, \
			$(D2_OUT_DIR)/%.$(FORMAT), \
			$(D2_SOURCES))

pdoc:
	@pydoc-markdown $(CONFIG) > $(PDOC_DIR)/$(DOC_NAME).md
	@echo "✅ Документация успешно сгенерирована в $(PDOC_DIR)/"


# Testing
test: test_fifo test_rx test_tx

# Cocotb testing fifo
test_fifo:
	SIM="$(SIM)" \
	TOPLEVEL_LANG="$(TOPLEVEL_LANG)" \
	VERILOG_SOURCES="$(TEST_FIFO_SOURCES)" \
	TOPLEVEL="$(TOPLEVEL_FIFO)" \
	MODULE="test_$(TOPLEVEL_FIFO)" \
	COCOTB_RESULTS_FILE="$(FIFO_RESULTS_FILE)" \
	SIM_BUILD=$(PWD)/$(COCOTB_BUILD)/$(TOPLEVEL_FIFO)/$(SIM) \
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim

view_fifo:
	surfer $(WAVEFORM_DIR)/$(TOPLEVEL_FIFO).fst

# Cocotb testing uart rx
test_rx:
	SIM="$(SIM)" \
	TOPLEVEL_LANG="$(TOPLEVEL_LANG)" \
	VERILOG_SOURCES="$(TEST_RX_SOURCES)" \
	TOPLEVEL="$(TOPLEVEL_RX)" \
	MODULE="test_$(TOPLEVEL_RX)" \
	COCOTB_RESULTS_FILE="$(RX_RESULTS_FILE)" \
	SIM_BUILD=$(PWD)/$(COCOTB_BUILD)/$(TOPLEVEL_RX)/$(SIM) \
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim

view_rx:
	surfer $(WAVEFORM_DIR)/$(TOPLEVEL_RX).fst

# Cocotb testing uart tx
test_tx:
	SIM="$(SIM)" \
	TOPLEVEL_LANG="$(TOPLEVEL_LANG)" \
	VERILOG_SOURCES="$(TEST_TX_SOURCES)" \
	TOPLEVEL="$(TOPLEVEL_TX)" \
	MODULE="test_$(TOPLEVEL_TX)" \
	SIM_BUILD=$(PWD)/$(COCOTB_BUILD)/$(TOPLEVEL_TX)/$(SIM) \
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim

view_tx:
	surfer $(WAVEFORM_DIR)/$(TOPLEVEL_TX).fst

# Cocotb testing AXI Lite slave
test_axi:
	SIM="$(SIM)" \
	TOPLEVEL_LANG="$(TOPLEVEL_LANG)" \
	VERILOG_SOURCES="$(TEST_AXI_SOURCES)" \
	TOPLEVEL="$(TOPLEVEL_AXI)" \
	MODULE="test_$(TOPLEVEL_AXI)" \
	SIM_BUILD=$(PWD)/$(COCOTB_BUILD)/$(TOPLEVEL_AXI)/$(SIM) \
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim

view_axi:
	surfer $(WAVEFORM_DIR)/$(TOPLEVEL_AXI).fst

# Cocotb testing UART
test_uart:
	SIM="$(SIM)" \
	TOPLEVEL_LANG="$(TOPLEVEL_LANG)" \
	VERILOG_SOURCES="$(TEST_UART_SOURCES)" \
	TOPLEVEL="$(TOPLEVEL_UART)" \
	MODULE="test_$(TOPLEVEL_UART)" \
	SIM_BUILD=$(PWD)/$(COCOTB_BUILD)/$(TOPLEVEL_UART)/$(SIM) \
	$(MAKE) -f $(shell cocotb-config --makefiles)/Makefile.sim

view_uart:
	surfer $(WAVEFORM_DIR)/$(TOPLEVEL_UART).fst

# Cleaning generated files
clean:
	rm -rf $(shell find $(D2_OUT_DIR) -name '*.$(FORMAT)')
	rm -rf $(COCOTB_BUILD)/*
	rm -rf $(PDF_DIR)/*
	rm -rf $(RESULTS_DIR)/*
	rm -rf $(PDOC_DIR)/$(DOC_NAME).md

# Clearing folders of generated files
clean_all:
	rm -rf $(D2_OUT_DIR)
	rm -rf $(COCOTB_BUILD)
	rm -rf $(PDF_DIR)
	rm -rf $(RESULTS_DIR)

.PHONY: all clean
# ==============================================================
