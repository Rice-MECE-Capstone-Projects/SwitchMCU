# exu_top_swc

## Overview

This module is used for the execution of specific instructions. Similar to previous modules, cycle\_cnt is a counter used to control specific execution steps, counting from 1 to 4. Ifu\_dec\_stall is a signal for controlling pipeline stalls, and there are several inputs from the previous level decoder and outputs to the next-level memory access module. The module divides the execution of instructions across multiple sub-modules, grouping similar operations into the same module. For instance, dec\_addi and dec\_slti, which both read from a register and an immediate value and write to a register, have nearly identical execution steps except for a difference in one of the logical operations in the middle. Therefore, they are implemented in the ex\_imm\_swc module. Instructions like dec\_jal and dec\_jalr, which require overriding the program counter and flushing the pipeline, are implemented in the exu\_jump\_swc module. This module instantiates exu\_upper\_swc, ex\_imm\_swc, exu\_reg\_swc, exu\_jump\_swc, exu\_branch\_swc, exu\_load\_swc, exu\_store\_swc, and ex\_flush\_swc. The first seven modules are used for executing the forty-plus instructions in RV32I, while ex\_flush\_swc is used for controlling the flushing of the pipeline.

## Signals

1. **`hclk`**: This is the hardware clock signal, driving the synchronous elements within the module.
2. **`hrstn`**: The hardware reset signal (active low), used to reset the state of the execution unit.
3. **`cycle_cnt`**: An input signal representing the current cycle count, used for synchronization within the execution pipeline.
4. **`ifu_dec_stall`**: An input signal indicating a stall condition from the Instruction Fetch Unit (IFU) or the decoder.
5. **`inst_in`**: This input signal carries the instruction to be executed by the EXU.
6. **`inst_out`**: The output register holding the instruction after execution, often used for debugging or pipelining purposes.
7. **`dec_lui`, `dec_auipc`, `dec_jal`, `dec_jalr`, `dec_beq`, etc.**: These input signals are flags from the decoder, each representing a specific instruction type to be executed.
8. **`dec_rs2`, `dec_rs1`, `dec_rd`**: Input signals specifying the source and destination registers used in the instruction.
9. **`dec_imm_type_i`, `dec_imm_type_s`, etc.**: These input signals carry immediate values for different types of instructions.
10. **`pc`**: Input signal holding the current program counter value.
11. **`pc_write`**, **`pc_wdata`**: Output signals used to update the program counter, either with a new value (`pc_wdata`) or a signal to write (`pc_write`).
12. **`exu_load_rd`**, **`exu_load_base_addr`**, etc.: Output signals related to load operations, including target register, base address, offset, sign extension flag, and load size.
13. **`exu_store_addr`**, **`exu_store_data`**, etc.: Output signals for store operations, specifying the address, data, size, and enable signal.
14. **`reg_waddr`**, **`reg_wdata`**, **`reg_wen`**: Output signals for writing data to the register file, including the address, data, and write enable signal.
15. **`reg_raddr_1`**, **`reg_rdata_1`**, **`reg_ren_1`**: Output and input signals for reading from the first source register in the register file.
16. **`reg_raddr_2`**, **`reg_rdata_2`**, **`reg_ren_2`**: Similarly, for the second source register.
17. **`flush`**, **`flush_stall`**, **`exu_stall`**: Control signals for handling pipeline flushes and stalls.