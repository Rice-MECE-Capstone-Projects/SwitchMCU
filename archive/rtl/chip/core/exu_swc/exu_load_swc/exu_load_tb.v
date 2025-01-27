module exu_load_tb;

// general signals
reg                       hclk                ;
reg                       hrstn               ;
// control signals
reg           [3:0]       cycle_cnt           ;
reg                      ifu_dec_stall       ;
// signals from dec 
reg                       dec_load_en         ;
reg                       dec_lb              ;
reg                       dec_lh              ;
reg                       dec_lw              ;
reg                       dec_lbu             ;
reg                       dec_lhu             ;
reg           [11:0]      dec_imm_type_i      ;
reg           [4:0]       dec_rd              ;
reg           [4:0]       dec_rs1             ;
// signals to mau
reg      [4:0]       exu_load_rd         ;
reg      [31:0]      exu_load_base_addr  ;
reg      [31:0]      exu_load_offset     ;
reg                  exu_load_sext       ;
reg      [1:0]       exu_load_size       ;
reg                  exu_load_en         ;
// regfile signals
reg           [4:0]       reg_raddr_1         ;
reg                       reg_ren_1           ;
reg           [31:0]      reg_rdata_1         ;

exu_load_swc exu_load_inst (
  .hclk			(hclk                           ),
  .hrstn		(hrstn                          ),
  .cycle_cnt		(cycle_cnt			),
  .ifu_dec_stall	(ifu_dec_stall			),
  .dec_load_en		(dec_load_en			),
  .dec_lb		(dec_lb				),
  .dec_lh		(dec_lh				),
  .dec_lw		(dec_lw				),
  .dec_lbu		(dec_lbu			),
  .dec_lhu		(dec_lhu 			),
  .dec_imm_type_i	(dec_imm_type_i			),
  .dec_rd		(dec_rd				),
  .dec_rs1		(dec_rs1			),
  .exu_load_rd		(exu_load_rd			),
  .exu_load_base_addr	(exu_load_base_addr		),
  .exu_load_offset	(exu_load_offset		),
  .exu_load_sext	(exu_load_sext			),
  .exu_load_size	(exu_load_size			),
  .exu_load_en		(exu_load_en			),
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
  dec_load_en = 1;
  dec_lb = 1;
  dec_lh = 0;
  dec_lw = 0;
  dec_lbu = 0;
  dec_lhu = 0;
  dec_imm_type_i = 10;
  dec_rd = 5;
  dec_rs1 = 2;
  reg_rdata_1 = 2;
  #20;
  hrstn = 1;
  #100;
  dec_lb = 0;
  dec_lhu = 1;
  #10000;
  $finish;
end

initial begin
  $dumpfile("exu_load_tb.vcd");
  $dumpvars(0, exu_load_tb);
end

endmodule
