# core_top_swc

## Overview

1. **Clock and Reset Management**: The module uses `hclk` for clocking and `hrstn` for reset, ensuring that all sub-components operate in synchrony and can be reset as needed.
2. **Instruction and Data Tightly Coupled Memory (ITCM and DTCM) Interface**: The module interfaces with both ITCM and DTCM through AHB bus signals (`itcm_haddr`, `itcm_hwrite`, `itcm_hwdata`, etc. for ITCM and `dtcm_haddr`, `dtcm_hwrite`, `dtcm_hwdata`, etc. for DTCM). These interfaces are used for fetching instructions and accessing data, respectively.
3. **Instruction Fetch Unit (IFU)**: The IFU (`ifu_swc_inst`) is responsible for fetching instructions from the ITCM. It uses signals like `pc`, `pc_write`, `pc_wdata`, and others for managing the program counter and fetching the correct instruction.
4. **Decoder**: The Decoder (`dec_swc_inst`) takes fetched instructions and decodes them into signals that indicate the type of operation to be performed (like `dec_lui`, `dec_auipc`, `dec_jal`, etc.).
5. **Execution Unit (EXU)**: The EXU (`exu_top_swc_inst`) executes the decoded instructions. It uses various control signals from the Decoder and performs operations like arithmetic calculations, jumps, and branches.
6. **Memory Access Unit (MAU)**: The MAU (`mau_swc_inst`) handles memory read and write operations. It interfaces with the DTCM and uses signals from the EXU to perform load and store operations.
7. **Write-Back Unit (WBU)**: The WBU (`wbu_swc_inst`) is responsible for writing the results of computations and memory operations back into the register file. It takes inputs from the MAU and updates the register file accordingly.
8. **Cycle Count Management**: The module maintains a `cycle_cnt` to manage the execution stages of instructions within the pipeline.
9. **Register File**: The module includes a register file (`regfile_swc_inst`) for storing and providing access to the processor's registers. It is interfaced with the EXU for reading and writing register values.
10. **Stall and Control Logic**: The module also includes logic to handle stalling (`ifu_dec_stall`) and other control functionalities necessary for the proper operation of the processor core.

In essence, `core_top_swc` orchestrates the overall operation of the processor core, integrating various functional units like IFU, Decoder, EXU, MAU, and WBU. It manages the flow of instructions through the pipeline, ensuring that each instruction is fetched, decoded, executed, and the results written back in a coordinated manner.