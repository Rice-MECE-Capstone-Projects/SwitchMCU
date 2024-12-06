import sys

file_name = []
for i in range(len(sys.argv)):
    file_name.append(sys.argv[i])
file_name.pop(0)

makefile = open("./Makefile", 'w')
makefile.write("DUT ?= toggle_bit.v\n")
makefile.write("DUTWAP ?= toggle_bit_wrapper.v\n")
makefile.write("TEST_PY ?= test_toggle_bit.py\n")
makefile.write("SIM ?= icarus\n")
makefile.write("TOPLEVEL_LANG ?= verilog\n")
makefile.write("\n")

if(len(file_name) == 0):
    makefile.write("VERILOG_SOURCES += $(shell pwd)/DUT/$(DUT)\n")
else:
    for file in file_name:
        makefile.write("VERILOG_SOURCES += $(shell pwd)/DUT/{}\n".format(file))
makefile.write("VERILOG_SOURCES += $(shell pwd)/DUT_Wrapper/$(DUTWAP)\n")
makefile.write("\n")

makefile.write("TOPLEVEL = $(basename $(DUTWAP))\n")
makefile.write("MODULE = $(basename $(TEST_PY))\n")
makefile.write("\n")

makefile.write("export PYTHONPATH := $(PYTHONPATH):./Testbench\n")
makefile.write("\n")

makefile.write("include $(shell cocotb-config --makefiles)/Makefile.sim\n")

makefile.close()