DUT ?= exu_store_swc.v
DUTWAP ?= exu_store_wrapper.v
TEST_PY ?= exu_store_cocotb.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/$(DUT)
VERILOG_SOURCES += $(shell pwd)/$(DUTWAP)

TOPLEVEL = exu_store_swc_wrapper
MODULE = $(basename $(TEST_PY))

include $(shell cocotb-config --makefiles)/Makefile.sim
