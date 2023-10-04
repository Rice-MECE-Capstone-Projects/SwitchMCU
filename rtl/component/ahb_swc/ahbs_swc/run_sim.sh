#!/bin/bash

# Verilate the design
#verilator --exe -j 16 *.v --trace

# Run the generated executable
#./obj_dir/Vahbs_swc_tb

clear
rm -rf obj_dir
verilator --cc *.v --exe
cd obj_dir
make -j -f Vahbs_swc_tb.mk Vahbs_swc_tb
./Vahbs_swc_tb