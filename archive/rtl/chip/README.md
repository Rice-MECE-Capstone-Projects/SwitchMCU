# chip\_top

## Overview

This module serves as the top-level file for the core, interfacing the core's internals with the data and instruction buses. It encompasses the core's 5-stage pipeline.
Within the module, two instances of sram\_swc are created. One instance, named itcm\_swc\_inst, is used as the instruction memory, while the other, named dtcm\_swc\_inst, serves as the data memory. Both memory blocks have a size of 4096 bytes and are implemented using registers. These memories are connected to the core via the AHB bus, which operates at a frequency of 72MHz, with both address and data widths being 32 bits.

## Signals

1. **`hclk`**: The hardware clock signal, driving the synchronous elements of the design.
2. **`hrstn`**: The hardware reset signal (active low), used for initializing or resetting the system state.
3. **`itcm_ready`**: An input signal indicating the readiness of the Instruction TCM to process requests.
4. **`ITCM_DATA_PATH`, `DTCM_DATA_PATH`**: Parameters specifying the data paths for the Instruction and Data TCMs.
5. **`ITCM_BASE_ADDRESS`, `DTCM_BASE_ADDRESS`**: Parameters defining the base memory addresses for the Instruction and Data TCMs.
6. **`itcm_haddr`, `dtcm_haddr`**: Address lines for the Instruction and Data TCMs, specifying the memory address for read/write operations.
7. **`itcm_hwrite`, `dtcm_hwrite`**: Signals indicating the type of transaction (write or read) to the respective TCMs.
8. **`itcm_hwdata`, `dtcm_hwdata`**: Write data lines for the Instruction and Data TCMs, carrying data to be written into memory.
9. **`itcm_hsize`, `dtcm_hsize`**: Signals specifying the size of the data transfer for the current transaction in the respective TCMs.
10. **`itcm_hprot`, `dtcm_hprot`**: Signals providing protection attributes for the transaction, like privilege level and bufferable status.
11. **`itcm_hburst`, `dtcm_hburst`**: Signals defining the type of burst transfer for the current transaction in the respective TCMs.
12. **`itcm_htrans`, `dtcm_htrans`**: Signals indicating the transaction type for the respective TCMs, such as non-sequential or sequential.
13. **`itcm_hmastlock`, `dtcm_hmastlock`**: Signals used to lock the bus for uninterrupted access during a sequence of transfers.
14. **`itcm_hready`, `dtcm_hready`**: Signals indicating that the respective TCMs are ready for a new data transfer.
15. **`itcm_hresp`, `dtcm_hresp`**: Response signals from the Instruction and Data TCMs, indicating the status of the last transaction.
16. **`itcm_hrdata`, `dtcm_hrdata`**: Read data lines for the Instruction and Data TCMs, carrying data read from memory.
17. `sram_swc` instances for `itcm` and `dtcm`: Module instantiations for SRAM-based TCMs, configured with specified data paths and base addresses, handling the interface and memory operations.
18. `core_top_swc` instance: The instantiation of the core processing module, interfacing with both ITCM and DTCM, and handling core functions like executing instructions and managing memory accesses.