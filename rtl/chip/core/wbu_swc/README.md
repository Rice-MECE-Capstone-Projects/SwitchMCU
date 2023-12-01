# wbu_swc

## Overview

The `wbu_swc` module is a Write-Back Unit (WBU) in a processor, designed to handle the final stage of the instruction execution pipeline, where results are written back to the register file.

## Signals

1. **`hclk`**: This is the hardware clock signal, driving the synchronous operations within the write-back unit.
2. **`hrstn`**: The hardware reset signal (active low), used to reset the state of the write-back unit.
3. **`cycle_cnt`**: An input signal representing the current cycle count, used for synchronization within the write-back operations.
4. **`mau_load_rd`**: An input signal specifying the destination register address for the load operation coming from the Memory Access Unit (MAU).
5. **`mau_load_data`**: An input signal carrying the data to be written into the register file as a result of a load operation from the MAU.
6. **`mau_load_en`**: An input signal indicating whether the load operation from the MAU is enabled and thus if the write-back operation should proceed.
7. **`reg_waddr`**: An inout signal specifying the address of the register where data should be written. This is driven by the `mid_reg_waddr` signal within the module.
8. **`reg_wen`**: An inout signal indicating whether the register write operation is enabled. It's controlled by the `mid_reg_wen` signal.
9. **`reg_wdata`**: An inout signal carrying the data to be written into the register file. This is set by the `mid_reg_wdata` signal.
10. **`mid_reg_waddr`**, **`mid_reg_wen`**, **`mid_reg_wdata`**: These are internal signals used to drive the corresponding inout ports for the register file. The module uses these signals to set the appropriate write address, write enable, and write data based on the load operation information from the MAU.