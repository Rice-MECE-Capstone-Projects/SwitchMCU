// Define FIFO parameters
`define FIFO_DEPTH 64                       // Total number of slots in the FIFO
`define FIFO_MEM_ADDR_WIDTH 6               // Number of bits needed to address FIFO slots
`define FIFO_HALFEMPTY 4                    // Threshold below which FIFO is considered half empty

// Module for managing the read operations of a synchronous FIFO
module read_control (
    reset,                                  // Input: System reset, active high
    clk_read_logic,                         // Input: Clock signal for read logic synchronization
    write_pointer,                          // Input: Current position of the write pointer
    read_request,                           // Input: Signal requesting a read operation
    r_enable,                               // Output: Enables the read operation when asserted
    read_ack,                               // Output: Acknowledges a successful read
    read_pointer,                           // Output: Current position of the read pointer
    empty_fifo_status,                      // Output: Indicates if the FIFO is empty
    halfempty_fifo_status,                  // Output: Indicates if the FIFO is below half-empty threshold
    rc_scan_in0,                            // Input: Test mode scan data input
    rc_scan_en,                             // Input: Enables scan test mode
    rc_test_mode,                           // Input: Selects test mode operation
    rc_scan_out0                            // Output: Test mode scan data output
);

input reset;
input clk_read_logic;
input [`FIFO_MEM_ADDR_WIDTH:0] write_pointer;
input read_request;
input rc_scan_in0, rc_scan_en, rc_test_mode;
output r_enable;
output reg read_ack;
output reg [`FIFO_MEM_ADDR_WIDTH:0] read_pointer;
output empty_fifo_status;
output reg halfempty_fifo_status;
output rc_scan_out0;

wire [`FIFO_MEM_ADDR_WIDTH-1:0] mem_addr_read;
wire [`FIFO_MEM_ADDR_WIDTH-1:0] mem_addr_write;

// Compute read and write memory addresses based on current pointers
assign mem_addr_read  = read_pointer[`FIFO_MEM_ADDR_WIDTH-1:0];
assign mem_addr_write = write_pointer[`FIFO_MEM_ADDR_WIDTH-1:0];

// Check if FIFO is empty by comparing read and write pointers
assign empty_fifo_status = ((mem_addr_read == 0) && (mem_addr_write == 0) && 
                            read_pointer[`FIFO_MEM_ADDR_WIDTH] == write_pointer[`FIFO_MEM_ADDR_WIDTH]) ? 1 : 0;

// Enable read operation if there is a read request and FIFO is not empty
assign r_enable = (read_request && (empty_fifo_status == 0)) ? 1 : 0;

// Process read logic synchronized to the read clock or system reset
always@(posedge clk_read_logic or posedge reset) begin
    if(reset)  begin
        read_pointer <= 0;                   // Reset the read pointer
        read_ack <= 0;                       // Clear the read acknowledge signal
    end
    else begin
        // Update half-empty status based on the count of unread entries
        halfempty_fifo_status = (mem_addr_read <= `FIFO_HALFEMPTY) ? 1 : 0;
        if(r_enable)  begin
            read_ack <= 1;                    // Set read acknowledge if enabled
            read_pointer <= read_pointer + 1'b1;  // Increment read pointer if read is enabled
        end
        else
            read_ack <= 0;                    // Clear read acknowledge if read is not enabled
    end
end
endmodule
