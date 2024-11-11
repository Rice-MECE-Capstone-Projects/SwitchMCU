DUT ?= exu_imm_swc.v
DUTWAP ?= exu_imm_wrapper.v
TEST_PY ?= exu_imm_cocotb.py
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(shell pwd)/$(DUT)
VERILOG_SOURCES += $(shell pwd)/$(DUTWAP)

TOPLEVEL = ex_imm_en_wrapper
MODULE = $(basename $(TEST_PY))

include $(shell cocotb-config --makefiles)/Makefile.sim
