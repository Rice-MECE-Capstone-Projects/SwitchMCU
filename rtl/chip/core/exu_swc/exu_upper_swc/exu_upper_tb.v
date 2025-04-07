//`timescale 1ns / 1ps
module exu_upper_tb;
	reg                 hclk;
    reg                 hrstn;
    reg     [3:0]       cycle_cnt;
    reg                 dec_upper_en;
    reg                 dec_lui;
    reg                 dec_auipc;
    reg     [19:0]      dec_imm_type_u;
    reg     [4:0]       dec_rd;
    reg     [31:0]      pc;
    wire    [4:0]       reg_waddr;
    wire                reg_wen;
    wire    [31:0]      reg_wdata;
    reg                 exu_stall;
	/* wire [4:0]  dbg_mid_reg_waddr;
    wire        dbg_mid_reg_wen;
    wire [31:0] dbg_mid_reg_wdata; */
	
exu_upper_en uut (
    .hclk(hclk),
    .hrstn(hrstn),
    .cycle_cnt(cycle_cnt),
    .dec_upper_en(dec_upper_en),
    .dec_lui(dec_lui),
    .dec_auipc(dec_auipc),
    .dec_imm_type_u(dec_imm_type_u),
    .dec_rd(dec_rd),
    .pc(pc),
    .reg_waddr(reg_waddr),
    .reg_wen(reg_wen),
    .reg_wdata(reg_wdata),
    .exu_stall(exu_stall)
	/* .dbg_mid_reg_waddr(dbg_mid_reg_waddr),
    .dbg_mid_reg_wen(dbg_mid_reg_wen),
    .dbg_mid_reg_wdata(dbg_mid_reg_wdata) */
);
	
always #5  hclk = !hclk ;

initial begin
    hrstn = 0;
    cycle_cnt = 0;
    dec_upper_en = 0;
    dec_lui = 0;
    dec_auipc = 0;
    dec_imm_type_u = 0;
    dec_rd = 0;
    pc = 0;
    exu_stall = 0;
	
	#10 hrstn = 1; // reset
	#10;//LUI testcase
    dec_upper_en = 1;
    dec_lui = 1;
    dec_auipc = 0;
    dec_imm_type_u = 20'hABCDE;
    dec_rd = 5'd10;
    cycle_cnt = 1;
    #10;
    cycle_cnt = 2;
    #10;
    dec_upper_en = 0;
    dec_lui = 0;
	
	#10;//AUIPC testcase
    dec_upper_en = 1;
    dec_lui = 0;
    dec_auipc = 1;
    dec_imm_type_u = 20'h12345;
    dec_rd = 5'd15;
    pc = 32'h1000;
    cycle_cnt = 1;   
    #10;
    cycle_cnt = 2;
    #10;
    dec_upper_en = 0;
    dec_auipc = 0;
	
	#10;//no upper immediate instruction
    dec_upper_en = 0;
    cycle_cnt = 1;
	
	#10;// stall condition
    exu_stall = 1;
    #10;
    exu_stall = 0;
    #20 $finish;
end

    
initial begin
  $dumpfile("exu_upper_tb.vcd");
  $dumpvars(0, exu_upper_tb);
end

endmodule
