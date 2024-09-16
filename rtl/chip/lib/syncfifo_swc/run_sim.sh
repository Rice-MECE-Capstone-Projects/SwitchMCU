#!/bin/bash

# Verilate the design
verilator --binary -j 16 *.v --trace

# Run the generated executable
./obj_dir/Vsyncfifo_swc_tb
