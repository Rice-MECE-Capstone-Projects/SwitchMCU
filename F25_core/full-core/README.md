# RISC-V Full Core - Fall 2025

## Abstract
By the end of Spring 2025 semester, the core team implemented a fairly complex RISC-V core design. But this core was not being validate with iVerliog and AMD Vivado. This ReadMe file includes the file structure, and the instruction on how to compile thr full core after being simplied using iVerilog and Vivado.

## Overall Core Structure
    .
    ├── branch_prediction.v
    ├── dataMem.v
    ├── debug.v
    ├── decode.v
    ├── excute.v
    ├── hazard.v
    ├── ins_mem.v
    ├── Makefile
    ├── params.vh
    ├── pc.v
    ├── program.coe
    ├── program.hex
    ├── README.md
    ├── regfile.v
    ├── riscv32i_sim
    ├── riscv32iTB.v
    ├── riscv32i_tb.vcd
    ├── riscv32i.v
    ├── riscv_sim
    ├── run
    └── sim.vcd
    
    1 directory, 21 files

## File Structure and Changes
The goal for this full core development is to simplify the code block without modify any existed logic. During the beginning of the semester our team realized there are unused port and wire floating all around the code, also the debug code block, port, and wire. The full core cleaning process aims to remove these non-necessary code, port, and wire because these codes will cause Vivado Synthesis and Implementation fail. Each module's modification is shown in following:

- Branch_prediction.v
    - Removed:
        - Debug printing block
        - Unused register: `false_preds_update_trigger`
        - Unused wire: `pc_x`
    - Kept:
        - Complete branch prediction FSM (STATIC, ONE_BIT, TWO_BIT)
        - Prediction accuracy tracking
        - Prediction update logic
        - Target address calculation

- dataMem.v
    - Removed:
        - Debug printing block
        - end_write module
        - Unused registers:
            - `last_stored_data`, `last_stored_word_address`, `last_stored_address`
            - `last_loaded_data`, `last_loaded_address`
            - `stored_happened`, `loaded_happened`
        - Unused wires:
            - `raw_bram_data_word_end`
            - `pc_i` input port
        - Debug-only output port: `final_value`
    - Kept:
        - Memory access control logic
        - Byte/half-word/word load/store operations
        - Stall generation for memory not ready
        - BRAM interface signals
        - Memory alignment handling

- debug.v
    - Complete debug module with instruction decoding and pipeline register display
    - All $write statements for pipeline stage tracking
    - Instruction mnemonic printing
    - 

- Decode.v
    - Removed:
        - Debug comments and unused FPGA initialization comment
        - Unused parameter module instantiation comment: // param_module params ()
    - Kept:
        - Complete instruction decoding logic
        - All instruction type detection (R-type, I-type, S-type, B-type, etc.)
        - Immediate value generation
        - Function code extraction
        - Single instruction encoding

- Execute.v
    - Removed:
        - Debug printing block
        - Debug wire: `debug_i`
    - Kept:
        - Complete ALU execution for all instruction types
        - Result calculation for arithmetic, logical, memory, branch, and jump instructions
        - Branch condition evaluation
        - All functional output generation

- Hazard.v
    - Removed:
        - Debug printing block
        - Unused input ports:
            - `PC_stage1`, `PC_stage2`, `PC_stage3`
    - Kept:
        - Complete hazard detection logic
        - Operand forwarding from MEM and WB stages
        - Forwarding control signals generation
        - All functional data path connections

- Ins_mem.v
    - Removed:
        - Commented BRAM interface (alternative implementation)
        - Debug-related registers: `prev_cycle_stall_ID`
        - Unused signals:
            - `pc_decode`, `current_PC_wating_rvalid`, `PC_requested`
    - Kept:
        - Complete instruction memory FSM (IDLE, WAIT_GNT, WAIT_RVALID, ABORT_RVALID)
        - Memory request handling with stalls
        - Branch/jump abort handling
        - Instruction backup for stall scenarios

- params.vh
    - Remove all macros that define bit ranges.
    - Remove all CSR related macro.
    - Remove unused macro.

- pc.v
    - Removed:
        - Debug printing block
    - Kept:
        - Complete PC update logic
        - Branch and jump target selection
        - Reset and enable conditions
        - Next PC calculation

- regfile.v
    - Removed:
        - Debug printing block
    - Kept:
        - All functional register file logic
        - Register initialization and reset
        - Read/write operations with forwarding logic
        - Clocked register updates

- riscv32iTB.v
    - Removed:
        - Debug display statements
        - Memory display block in bram_mem
        - Unused registers: `enable_design`, `cycle_to_end`
        - Unused wire: `final_value`
    - Kept:
        - Complete testbench structure
        - Clock generation
        - Control signal sequencing
        - BRAM memory modules
        - Simulation timeout control 

- riscv32i.v
    - Removed:
        - Debug module instantiations
        - Success display statement
        - Unused test modules: `inst_mem_bram_wrapper_test_purpoeses`, `timed_pulse`
        - Unused registers in memory wrapper:
            - `rvalid_reg_1` through `rvalid_reg_7`
            - `cycle_taken`
    - Kept:
        - Complete RISC-V processor pipeline
        - All pipeline registers (pipeReg0-pipeReg3)
        - Hazard detection and forwarding
        - Branch prediction integration
        - Memory interface wrappers
        - Control signal generation

## Tool installation
Please refer to [Installation.md](Installation.md) for tool install and validation.

## How to Compile use iVerilog
##### Navigate to the simple core folder:
```sh
cd ./full-core
```
##### Compile the simple core using iVerilog:
```sh
iverilog -o riscv_sim riscv32iTB.v riscv32i.v decode.v excute.v regfile.v dataMem.v ins_mem.v pc.v hazard.v branch_prediction.v debug.v params.vh
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