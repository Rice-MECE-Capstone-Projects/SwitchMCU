Features:
--
This cache design implements a 2KB direct-mapped cache with a total of 64 cache lines, where each block is 32 bytes (8 words) in size. It supports byte-, half-word-, and word-addressable memory access, following a write-through and no-write-allocate policy for store instructions. A separate finite state machine (FSM) handles cache misses and write-backs. Internally, the cache contains built-in tag, valid, and data arrays. It is designed to be compatible with RISC-V-like memory semantics.

Architecture:
--
Cache Size: 2048 bytes
Block Size: 32 bytes (8 words of 4 bytes each)
Number of Lines: 64 (2048 bytes / 32 bytes per line)
The 32-bit CPU address is divided as follows:
Tag: 21 bits (used to identify which memory block is stored in the cache line)
Index: 6 bits (used to select one of the 64 cache lines)
Word Offset: 3 bits (selects one of 8 words within the cache block)
Byte Offset: 2 bits (selects one of 4 bytes within a word)

Interface:
--
Inputs from the CPU:
cpu_addr (32-bit): Address from the CPU
cpu_wdata (32-bit): Data to be written by the CPU
data_req (1-bit): Indicates that the CPU is requesting a memory access
data_we (1-bit): Write enable signal
data_be (4-bit): Byte enable signal, also encodes instruction type
clk, reset (1-bit each): Standard clock and reset signals

Outputs to the CPU:
cpu_rdata (32-bit): Data read from cache to the CPU
data_rvalid (1-bit): Indicates that valid read data is available
data_gnt (1-bit): Indicates the cache is ready to handle the request
cpu_stall (1-bit): Instructs the CPU to stall while the cache is busy

Memory Interface Signals:
mem_addr_block (32-bit): Aligned base address of the cache block to read/write
mem_addr (32-bit): Exact address for memory writes on store misses
mem_read (1-bit): Enables a read request to memory
mem_write (1-bit): Enables a write request to memory
mem_wdata_block (256-bit): Entire 32-byte cache line written to memory during write-back
miss_mem_wdata (32-bit): A single word to be written during a store miss
mem_rdata_array (256-bit): Data returned from memory as a 32-byte block
mem_ready (1-bit): Indicates memory access is complete
state (3-bit): Current state of the FSM (useful for debugging)

FSM States:
--
The FSM controlling miss handling and write-back uses five distinct states:
idle_state (000): Idle or ready state, waiting for CPU requests
fetch_mem_state (001): Reads an entire cache block from memory due to a miss
write_mem_state (010): Writes back a modified cache block to memory
miss_write_mem_state (011): Directly writes to memory during a store miss
wait_store_state (100): Waits for store operation to complete in memory

Cache Hit vs Miss Logic
--
On a Cache Hit:
For loads: Data is directly read from the corresponding cache line.
For stores: Data is written to both the cache and memory (write-through).

On a Cache Miss:
--
For loads: The cache issues a memory read to fetch the entire block, which is then stored in the appropriate cache line.
For stores: The data is written directly to memory without allocating a new cache block (no-write-allocate).
