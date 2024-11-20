DUT ?= exu_upper_swc.v
DUTWAP ?= exu_upper_wrapper.v
TEST_PY ?= exu_upper_cocotb.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/$(DUT)
VERILOG_SOURCES += $(shell pwd)/$(DUTWAP)

TOPLEVEL = exu_upper_en_wrapper
MODULE = exu_upper_cocotb

include $(shell cocotb-config --makefiles)/Makefile.sim
