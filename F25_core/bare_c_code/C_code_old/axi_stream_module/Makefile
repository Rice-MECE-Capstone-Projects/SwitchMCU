.PHONY: all sim synth clean

SHELL := /bin/bash -o pipefail

DUT ?= ft_axi_fifo.v
SYNTH_TIMEOUT ?= 600
XILINX_CELLS_URL ?= https://github.com/Xilinx/XilinxUnisimLibrary.git
XILINX_CELLS_DIR ?= XilinxUnisimLibrary/verilog/src
IVERILOG ?= /usr/bin/iverilog
YOSYS ?= /usr/bin/yosys

all: sim synth gatesim

sim: ft_axi_fifo-sim
	./$< +VCDFILE=sim.vcd +VCDLEVEL=0 | tee sim.log

ft_axi_fifo-sim: ft_axi_fifo_tb.v ${DUT} | ${XILINX_CELLS_DIR}
	${IVERILOG} -g2005-sv -s ft_axi_fifoTB -y ${XILINX_CELLS_DIR} -o $@ $^

synth: ft_axi_fifo.netlist.v

ft_axi_fifo.netlist.v: ${DUT}
	timeout ${SYNTH_TIMEOUT} ${YOSYS} -p 'synth_xilinx -top ft_axi_fifo' -p stat $< -L synth.log -o $@

${XILINX_CELLS_DIR}:
	git clone ${XILINX_CELLS_URL}

gatesim: ./ft_axi_fifo-gatesim
	./$< +VCDFILE=gatesim.vcd +VCDLEVEL=3 | tee gatesim.log

ft_axi_fifo-gatesim: ft_axi_fifo_tb.v ft_axi_fifo.netlist.v | ${XILINX_CELLS_DIR}
	${IVERILOG} -g2005-sv -s ft_axi_fifoTB -DGATESIM -y ${XILINX_CELLS_DIR} -y ${XILINX_CELLS_DIR}/unisims -o $@ $^

clean:
	$(RM) ft_axi_fifo-sim sim.log sim.vcd
	$(RM) ft_axi_fifo-gatesim gatesim.log gatesim.vcd
	$(RM) ft_axi_fifo.netlist.v synth.log
	$(RM) -r XilinxUnisimLibrary
