module exu_imm_tb;

// general signals
reg                       hclk                ;
reg                       hrstn               ;
// control signals
reg           [3:0]       cycle_cnt           ;
// signals from deccoder
reg                       dec_branch_en       ;
reg                       dec_addi            ;
reg                       dec_slti            ;
reg                       dec_sltiu           ;
reg                       dec_xori            ;
reg                       dec_ori             ;
reg                       dec_andi            ;
reg                       dec_slli            ;
reg                       dec_srli            ;
reg                       dec_srai            ;
reg           [11:0]      dec_imm_type_i      ;
reg           [4:0]       dec_rd              ;
reg           [4:0]       dec_rs1             ;
// PC signals
reg           [31:0]      pc                  ;
// regfile signals
reg           [4:0]       reg_waddr           ;
reg                       reg_wen             ;
reg           [31:0]      reg_wdata           ;
reg           [4:0]       reg_raddr_1         ;
reg                       reg_ren_1           ;
reg           [31:0]      reg_rdata_1         ;                	 

ex_imm_en exu_imm_inst(
  .hclk			(hclk				),
  .hrstn		(hrstn				),
  .cycle_cnt		(cycle_cnt			),
  .dec_branch_en	(dec_branch_en			),
  .dec_addi		(dec_addi			),
  .dec_slti		(dec_slti			),
  .dec_sltiu		(dec_sltiu			),
  .dec_xori		(dec_xori			),
  .dec_ori		(dec_ori			),
  .dec_andi		(dec_andi			),
  .dec_slli		(dec_slli			),
  .dec_srli		(dec_srli			),
  .dec_srai		(dec_srai			),
  .dec_imm_type_i	(dec_imm_type_i			),
  .dec_rd		(dec_rd				),
  .dec_rs1		(dec_rs1			),
  .pc			(pc				),
  .reg_waddr		(reg_waddr			),
  .reg_wen		(reg_wen			),
  .reg_wdata		(reg_wdata			),
  .reg_raddr_1		(reg_raddr_1			),
  .reg_ren_1		(reg_ren_1			),
  .reg_rdata_1		(reg_rdata_1			)
);

always #5  hclk = !hclk ;


// copied from the core top
always@(posedge hclk) begin
  if(!hrstn)
      cycle_cnt <= 0;
  else if(cycle_cnt == 4)
      cycle_cnt <= 1;
  else
      cycle_cnt <= cycle_cnt + 1;
end


initial begin
  hrstn = 0;
  reg_rdata_1 = 25;
  dec_imm_type_i = 10;
  dec_addi = 1;
  dec_branch_en = 1;
  #20;
  hrstn = 1;
  #10000;
  $finish;
end

initial begin
  $dumpfile("exu_imm_tb.vcd");
  $dumpvars(0, exu_imm_tb);
end

endmodule
