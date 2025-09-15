module dataMem (
    input wire clk,
    input wire reset, 
    input wire [31:0] address_i,
    input wire [31:0] storeData,
    input wire load_en,
    input wire store_en,
    output wire [31:0] loadData_w
);
    reg [31:0] DMEM [0:1023];
    reg [31:0] loadData_reg;
    // The integer 'i' must be declared here, outside of the 'always' block.
    integer i;

    assign loadData_w = loadData_reg;

    always @(posedge clk) begin
        if (reset) begin
            // On reset, clear memory. This is for simulation only.
            for (i=0; i<1024; i=i+1) begin
                DMEM[i] <= 32'b0;
            end
        end else if (load_en) begin
            // Load instruction
            loadData_reg <= DMEM[address_i[11:2]];
        end else if (store_en) begin
            // Store instruction
            DMEM[address_i[11:2]] <= storeData;
        end
    end
endmodule
