DUT ?= toggle_bit.v
DUTWAP ?= toggle_bit_wrapper.v
TEST_PY ?= test_toggle_bit.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/DUT_2025/$(DUT)
VERILOG_SOURCES += $(shell pwd)/DUT_2025_Wrapper/$(DUTWAP)
IVERILOG_ARGS += -I $(shell pwd)/DUT_2025
TOPLEVEL = $(basename $(DUTWAP))
MODULE = $(basename $(TEST_PY))

export PYTHONPATH := $(PYTHONPATH):./Testbench_2025

include $(shell cocotb-config --makefiles)/Makefile.sim
