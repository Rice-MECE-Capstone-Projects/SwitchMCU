DUT ?= exu_load_swc.v
DUTWAP ?= exu_load_wrapper.v
TEST_PY ?= exu_load_cocotb.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/$(DUT)
VERILOG_SOURCES += $(shell pwd)/$(DUTWAP)

TOPLEVEL = exu_load_swc_wrapper
MODULE = $(basename $(TEST_PY))

include $(shell cocotb-config --makefiles)/Makefile.sim
