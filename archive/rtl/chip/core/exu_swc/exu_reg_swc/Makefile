DUT ?= exu_reg_swc.v
DUTWAP ?= exu_reg_wrapper.v
TEST_PY ?= exu_reg_cocotb.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/$(DUT)
VERILOG_SOURCES += $(shell pwd)/$(DUTWAP)

TOPLEVEL = exu_reg_swc_wrapper
MODULE = $(basename $(TEST_PY))

include $(shell cocotb-config --makefiles)/Makefile.sim
