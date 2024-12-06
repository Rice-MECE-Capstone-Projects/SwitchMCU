.PHONY: all sim synth clean

SHELL := /bin/bash -o pipefail

# Variables
TOP_MODULE ?= ft_axi_fifo.v
DUT ?= DUT.v
TESTBENCH ?= ft_axi_fifo_tb.v
SYNTH_TIMEOUT ?= 600
XILINX_CELLS_URL ?= https://github.com/Xilinx/XilinxUnisimLibrary.git
XILINX_CELLS_DIR ?= XilinxUnisimLibrary/verilog/src
IVERILOG ?= /usr/bin/iverilog
YOSYS ?= /usr/local/bin/yosys 	# Changes based on WSL

# Targets
all: sim synth gatesim

sim: ft_axi_fifo-sim
	./$< +VCDFILE=sim.vcd +VCDLEVEL=0 | tee sim.log

ft_axi_fifo-sim: ${TESTBENCH} ${TOP_MODULE} ${DUT} | ${XILINX_CELLS_DIR}
	${IVERILOG} -g2005-sv -s ft_axi_fifoTB -y ${XILINX_CELLS_DIR} -o $@ $^

synth: ft_axi_fifo.netlist.v

ft_axi_fifo.netlist.v: ${TOP_MODULE} ${DUT}
	timeout ${SYNTH_TIMEOUT} ${YOSYS} -p 'synth_xilinx -top ft_axi_fifo' -p stat ${TOP_MODULE} ${DUT} -L synth.log -o $@

${XILINX_CELLS_DIR}:
	git clone ${XILINX_CELLS_URL}

gatesim: ./ft_axi_fifo-gatesim
	./$< +VCDFILE=gatesim.vcd +VCDLEVEL=3 | tee gatesim.log

ft_axi_fifo-gatesim: ${TESTBENCH} ft_axi_fifo.netlist.v | ${XILINX_CELLS_DIR}
	${IVERILOG} -g2005-sv -s ft_axi_fifoTB -DGATESIM -y ${XILINX_CELLS_DIR} -y ${XILINX_CELLS_DIR}/unisims -o $@ $^

clean:
	$(RM) ft_axi_fifo-sim sim.log sim.vcd
	$(RM) ft_axi_fifo-gatesim gatesim.log gatesim.vcd
	$(RM) ft_axi_fifo.netlist.v synth.log
	# $(RM) -r XilinxUnisimLibrary
