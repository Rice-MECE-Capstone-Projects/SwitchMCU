# Folder and File Structure
Following is the critical folder and file structure for developer to reference

## Overall Folder Structure
	.
	├── compilation
	│   ├── instrictions.log
	│   ├── link.ld
	│   ├── program.bin
	│   ├── program.c
	│   ├── program_disassembly.txt
	│   ├── program.elf
	│   ├── program.hex
	│   ├── program_incorrect.hex
	│   ├── program.o
	│   ├── startup.o
	│   └── startup.S
	├── compile.sh
	├── hex_parser.py
	├── history.log
	├── inputs
	│   ├── link.ld
	│   ├── program.c
	│   └── startup.S
	├── parsed_output.hex
	├── program_incorrect.hex
	└── verilog
	    ├── program.hex
	    ├── riscv_command_streamer_tb.v
	    ├── riscv_command_streamer.v
	    └── simv
	4 directories, 23 files

## File Structure: hex_parser.py
`hex_parser.py` processes a hex-formatted input file to reorganize data into 32-bit little-endian words, grouped under address markers
> Please refer the documentation in file for more detail

## File Structure: compile.sh
Following is each command use in the `compile.sh` file
```sh
riscv32-unknown-elf-gcc -march=rv32i -mabi=ilp32 -nostdlib -ffreestanding -o program.o -c program.c
```
- march=rv32i
    - Specifies the target RISC-V architecture as RV32I (32-bit base integer instruction set, no extensions)
    - Ensures compatibility with minimal RISC-V cores or environments without hardware extensions (e.g., multiplication, floating-point)
- mabi=ilp32: Use 32-bit ABI (int, long, pointer = 32 bits)
    - Sets the ABI (Application Binary Interface) to ilp32, meaning:
        1. int, long, and pointers are 32 bits wide
        2. Matches the 32-bit address space of RV32I
- nostdlib/-ffreestanding: No standard libraries or OS dependencies (bare-metal)
    - o/-c: Compile to object file (Will Generate` program.o`)
```sh
riscv32-unknown-elf-as -march=rv32i -o startup.o startup.S
```
- Assembles the startup code (e.g., stack setup, data section initialization)
- Will Generate startup.o
```sh
riscv32-unknown-elf-ld -T link.ld -e _start -o program.elf program.o startup.o
```
- -T link.ld: Use linker script link.ld for memory layout
- -e _start: Set _start (defined in `startup.S`) as the entry point
- Will Generate `program.elf`
```sh
riscv32-unknown-elf-objcopy -O binary program.elf program.bin
```
- Will Generate `program.bin`      
```sh
riscv32-unknown-elf-readelf -h program.elf
```
```sh
riscv32-unknown-elf-objdump -D -b binary -m riscv:rv32 program.bin > program_disassembly.txt 
```
- Will Generate `program_disassembly.txt`
```sh
riscv32-unknown-elf-objdump -D program.elf &> instrictions.log
```
- Debugging and verifying code placement
-  Will Generate `instrictions.log`
```sh
riscv32-unknown-elf-objcopy -O verilog program.elf program_incorrect.hex
```
- Generate Raw Verilog Hex File
- Will Generate `program_incorrect.hex`

## Folder Structure: Input
Input folder contain all user scripted input files; `program.c` is the source file, `startup.S` file is the assemble file, and `link.ld` file combine the source file with starter file `startup.S`
> All these files has well-written documentation inside for developers to read. Please refer the documentation in each file for detail description
- link.ld
    - Purpose:
        - Defines memory regions (instrram, rom, dataram, etc.)
            - Maps sections (.text, .data, .bss, .stack) to specific memory addresses
	    	- Reserves stack space and sets symbols like _stack_start
 	    - The original link.ld has four blocks:
            | Block | Starting Address | Size | Purpose |
            | ------ | ------ | ------ | ------ |
            | instrram | 0x00000000 | 1024 bytes | Stores executable code (.text section) |
            | rom | 0x00000400 | 512 bytes | Holds read-only data (.rodata section, e.g., constants) |
            | peripheral | 0x00000600 | 512 bytes | Reserved for memory-mapped peripherals |
            | dataram | 0x00000800 | 2048 bytes |  Contains initialized data (.data), uninitialized data (.bss), and the stack |
        - The original link.ld provide a stack that:
	        - Starts at the end of dataram (0x00001000)
		    - Reserves 1024 bytes (0x400) of stack space
		    - Defined as 1024 bytes
- startup.S
    - Purpose:
        - Defines the program entry point (_start)
        - Initializes the stack pointer
	    - Copies .data section from ROM to RAM
	    - Clears the .bss section
    > Please refer the documentation in file for more detail
- program.c
    - Purpose: 
        - Implements the main logic of the program:
            1. Computes the sum of numbers from 1 to 30
	        2. Writes results to memory-mapped peripherals
	        3. Reports success (0xDEADBEEF) or failure (0x0BADF00D) via peripheral addresses
    > Please refer the documentation in file for more detail

## Folder Structure: Compilation
This folder will contain all source files copied from input folder or root folder, compiled binary file for next stage to test. Following shows a short description for each file in compilation folder
- startup.S
    - Copied from Input Folder
- program.c
    - Copied from Input Folder
- link.ld
    - Copied from Input Folder
- program.o
    - Purpose: Contains machine code for `program.c`, not yet linked
- startup.o
    - Purpose: Contains machine code for `startup.S`, including the _start entry point
- program.elf
    - Purpose:
        1. Fully linked executable combining `program.o` and `startup.o`
	    2. Contains metadata (headers, sections, symbols) for debugging
- program.bin
    - Purpose:
        1. Stripped-down version of `program.elf` containing only executable code/data
	    2. Used for flashing to hardware or simulation
- program_incorrect.hex
    - Purpose:
        1. Initial hex file generated from `program.elf`
	    2. Contains byte-level data but may have incorrect endianness or alignment
- program.hex
    - Purpose:
        1. Final hex file formatted for Verilog simulation
	    2. Groups bytes into 4-byte words with little-endian byte order
    - Generated By: `hex_parser.py` (corrects `program_incorrect.hex`)
- program_disassembly.txt
    - Purpose:
        1. Human-readable assembly code for the raw binary (`program.bin`)
	    2. Useful for debugging instruction-level issues
- instrictions.log
    - Purpose:
        1. Disassembly of `program.elf`, showing code/data placement in memory
        2. Includes section addresses and symbol information
- parsed_output.hex
    - Purpose: Temporary output during `hex_parser.py` execution

## Folder Structure: Verilog
Verilog folder contain the `program.hex` file copied from Compilation folder and
- riscv_command_streamer.v
    - Purpose: Verilog implementation of the RISC-V processor/core (e.g., instruction fetch, decode, execute logic)
- riscv_command_streamer_tb.v
    - Purpose: Testbench for simulating the processor’s behavior
- simv
    - Compiled Verilog simulator executable
	- Generated By: `iverilog -o simv *.v`

## License
Apache License
Version 2.0, January 2004