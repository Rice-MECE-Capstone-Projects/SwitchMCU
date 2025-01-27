// Definition of memory parameters
`define MEM_ADDR_WIDTH 6                  // Width of the memory address bus
`define MEM_DEPTH 64                      // Total number of memory locations
`define MEM_DATA_WIDTH 16                 // Width of the data bus

// Module for a dual-port memory array
module memory_array (
    input clk_write_logic,                // Clock input for write operations
    input clk_read_logic,                 // Clock input for read operations
    input [`MEM_ADDR_WIDTH-1:0] w_addr,   // Write address bus
    input [`MEM_ADDR_WIDTH-1:0] r_addr,   // Read address bus
    input w_enable,                       // Write enable signal
    input r_enable,                       // Read enable signal
    input [`MEM_DATA_WIDTH-1:0] w_data,   // Data input for write operations
    input mem_scan_in0,                   // Scan input for test mode
    input mem_scan_en,                    // Enable signal for scan test mode
    input mem_test_mode,                  // Test mode signal
    output reg [`MEM_DATA_WIDTH-1:0] r_data, // Data output for read operations
    output mem_scan_out0                  // Scan output for test mode
);

// Declaration of the memory array
reg [`MEM_DATA_WIDTH-1:0] memory [0:`MEM_DEPTH-1]; // Define the memory with the specified depth and data width

// Process for handling write operations synchronized to the write clock
always @(posedge clk_write_logic) begin
    if(w_enable)                           // Check if the write enable signal is asserted
        memory[w_addr] <= w_data;          // Write the input data to the memory at the specified address
end

// Process for handling read operations synchronized to the read clock
always @(posedge clk_read_logic) begin
    if(r_enable)                           // Check if the read enable signal is asserted
        r_data <= memory[r_addr];          // Read data from the memory at the specified address and output it
end

endmodule
