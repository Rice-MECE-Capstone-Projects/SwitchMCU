DUT ?= exu_jump_swc.v
DUTWAP ?= exu_jump_wrapper.v
TEST_PY ?= exu_jump_cocotb.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/$(DUT)
VERILOG_SOURCES += $(shell pwd)/$(DUTWAP)

TOPLEVEL = exu_jump_swc_wrapper
MODULE = $(basename $(TEST_PY))

include $(shell cocotb-config --makefiles)/Makefile.sim
