module InstructionSRAM (
    input clk,       // Clock
    input wr_en,     // Write Enable
    input [31:0] addr, // Address
    input [31:0] data_in, // Data Input
    output [31:0] data_out  // Data Output
);

// Adjust with Jikun decoder part
parameter INSTRUCTION_MEMORY_SIZE = 1024; 
parameter REGION1_SIZE = 256; 
parameter REGION2_SIZE = 256; 
parameter REGION3_SIZE = 512; 

reg [31:0] memory [INSTRUCTION_MEMORY_SIZE - 1:0]; // 32-bit wide instruction memory

always @(posedge clk) begin
    if (wr_en) begin
        // Write to instruction memory
        if (addr < REGION1_SIZE) begin
            memory[addr] <= data_in; // Region 1
        end else if (addr < REGION1_SIZE + REGION2_SIZE) begin
            memory[REGION1_SIZE + addr] <= data_in; // Region 2
        end else if (addr < INSTRUCTION_MEMORY_SIZE) begin
            memory[REGION1_SIZE + REGION2_SIZE + addr] <= data_in; // Region 3
        end
    end
end

always @(*) begin
    // Read from instruction memory
    if (addr < REGION1_SIZE) begin
        data_out = memory[addr]; // Region 1
    end else if (addr < REGION1_SIZE + REGION2_SIZE) begin
        data_out = memory[REGION1_SIZE + addr]; // Region 2
    end else if (addr < INSTRUCTION_MEMORY_SIZE) begin
        data_out = memory[REGION1_SIZE + REGION2_SIZE + addr]; // Region 3
    end else begin
        // If address is outside of the instruction memory
        data_out = 32'b0;
    end
end

endmodule
