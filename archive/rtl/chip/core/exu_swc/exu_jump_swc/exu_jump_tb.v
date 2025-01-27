module exu_jump_tb;

// general signals
reg                       hclk                ;
reg                       hrstn               ;
reg           [3:0]       cycle_cnt           ;
// signals from dec 
reg                       dec_jump_en         ;
reg                       dec_jal             ;
reg                       dec_jalr            ;
reg           [11:0]      dec_imm_type_i      ;
reg           [20:0]      dec_imm_type_j      ;
reg           [4:0]       dec_rd              ;
reg           [4:0]       dec_rs1             ;
// PC
reg           [31:0]      pc                  ;
reg                       pc_write            ;
reg           [31:0]      pc_wdata            ;
// pipeline flushing
reg           [1:0]       flush               ;
// regfile write port   
reg           [4:0]       reg_waddr           ;
reg                       reg_wen             ;
reg           [31:0]      reg_wdata           ;
reg           [4:0]       reg_raddr_1         ;
reg                       reg_ren_1           ;
reg           [31:0]      reg_rdata_1         ;

exu_jump_swc exu_jump_inst (
  .hclk			(hclk                           ),
  .hrstn		(hrstn                          ),
  .cycle_cnt		(cycle_cnt			),
  .dec_jump_en		(dec_jump_en			),
  .dec_jal		(dec_jal			),
  .dec_jalr		(dec_jalr			),
  .dec_imm_type_i	(dec_imm_type_i			),
  .dec_imm_type_j	(dec_imm_type_j			),
  .dec_rd		(dec_rd				),
  .dec_rs1		(dec_rs1 			),
  .pc			(pc				),
  .pc_write		(pc_write			),
  .pc_wdata		(pc_wdata			),
  .flush		(flush				),
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

// copied from ifu_swc.v
always@(posedge hclk) begin
    if(!hrstn) begin
        pc <= 0;
    end else if(cycle_cnt == 4) begin
        if(pc_write) begin
            pc <= pc_wdata;
        end else begin
            pc <= pc + 4;
        end
    end else begin
        pc <= pc;
    end
end

initial begin
  dec_jump_en = 1;
  dec_jal = 1;
  dec_jalr = 0;
  dec_imm_type_i = 10;
  dec_imm_type_j = 120;
  dec_rd = 0;
  dec_rs1 = 2;
  reg_rdata_1 = 2;
  #20;
  hrstn = 1;
  #100;
  dec_jal = 0;
  dec_jalr = 1;
  #10000;
  $finish;
end

initial begin
  $dumpfile("exu_jump_tb.vcd");
  $dumpvars(0, exu_jump_tb);
end

endmodule
