# Data Cache + Data Memory + Interface
Fall 2025 – Capstone Project

## Abstract
This directory contains the implementation of the data cache subsystem used to support memory operations (load/store) inside the RISC-V core. The work includes a direct-mapped data cache, a standalone data memory, and a custom interface module designed to bridge differences in data width, timing, and handshake semantics between cache and memory.

The focus of this development was to ensure correct handling of cache hits, misses, write-through memory updates, and 8-word burst transfers required during miss servicing. All modules were verified individually and then integrated together using a full-system testbench.

## File Structure
```
dcache_datamem_interface/
├── cache.v
├── dataMem.v
├── data_cache_interface.v
├── data_cache_system_tb.v
├── memory_dump.hex
```

## Module Overview

### cache.v
- Direct-mapped 2 KB cache
- 64 cache lines, 32‑byte cache block
- Supports LB, LH, LW, LBU, LHU, SB, SH, SW
- Implements write‑through and no‑write‑allocate policies
- Internal tag, valid, and data arrays
- Includes FSM for:
  - hit detection
  - miss handling
  - 8‑word burst fill

### dataMem.v
- 32‑bit word‑addressable memory
- Supports byte, half‑word, and word load/store
- Memory depth defined by program
- Used as backing memory for cache

### data_cache_interface.v
- Bridges cache (32‑bit × 8‑word burst) and memory (32‑bit single word)
- 5‑state FSM:
  - IDLE
  - READ_BURST
  - WRITE_THROUGH
  - WAIT_MEMORY
  - DONE
- Handles handshake and stalls

### data_cache_system_tb.v
- Full testbench for data cache + interface + memory
- Tests:
  - hit
  - miss
  - write‑through
  - multiple sequential accesses
  - burst fetch behavior

## How to Run Simulation (iVerilog)

### 1. Navigate into folder
```sh
cd dcache_datamem_interface
```

### 2. Compile
```sh
iverilog -g2012 -o dcache_sim \
    data_cache_system_tb.v cache.v dataMem.v data_cache_interface.v
```

### 3. Run
```sh
vvp dcache_sim
```

### 4. (Optional) Open waveform
```sh
gtkwave dcache_tb.vcd
```

---

## Expected Output
A correct run prints:  
- Cache hit/miss events  
- Burst transfer completion  
- Final memory writes for store instructions  

The simulation terminates when all testbench requests complete.

---
### 1. Required Tools
- iVerilog 11.0 or newer  
- GTKWave (optional, for viewing waveforms)

### 2. Required Files
All files listed in the file structure must remain in the same directory.  
`memory_dump.hex` must match the expected address layout for dataMem.v.

### 3. How to Reproduce Functional Behavior
1. Clone the repository.  
2. Navigate to `dcache_datamem_interface/`.  
3. Compile using the commands above.  
4. Run the simulation.  
5. Verify that:  
   - Cache hits return data in 1 cycle  
   - Cache misses trigger 8-word burst reads  
   - Store instructions generate write-through operations  
   - No deadlocks occur in interface FSM  

### 4. How to Modify or Extend
- Changing block size or line count requires updating `cache.v` parameters.  
- To test new memory patterns, regenerate `memory_dump.hex`.  
- The interface FSM can be extended to support write-allocate if needed.  

These steps ensure that anyone with access to the repo can fully reproduce the data-cache subsystem.

---
