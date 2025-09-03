# Address Map Validation

By running the `compile.sh` file will:
- Compiling C and assembly code for a RISC-V target
- Linking objects using a custom memory layout (`link.ld`)
- Generating debug files (disassembly, ELF headers)
- Converting the binary into a Verilog-compatible hex file
- Running a Verilog simulation to test the program

## Tool installation
Please refer to [Installation.md](Installation.md) for tool install and validation.

## Pre-Compile
Please refer to [Folder-File-Structure.md](Folder-File-Structure.md) for:
- Folder Structure
- hex_parser.py
- compile.sh command
- Input Folder
    - link.ld
	- startup.S
	- program.c
- compilation
    - strictions.log
    - ink.ld
    - rogram.bin
    - rogram.c
    - rogram_disassembly.txt
    - rogram.elf
    - rogram.hex
    - rogram_incorrect.hex
    - rogram.o
    - tartup.o
    - startup.S
- verilog
    - program.hex
    - riscv_command_streamer_tb.v
    - riscv_command_streamer.v
    - simv

## Compile and Run
After install all necessary tools and packages, user could run `./compile.sh` in the terminal. If everything setup correct, user should see the output in terminal
> User might experience the access denied issue, grant the compile.sh file execute access should fix the issue
> If user still experience access issue, use `sudo chmod 777 compile.sh` to grant access for compile.sh file

## Validation Method
There are two steps need to perform to validate the address map function correctly.
- Step 1: Inspect the termnial output and source code
    - First inspect the input file and all configuration code, make sure there is no error by inspect the source code
    - If terminal shows error during the compile process, demonstrate there is critical error needs to handle and fix. Please follow the error code to diagnosis and fix the error
- Step 2: Compare the terminal output with file `link.ld` inside `input` folder
    - Make sure all command has landed in the proper memory address space we deterimed
    - Inspect is there any memory leak or possible memory leak happen
- For more detail explaination, please refer to [Address-Validation.md](Address-Validation.md) for more detail.

## License
Apache License
Version 2.0, January 2004
