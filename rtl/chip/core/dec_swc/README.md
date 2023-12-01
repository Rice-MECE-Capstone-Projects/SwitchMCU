# dec_swc

## Overview

This module is the design of the decoder in the pipeline. The signal ifu\_dec\_stall is an input to this module. When active, this stage of the pipeline will halt operations until the signal is deactivated. Additionally, all signals starting with 'dec', such as dec\_lui, dec\_auipc, are outputs of this module. These signals, which are only 1 bit, are used to indicate the current decoding instruction. Signals like dec\_upper\_en and dec\_imm\_en are used to indicate the type of the current decoding instruction. Signals such as dec\_imm\_type\_i and dec\_rd indicate the results of the current decoding for immediate values and registers. This stage of the pipeline employs multi-level pipeline registers to reduce the complexity of combinational logic circuits between registers, thereby decreasing combinational circuit delay and potentially increasing the clock frequency. When cycle\_cnt equals 1, the module performs preliminary decoding, decoding the instruction based on the position of bits. When cycle\_cnt equals 2, the module performs an intermediate stage of decoding, identifying if the result of the first step matches certain values. When cycle\_cnt equals 4, the module outputs the final results based on the outputs of the previous two steps.

## Signals

1. **`hclk`**: This is the hardware clock signal. It synchronizes the operations within the module.
2. **`hrstn`**: The hardware reset signal (active low). It's used to reset the state of the decoder.
3. **`inst_in`**: This input signal carries the instruction that needs to be decoded.
4. **`inst_out`**: The output signal that holds the instruction after passing through the decoder.
5. **`cycle_cnt`**: An input signal representing the current cycle count, used to synchronize the decoding process.
6. **`ifu_dec_stall`**: An input signal indicating a stall condition from the Instruction Fetch Unit (IFU) to the decoder.
7. **`dec_lui`, `dec_auipc`, `dec_jal`, etc.**: These are output signals that indicate the type of instruction decoded. Each `dec_` prefixed signal corresponds to a specific instruction type, like Load Upper Immediate (`lui`), Add Upper Immediate to PC (`auipc`), Jump and Link (`jal`), etc.
8. **`dec_upper_en`, `dec_imm_en`, `dec_reg_en`, `dec_jump_en`, `dec_branch_en`, `dec_load_en`, `dec_store_en`**: These output signals are control flags enabling various operations like upper immediate, immediate, register, jump, branch, load, and store functionalities based on the decoded instruction.
9. **`dec_rs2`, `dec_rs1`, `dec_rd`**: These output registers hold the source and destination register identifiers decoded from the instruction.
10. **`dec_imm_type_i`, `dec_imm_type_s`, `dec_imm_type_b`, `dec_imm_type_u`, `dec_imm_type_j`**: These output registers hold the immediate values for different types of instructions (I-type, S-type, B-type, U-type, and J-type).