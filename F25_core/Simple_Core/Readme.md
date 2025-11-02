# RISC-V Simple Core

## Abstract
By the end of Spring 2025 semester, the core team implemented a fairly complex RISC-V core design. But this core was not being validate with iVerliog and AMD Vivado. This ReadMe file includes the file structure, and the instruction on how to compile this simple core using iVerilog and Vivado.

## Overall Core Structure
    .
    ├── dataMem.v
    ├── decode.v
    ├── execute.v
    ├── hazard.v
    ├── ins_mem.v
    ├── params.vh
    ├── pc.v
    ├── program1.hex
    ├── program.hex
    ├── PYNQ-Z2 v1.0.tcl
    ├── PYNQ-Z2 v1.0.xdc
    ├── regfile.v
    ├── riscv32i.v
    ├── riscv_core.vcd
    ├── riscv_sim
    └── riscv_tb.v

    1 directory, 16 files

## File Structure and Changes
The simple core was removed the `Branch Prediction`, `Control and Status Registers (CSRs)`, Cache implemented, Memory State Machine mechanism, cleaning the unused wire and port, simplify the complex inner module logic. Each module's modification is shown in following:
- Branch_prediction.v
    - Thanks to Linsey’s design, the main logic of branch prediction were in the        branch_prediction.v file, and some wire and port in different modules.
    - Remove the module and port in other modules should completely remove the branch prediction features from the core design.
- Debug.v
    - This module is purely for debugging purposes, used by previous semester’s core team.
    - It is safe to remove this module.
- pc.v
    - Remove the input related to branch prediction and debug block.
    - Simplify the counter logic.
- Ins_mem.v
    - Remove all inputs and outputs related to the external memory interface.
    - Remove the state machine and all associated logic.
- Decode.v
    - Remove the CSR related code, wire, and port.
- Execute.v
    - Remove the CSR related code, wire, and port.
- dataMem.v
    - Delete debug and commented code.
    - Simplify the logic to directly perform loads and stores based on the instruction type.
- Hazard.v
    - Remove debug statement.
- params.vh
    - Remove all macros that define bit ranges.
    - Remove all CSR related macro.
    - Remove unused macro.

## Tool installation
Please refer to [Installation.md](Installation.md) for tool install and validation.

## How to Compile use iVerilog
##### Navigate to the simple core folder:
```sh
cd ./simple-core
```
##### Compile the simple core using iVerilog:
```sh
iverilog -o riscv_sim riscv_tb.v riscv32i.v pc.v ins_mem.v decode.v execute.v dataMem.v regfile.v
```
> After running this command, the iVerilog compiler would generate `riscv_sim` executeable file and `riscv_core.vcd` Value Change Dump file.
##### Run the compiled core using iVerilog:
```sh
./riscv_sim
```

## How to Validate use AMD Vivado
Installation of the AMD toolset is required. VIvado is included in the toolset. After confirmed the installation, user should:
- Create a new Project in Vivado, and included all `.v` source file in it.
- Include the board file into the Project for generate the bitstream. Both `PYNQ-Z2 v1.0.tcl` and `PYNQ-Z2 v1.0.xdc` are the board file for PNYQ-Z2 board. Use other FPGA board need to search the board file from official source.
- (Optional) Run Behavior Simulation in the Simulation secction.
    - Select the signal user wants to monitor for.
- (Optional) Run the RTL Analysis (Linter).
- Run the Synthesis and fix the error or critical warning.
- Run the Implementation and fix the error or critical warning.
- Generate the bitstream and send it to the board.
- After confirm the bitstream was successfully loaded to the FPGA board, flip the switch 0 upward to reset the clock and flip downward to trigger the start signal. The 4 leds represent the last 4 digits of the final result.

## License
Apache License
Version 2.0, January 2004