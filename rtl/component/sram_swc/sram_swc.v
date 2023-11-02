module sram_swc 
#(
    parameter DATA_WIDTH,  // Width of the data
    parameter ADDR_WIDTH   // Number of bits for the address bus
)
(
    input wire clk,                          
    input wire we,                        // Write Enable - Corresponds to HWRITE
    input wire [ADDR_WIDTH-1:0] addr,     // Read/Write Address - Corresponds to HADDR
    input wire [DATA_WIDTH-1:0] wdata,    // Write Data - Corresponds to HWDATA
    output reg [DATA_WIDTH-1:0] rdata     // Read Data - Corresponds to HRDATA
);

    // Register Array
    reg [DATA_WIDTH-1:0] mem_array[(2**ADDR_WIDTH)-1:0];

    // Synchronous Behavior
    always @(posedge clk) begin
      case (we)
        1'b0: rdata <= mem_array[addr];
        1'b1: mem_array[addr] <= wdata;
      endcase
    end

endmodule
