Features:
2KB direct-mapped cache with 64 lines and 32-byte block size
Byte-, half-word-, and word-addressable
Write-through and no-write-allocate policy
Separate FSM for miss handling and write-back
Built-in tag, valid, and data arrays
Compatible with RISC-V-like memory semantics

Architecture:
Cache Size: 2048 Bytes
Block Size: 32 Bytes (8 Words)
Lines: 64 (2KB / 32B)

Address Breakdown:
Tag: 21 bits
Index: 6 bits
Word Offset: 3 bits
Byte Offset: 2 bits

Interface:
1. Inputs (CPU-side)
Signal	    Width	Description
cpu_addr	32	    Address from CPU
cpu_wdata	32	    Write data from CPU
data_req	1	    Data request signal
data_we	    1	    Write enable
data_be	    4	    Byte enable / instruction type
clk, reset	1	    Clock and reset

2. Outputs (CPU-side)
Signal	    Width	Description
cpu_rdata	32	    Read data to CPU
data_rvalid	1	    Read valid
data_gnt	1	    Grant signal for request
cpu_stall	1	    Stall signal to CPU

Memory Interface:
Signal	        Width	Description
mem_addr_block	32	    Base address of the cache block
mem_addr	    32	    Exact address (for store)
mem_read	    1	    Memory read enable
mem_write	    1	    Memory write enable
mem_wdata_block	256	    Entire cache line to memory
miss_mem_wdata	32	    Word-sized data for cache miss store
mem_rdata_array	256	    Data block from memory
mem_ready	    1	    Ready signal from memory
state	        3	    Exposed FSM state

FSM States
State	                Binary	Description
idle_state	            000	    Idle/ready to serve CPU
fetch_mem_state     	001	    Read data block from memory
write_mem_state	        010	    Write back updated block to memory
miss_write_mem_state	011	    Store operation on a cache miss
wait_store_state	    100 	Wait state for memory store complete

Cache Hit vs Miss Logic
On a hit, data is directly read or updated from the cache.

On a miss:
For loads, a memory read is triggered and the line is filled.
For stores, a direct write is issued to memory (no-write-allocate policy).