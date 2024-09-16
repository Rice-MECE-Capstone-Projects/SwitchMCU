#!/bin/bash

BIN_FILE="$PROJECT_DIR/tb/rom/add.bin"

# bin2rom.py $BIN_FILE

# Find all .v files in the current directory and subdirectories
V_FILES=$(find . -type f -name "*.v" | tr '\n' ' ')

# Verilate the design
verilator --binary -j 16 $V_FILES --trace --top chip_tb

# Run the generated executable
./obj_dir/Vchip_tb

# This script is created with help of chatgpt