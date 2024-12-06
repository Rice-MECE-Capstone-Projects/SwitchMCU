DUT ?= toggle_bit.v
DUTWAP ?= toggle_bit_wrapper.v
TEST_PY ?= test_toggle_bit.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/DUT_top/*.v
VERILOG_SOURCES += $(shell pwd)/DUT_top_Wrapper/$(DUTWAP)

TOPLEVEL = $(basename $(DUTWAP))
MODULE = $(basename $(TEST_PY))

export PYTHONPATH := $(PYTHONPATH):./Testbench

include $(shell cocotb-config --makefiles)/Makefile.sim
