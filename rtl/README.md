# `SwitchMCU/rtl`

 The meat and potatoes - this directory contains all RTL source files required to obtain a working copy of the SwitchMCU. Due to the design size, it is split into the core submodules and other components. An elementary, truncated tree structure is provided below.
 
 1. Core - `SwitchMCU/rtl/chip/`
 1. Interface/Peripherals/Memory/Other controllers - `SwitchMCU/rtl/components/`

  ```markdown
├── rtl
│   ├── chip
│   │   ├── core
│   │   │   ├── dec\_swc - Instruction Decoder (2nd Pipeline Stage)
│   │   │   ├── exu\_swc - Processor Execution Unit (3rd Pipeline Stage)
│   │   │   ├── ifu\_swc - Instruction Fetch Unit (1st Pipeline Stage)
│   │   │   ├── mau\_swc - Memory Access Unit (4th Pipeline Stage)
│   │   │   ├── regfile\_swc (32 RV32I-compliant Register File)
│   │   │   ├── wbu\_swc - Writeback Unit (5th Pipeline Stage)
│   │   ├── README.md
│   ├── component
│   │   ├── ahb\_swc - AMBA Advanced High-Performance Bus
│   │   ├── apb\_swc - AMBA Advanced Peripheral Bus
│   │   ├── asyncfifo\_swc - Asynchronous FIFO
│   │   ├── core\_swc - Alternate Core Components such as Hazard Management Unit
│   │   ├── regs\_swc - Registers 
│   │   ├── spictrl\_swc - SPI Controller
│   │   ├── sram\_swc - Alternate/Backup SRAM Implementation for testing
│   │   ├── sram\_updated - SRAM
```
