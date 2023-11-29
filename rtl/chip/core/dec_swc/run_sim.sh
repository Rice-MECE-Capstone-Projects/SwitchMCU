#!/bin/bash

# Verilate the design
verilator --binary -Wall -j 16 *.v --trace

# Run the generated executable
./obj_dir/Vswitch_mcu_dec