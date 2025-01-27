#!/bin/bash

# Define directories
INPUT_DIR="inputs"
COMPILATION_DIR="compilation"
VERILOG_DIR="verilog"

# Delete all files in "compilation" directory
rm -rf "$COMPILATION_DIR"/*

# Copy all files from "inputs" to "compilation"
cp "$INPUT_DIR"/* "$COMPILATION_DIR"/

# Change directory to "compilation"
cd "$COMPILATION_DIR" || exit

# Run commands here
# (Replace the following line with actual commands to be executed)
echo "Running compilation commands..."

# riscv32-unknown-elf-gcc     -march=rv32i -mabi=ilp32 -nostdlib - -o program.o -c program.c
# riscv32-unknown-elf-gcc -march=rv32i -mabi=ilp32 -nostdlib -ffreestanding -O2 -v -o program.o -c program.c
riscv32-unknown-elf-gcc -march=rv32i -mabi=ilp32 -nostdlib -ffreestanding -O2 -o program.o -c program.c
riscv32-unknown-elf-as      -march=rv32i -o startup.o startup.S
riscv32-unknown-elf-ld      -T link.ld -o program.elf program.o startup.o
riscv32-unknown-elf-objcopy -O binary program.elf program.bin
riscv32-unknown-elf-readelf -h program.elf

riscv32-unknown-elf-objdump -D -b binary -m riscv:rv32 program.bin > program_disassembly.txt
riscv32-unknown-elf-objdump -D program.elf &> instrictions.log
riscv32-unknown-elf-objcopy -O verilog program.elf program_incorrect.hex

echo "Complilation run, python next step"

cd - || exits
python3 hex_parser.py
cp "$COMPILATION_DIR"/program.hex "$VERILOG_DIR"/
# cp "$COMPILATION_DIR"/program.hex* "$VERILOG_DIR"/

cd "$VERILOG_DIR" || exit

iverilog -o simv *.v

vvp simv