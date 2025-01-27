DUT ?= exu_flush_swc.v
DUTWAP ?= exu_flush_wrapper.v
TEST_PY ?= exu_flush_cocotb.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/$(DUT)
VERILOG_SOURCES += $(shell pwd)/$(DUTWAP)

TOPLEVEL = ex_flush_wrapper
MODULE = exu_flush_cocotb

include $(shell cocotb-config --makefiles)/Makefile.sim
