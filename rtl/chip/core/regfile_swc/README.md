# regfile_swc

## Overview

This module is registers and its control logics, containing a total of 32 registers, ranging from reg[0] to reg[31], with each register being 32 bits wide. The module provides interfaces for reading from and writing to these registers. It features one write port and two read ports to prevent structural hazards associated with the read ports. It's important to note that the 0th register of this register array is hardwired to ground, meaning that data cannot be written to register 0, and its read value will always be 0.

## Signals

1. **`hclk`**: The hardware clock signal, driving the synchronous operations within the register file.
2. **`hrstn`**: The hardware reset signal (active low), used to reset the state of the register file.
3. **`reg_waddr`**: An input signal specifying the address of the register to be written to.
4. **`reg_wdata`**: An input signal carrying the data to be written into the register specified by `reg_waddr`.
5. **`reg_wen`**: An input signal that enables writing to the register file. When high, the data on `reg_wdata` is written into the register at `reg_waddr`.
6. **`reg_raddr_1`**: An input signal specifying the address of the first register to be read.
7. **`reg_rdata_1`**: An output register that holds the data read from the register specified by `reg_raddr_1`.
8. **`reg_ren_1`**: An input signal enabling the read operation for the first read port. When high, data from the register at `reg_raddr_1` is placed on `reg_rdata_1`.
9. **`reg_raddr_2`**: An input signal specifying the address of the second register to be read.
10. **`reg_rdata_2`**: An output register that holds the data read from the register specified by `reg_raddr_2`.
11. **`reg_ren_2`**: An input signal enabling the read operation for the second read port. When high, data from the register at `reg_raddr_2` is placed on `reg_rdata_2`.