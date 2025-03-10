.PHONY: all sim synth clean

SHELL := /bin/bash -o pipefail

DUT ?= riscv32i.v
SYNTH_TIMEOUT ?= 600
XILINX_CELLS_URL ?= https://github.com/Xilinx/XilinxUnisimLibrary.git
XILINX_CELLS_DIR ?= XilinxUnisimLibrary/verilog/src
IVERILOG ?= /usr/bin/iverilog
YOSYS ?= /usr/local/bin/yosys

all: sim synth gatesim

sim: riscv32i-sim
	./$< +VCDFILE=sim.vcd +VCDLEVEL=0 &> sim.log


riscv32i-sim: riscv32iTB.v ${DUT} | ${XILINX_CELLS_DIR}
	${IVERILOG} -g2005-sv -s riscv32iTB -y ${XILINX_CELLS_DIR} -o $@ $^

synth: riscv32i.netlist.v

riscv32i.netlist.v: ${DUT}
	timeout ${SYNTH_TIMEOUT} ${YOSYS} -p 'synth_xilinx -top riscv32i' -p stat $< -L synth.log -o $@

${XILINX_CELLS_DIR}:
	git clone ${XILINX_CELLS_URL}

gatesim: ./riscv32i-gatesim
	./$< +VCDFILE=gatesim.vcd +VCDLEVEL=4 | tee gatesim.log

riscv32i-gatesim: riscv32iTB.v riscv32i.netlist.v | ${XILINX_CELLS_DIR}
	${IVERILOG} -g2005-sv -s riscv32iTB -DGATESIM -y ${XILINX_CELLS_DIR} -y ${XILINX_CELLS_DIR}/unisims -o $@ $^


clear:
	$(RM) riscv32i-sim 
	

clean:
	$(RM) riscv32i-sim sim.log
	$(RM) riscv32i-gatesim gatesim.log gatesim.vcd
	$(RM) riscv32i.netlist.v synth.log
	
	
# $(RM) -r XilinxUnisimLibrary
