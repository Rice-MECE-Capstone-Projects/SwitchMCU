//`timescale 1ns / 1ps

module exu_store_tb;
    // Declare inputs as reg and outputs as wire
    reg         hclk;
    reg         hrstn;
    reg  [3:0]  cycle_cnt;
    reg         dec_store_en;
    reg         dec_sb;
    reg         dec_sh;
    reg         dec_sw;
    reg  [11:0] dec_imm_type_s;
    reg  [4:0]  dec_rs1;
    reg  [4:0]  dec_rs2;
    reg  [31:0] reg_rdata_1;
    reg  [31:0] reg_rdata_2;
    reg         exu_stall;

    wire [31:0] exu_store_addr;
    wire [31:0] exu_store_data;
    wire        exu_store_en;
    wire [1:0]  exu_store_size;

    // Instantiate the exu_store_swc module
    exu_store_swc uut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .dec_store_en(dec_store_en),
        .dec_sb(dec_sb),
        .dec_sh(dec_sh),
        .dec_sw(dec_sw),
        .dec_imm_type_s(dec_imm_type_s),
        .dec_rs1(dec_rs1),
        .dec_rs2(dec_rs2),
        .exu_store_addr(exu_store_addr),
        .exu_store_data(exu_store_data),
        .exu_store_en(exu_store_en),
        .exu_store_size(exu_store_size),
        .reg_raddr_1(),
        .reg_ren_1(),
        .reg_rdata_1(reg_rdata_1),
        .reg_raddr_2(),
        .reg_ren_2(),
        .reg_rdata_2(reg_rdata_2),
        .exu_stall(exu_stall)
    );

    // Clock generation (toggle clock every 5 time units)
    initial begin
        hclk = 0;
        forever #5 hclk = ~hclk;
    end

    // Stimulus
    initial begin
        // Initialize inputs
        hrstn = 0;           // Apply reset
        cycle_cnt = 0;
        dec_store_en = 0;
        dec_sb = 0;
        dec_sh = 0;
        dec_sw = 0;
        dec_imm_type_s = 0;
        dec_rs1 = 0;
        dec_rs2 = 0;
        reg_rdata_1 = 0;
        reg_rdata_2 = 0;
        exu_stall = 0;

        // Release reset after 20 time units
        #20 hrstn = 1;

        // Test Case: Store Word Operation (Monitoring each cycle)
        @(posedge hclk);
        dec_store_en = 1;
        dec_sw = 1;          // Store Word enabled
        dec_imm_type_s = 12'hFF0;  // Immediate value for address calculation
        dec_rs1 = 5'd1;           // Base register
        dec_rs2 = 5'd2;           // Data register
        reg_rdata_1 = 32'h1000;   // Base address (in register 1)
        reg_rdata_2 = 32'h12345678; // Data to store (in register 2)

        // Cycle 1: Setup addresses and read enables
        cycle_cnt = 1;
        @(posedge hclk);
        $display("Cycle 1: reg_raddr_1 = %d, reg_raddr_2 = %d, reg_ren_1 = %b, reg_ren_2 = %b", 
                  uut.mid_reg_raddr_1, uut.mid_reg_raddr_2, uut.mid_reg_ren_1, uut.mid_reg_ren_2);

        // Cycle 2: No explicit operation
        cycle_cnt = 2;
        @(posedge hclk);
        $display("Cycle 2: Waiting... (No significant operation)");

        // Cycle 3: Address generation and data preparation
        cycle_cnt = 3;
        @(posedge hclk);
        $display("Cycle 3: Store Address (calculated) = %h, Store Data = %h", 
                  uut.exu_store_addr_buff, uut.exu_store_data_buff);

        // Cycle 4: Final store enable, size, and output assignment
        cycle_cnt = 4;
        @(posedge hclk);
        $display("Cycle 4: Store Address = %h, Store Data = %h, Store Enable = %b, Store Size = %b", 
                  exu_store_addr, exu_store_data, exu_store_en, exu_store_size);

        // Finish simulation
        #50 $finish;
    end


initial begin
  $dumpfile("exu_store_tb.vcd");
  $dumpvars(0, exu_store_tb);
end

endmodule
