DUT ?= exu_branch_swc.v
DUTWAP ?= exu_branch_wrapper.v
TEST_PY ?= exu_branch_cocotb.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/$(DUT)
VERILOG_SOURCES += $(shell pwd)/$(DUTWAP)

TOPLEVEL = $(basename $(DUTWAP))
MODULE = $(basename $(TEST_PY))

include $(shell cocotb-config --makefiles)/Makefile.sim
