# Instruction Cache + Instruction Memory + Interface
Fall 2025 – Capstone Project

## Abstract
This directory contains the implementation and integration of a direct‑mapped instruction cache with the RISC‑V core’s instruction memory. The instruction cache was adapted from the previously built data cache and redesigned for fetch‑only semantics. A dedicated interface module was built to connect the cache with the instruction memory, enabling 8‑word burst fills and stall‑free operation during instruction fetch.

## File Structure
```
icache_insmem_interface/
├── cache.v
├── ins_mem.v
├── insmem_interface.v
├── icache_tb.v
├── program.hex
```

## Module Overview

### cache.v (Instruction Cache)
- Direct‑mapped 2 KB instruction cache
- 64 cache lines, 32‑byte block (8 words)
- Read‑only (fetch‑only) design
- FSM:
  - IDLE
  - CHECK_HIT
  - MISS
  - BURST_FILL
  - UPDATE_LINE
- Stores:
  - tag array
  - valid bits
  - data blocks

### ins_mem.v
- Simple instruction memory wrapper
- Loads program.hex at initialization
- Provides 32‑bit instruction fetch
- Supports abort logic for branch/jump redirection

### insmem_interface.v
- Bridges instruction cache burst requests and single‑word instruction memory
- Handles:
  - read requests
  - burst transfer
  - cache‑stall signaling
- Ensures synchronized IF‑stage operation

### icache_tb.v
- Unit‑level testbench for instruction cache + interface + memory
- Prints PC, fetched instruction, cache state transitions
- Validated correct sequence of 8‑word burst fetches

## How to Run Simulation (iVerilog)

### 1. Navigate into folder
```sh
cd icache_insmem_interface
```

### 2. Compile
```sh
iverilog -g2012 -o icache_sim \
    icache_tb.v cache.v ins_mem.v insmem_interface.v ins_memory.v
```

### 3. Run
```sh
vvp icache_sim
```

### 4. (Optional) View waveform
```sh
gtkwave icache_tb.vcd
```

---

## Expected Output
Example output from the testbench:

```
T=85000 | PC=00000000 | INST=fd010113 | cache_state=1
T=95000 | PC=00000004 | INST=02112623 | cache_state=0
...
Fetched 16 instructions, stopping.
```

A cache_state of:  
- `0` → hit  
- `1` → miss triggering burst fetch  

The test finishes automatically.

---

### 1. Required Tools
- iVerilog 11.0 or newer  
- GTKWave (optional)

### 2. Required Files
All six files listed in file structure must exist.  
`program.hex` must contain the instruction memory contents.

### 3. Steps to Recreate System Behavior
1. Clone the repository.  
2. Navigate to this directory.  
3. Compile using the provided command.  
4. Run the simulation.  
5. Confirm that:  
   - The PC increments by 4 each instruction  
   - Cache hits return instructions immediately  
   - Cache misses cause an 8-word burst fetch  
   - After filling, subsequent accesses to the same block hit  

### 4. How to Modify or Extend
- Changing number of cache lines requires parameter edits in `cache.v`.  
- Replace `program.hex` to simulate different programs.  
- Interface FSM can be extended for pipeline flushing or branch prediction interaction.  

These instructions ensure the grader or any student can fully reproduce instruction cache functionality.

---
