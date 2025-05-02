Objective:
--------------------------------------------------------------------------------------------------------------------------------------------------
The goal of this testbench is to verify the functionality of a Verilog-based direct-mapped cache module by simulating a sequence of read and write operations from a CPU. It ensures correct handling of cache hits, misses, data alignment, byte/halfword/word access, and memory interaction.

Cache Testbench Overview:
--
Clock & Reset Generation:

A 10ps clock cycle is generated using an always #5 clk = ~clk statement.

Reset is asserted for 10ps at the beginning of the simulation to initialize the cache.

Main Signals Driven by Testbench:

cpu_addr, cpu_wdata, data_req, data_we, and data_be simulate CPU memory access behavior.
mem_rdata_array and mem_ready simulate main memory responses.
The memory block always returns a fixed 256-bit block or a fixed 32-bit word to simplify validation.

Testing Methodology:
--
Each test case is executed in sequence with enough delay between requests to allow the cache to complete each transaction. The testbench manually drives the memory ready signal when a miss occurs.

Key features tested:

Cache Miss Handling:

First access to a new address fetches the corresponding block from memory. Miss handling is verified for different access types (load/store, byte/half/word).

Cache Hit Behavior:

Repeat access to an address already in cache returns data without triggering memory reads.

Store Policy:

Both hit and miss scenarios are tested for store operations, ensuring correct write-back behavior.

Different Access Widths:

Accesses using byte, halfword, and word widths are tested using the data_be signal.

Address Alignment:

Addresses with different alignments are used to verify byte/half/word addressing inside a cache block.

Tasks Used
--
main_memory(): Simulates a memory response by setting mem_ready high and returning a pre-defined block.

print_data_table(): Prints the internal state of the cache (data_table) to monitor updates in each cache set after each access.

