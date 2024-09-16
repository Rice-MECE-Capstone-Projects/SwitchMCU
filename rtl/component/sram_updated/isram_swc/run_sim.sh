#!/bin/bash
rm ./obj_dir/*
# Find all .v files in the current directory and subdirectories
V_FILES=$(find . -type f -name "*.v" | tr '\n' ' ')

# Verilate the design
verilator --binary -j 16 $V_FILES --trace --top isram_swc_tb

# Run the generated executable
./obj_dir/Visram_swc_tb

#Gtkwave *.vcd
