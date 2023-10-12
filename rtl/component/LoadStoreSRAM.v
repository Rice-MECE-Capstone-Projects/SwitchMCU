module LoadStoreSRAM (
    input clk,      // Clock
    input wr_en,    // Write Enable for Store
    input ld_en,    // Read Enable for Load
    input [31:0] addr, // Address
    input [31:0] data_in, // Data Input
    // Memory operation 2'b01 for Load, 2'b10 for Store
    input [1:0] mem_op,  
    output reg [31:0] data_out,  // Data Output
    input reset  // Reset signal
);

reg [31:0] sram [1023:0]; // 32-bit wide, 1024 deep SRAM

always @(posedge clk or posedge reset) begin
    if (reset) begin
        // Reset memory to all zeros
        for (int i = 0; i < 1024; i = i + 1) begin
            sram[i] <= 32'b0;
        end
    end else begin
        if (mem_op == 2'b01 && ld_en) begin
            // Load operation (LW)
            data_out <= sram[addr];
        end else if (mem_op == 2'b10 && wr_en) begin
            // Store operation (SW)
            sram[addr] <= data_in;
        end
    end
end

endmodule
