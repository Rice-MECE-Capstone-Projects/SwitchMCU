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
    
    // Wire for Combinational Read Access (Required for proper BRAM inference)
    wire [31:0] read_data_comb; 
    
    // Register for Pipelined Output (MEM/WB boundary)
    reg [31:0] loadData_reg;
    
    integer i;

    // 1. COMBINATIONAL READ ACCESS
    // Data is read combinatorially based on the address (which is the registered ALU result)
    assign read_data_comb = DMEM[address_i[11:2]];

    // 2. REGISTERED OUTPUT
    assign loadData_w = loadData_reg; 

    always @(posedge clk) begin
        if (reset) begin
            // Reset logic
            for (i=0; i<1024; i=i+1) begin
                DMEM[i] <= 32'b0;
            end
            loadData_reg <= 32'b0;
        end else begin
            
            // Synchronous Write (for Store instructions)
            if (store_en) begin
                DMEM[address_i[11:2]] <= storeData;
            end
            
            // Synchronous Register of Read Data (for Load instructions)
            if (load_en) begin
                // Register the data read *combinatorially* on the positive edge
                loadData_reg <= read_data_comb; 
            end
        end
    end
endmodule