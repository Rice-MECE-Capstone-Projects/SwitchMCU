module exu_reg_tb;

// general signals
reg                       hclk                ;
reg                       hrstn               ;
reg           [3:0]       cycle_cnt           ;
// signals from dec 
reg                       en                  ;
reg                       dec_add             ;
reg                       dec_sub             ;
reg                       dec_sll             ;
reg                       dec_slt             ;
reg                       dec_sltu            ;
reg                       dec_xor             ;
reg                       dec_srl             ;
reg                       dec_sra             ;
reg                       dec_or              ;
reg                       dec_and             ;
reg           [4:0]       dec_rs1             ;
reg           [4:0]       dec_rs2             ;
reg           [4:0]       dec_rd              ; 
// PC
reg           [31:0]      pc                  ;
// regfile write port
reg           [4:0]       reg_waddr           ;
reg                       reg_wen             ;
reg           [31:0]      reg_wdata           ;
reg           [31:0]      reg_rdata_1         ;
reg           [4:0]       reg_raddr_1         ;
reg                       reg_ren_1           ;
reg           [31:0]      reg_rdata_2         ;
reg           [4:0]       reg_raddr_2         ;
reg                       reg_ren_2           ;
// exu_stall
reg                       exu_stall           ;

exu_reg_swc exu_reg_inst (
  .hclk			(hclk                           ),
  .hrstn		(hrstn                          ),
  .cycle_cnt		(cycle_cnt			),
  .en			(en				),
  .dec_add		(dec_add			),
  .dec_sub		(dec_sub			),
  .dec_sll		(dec_sll			),
  .dec_slt		(dec_slt			),
  .dec_sltu		(dec_sltu			),
  .dec_xor		(dec_xor			),
  .dec_srl		(dec_srl			),
  .dec_sra		(dec_sra			),
  .dec_or		(dec_or				),
  .dec_and		(dec_and			),
  .dec_rs1		(dec_rs1 			),
  .dec_rs2		(dec_rs2			),
  .dec_rd		(dec_rd 			),
  .pc			(pc				),
  .reg_waddr		(reg_waddr			),
  .reg_wen		(reg_wen			),
  .reg_wdata		(reg_wdata			),
  .reg_rdata_1		(reg_rdata_1			),
  .reg_raddr_1		(reg_raddr_1			),
  .reg_ren_1		(reg_ren_1			),
  .reg_rdata_2		(reg_rdata_2			),
  .reg_raddr_2		(reg_raddr_2			),
  .reg_ren_2		(reg_ren_2			),
  .exu_stall		(exu_stall			)
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
  en = 1;
  dec_add = 1;
  dec_sub = 0;
  dec_sll = 0;
  dec_slt = 0;
  dec_sltu = 0;
  dec_xor = 0;
  dec_srl = 0;
  dec_sra = 0;
  dec_or = 0;
  dec_and = 0;
  dec_rs1 = 2;
  dec_rs2 = 4;
  reg_rdata_1 = 5;
  reg_rdata_2 = 3;
  dec_rd = 5;
  #20;
  hrstn = 1;
  #100;
  dec_add = 0;
  dec_sub = 1;
  #10000;
  $finish;
end

initial begin
  $dumpfile("exu_reg_tb.vcd");
  $dumpvars(0, exu_reg_tb);
end

endmodule
