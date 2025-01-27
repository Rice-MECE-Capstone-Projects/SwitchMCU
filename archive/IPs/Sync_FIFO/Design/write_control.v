// Definition of FIFO parameters
`define FIFO_DEPTH 64                   // The depth of the FIFO buffer
`define FIFO_MEM_ADDR_WIDTH 6           // The width of the memory address for the FIFO
`define FIFO_HALFFULL 4                 // Threshold for FIFO half-full status

// Module for write control logic in a FIFO
module write_control (
    reset,                              // Input: Active high reset signal
    clk_write_logic,                    // Input: Clock signal for write logic
    read_pointer,                       // Input: Current read pointer
    write_request,                      // Input: Write request signal
    w_enable,                           // Output: Write enable signal
    write_ack,                          // Output: Acknowledgment signal for successful write
    write_pointer,                      // Output: Current write pointer
    full_fifo_status,                   // Output: Indicates FIFO is full
    halffull_fifo_status,               // Output: Indicates FIFO is half-full
    wc_scan_in0,                        // Input: Scan test data input
    wc_scan_en,                         // Input: Scan test mode enable
    wc_test_mode,                       // Input: Test mode selector
    wc_scan_out0,                       // Output: Scan test data output
    mem_addr_read                       // Output: Memory address to read from
);

// Define input and output ports
input reset;
input clk_write_logic;
input [`FIFO_MEM_ADDR_WIDTH:0] read_pointer;
input write_request;
input wc_scan_in0, wc_scan_en, wc_test_mode;
output w_enable;
output reg write_ack;
output reg [`FIFO_MEM_ADDR_WIDTH:0] write_pointer;
output full_fifo_status;
output reg halffull_fifo_status;
output wc_scan_out0;
output wire [`FIFO_MEM_ADDR_WIDTH-1:0] mem_addr_read;

// Internal wires for memory address computation
wire [`FIFO_MEM_ADDR_WIDTH-1:0] mem_addr_write;

// Assign memory addresses for read and write pointers
assign mem_addr_read = read_pointer[`FIFO_MEM_ADDR_WIDTH-1:0];
assign mem_addr_write = write_pointer[`FIFO_MEM_ADDR_WIDTH-1:0];

// Logic to determine if the FIFO is full
assign full_fifo_status = ((mem_addr_write == `FIFO_DEPTH - 1) && (read_pointer[`FIFO_MEM_ADDR_WIDTH] ^ write_pointer[`FIFO_MEM_ADDR_WIDTH]));

// Write enable logic: active if there's a write request and the FIFO is not full
assign w_enable = (write_request && (full_fifo_status == 0)) ? 1 : 0;

// Always block for handling write operations
always@(posedge clk_write_logic or posedge reset) begin
    if (reset) begin
        write_pointer <= 0;             // Reset write pointer on reset
        write_ack <= 0;                 // Reset write acknowledgment signal on reset
    end 
    else begin
        // Check if FIFO is half full and update status
        halffull_fifo_status = ((`FIFO_DEPTH - mem_addr_write) <= (`FIFO_HALFFULL)) ? 1 : 0;
        if (w_enable) begin
            write_ack <= 1;             // Set write acknowledgment if write enabled
            write_pointer <= write_pointer + 1'b1;  // Increment write pointer if write occurs
        end else 
            write_ack <= 0;             // Clear write acknowledgment if write not enabled
    end
end


endmodule
