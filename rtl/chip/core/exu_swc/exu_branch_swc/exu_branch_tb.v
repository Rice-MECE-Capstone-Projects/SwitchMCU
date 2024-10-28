module exu_branch_tb;

// general signals
reg           		  hclk                ;
reg           		  hrstn               ;
// control signals
reg           [3:0]       cycle_cnt           ;
reg           [1:0]       flush               ;
// signals from dec
reg                       dec_branch_en       ;
reg                       dec_beq             ;
reg                       dec_bne             ;
reg                       dec_blt             ;
reg                       dec_bge             ;
reg                       dec_bltu            ;
reg                       dec_bgeu            ;
reg           [12:0]      dec_imm_type_b      ;
reg           [4:0]       dec_rs1             ;
reg           [4:0]       dec_rs2             ; 
// PC signals
reg           [31:0]      pc                  ;
reg                       pc_write            ;
reg           [31:0]      pc_wdata            ;
// regfile signals
reg           [31:0]      reg_rdata_1         ;
reg           [4:0]       reg_raddr_1         ;
reg                       reg_ren_1           ;
reg           [31:0]      reg_rdata_2         ;
reg           [4:0]       reg_raddr_2         ;
reg                       reg_ren_2           ;

exu_branch_swc exu_branch_inst (
  .hclk               (hclk                             ),
  .hrstn              (hrstn                            ),
  .cycle_cnt	      (cycle_cnt			),
  .dec_branch_en      (dec_branch_en			),
  .dec_beq	      (dec_beq				),
  .dec_bne	      (dec_bne				),
  .dec_blt	      (dec_blt				),
  .dec_bge	      (dec_bge				),
  .dec_bltu	      (dec_bltu				),
  .dec_bgeu	      (dec_bgeu 			),
  .dec_imm_type_b     (dec_imm_type_b			),
  .dec_rs1	      (dec_rs1				),
  .dec_rs2	      (dec_rs2				),
  .pc	      	      (pc				),
  .pc_write	      (pc_write				),
  .pc_wdata	      (pc_wdata				),
  .flush	      (flush				),
  .reg_rdata_1	      (reg_rdata_1			),
  .reg_raddr_1	      (reg_raddr_1			),
  .reg_ren_1	      (reg_ren_1			),
  .reg_rdata_2	      (reg_rdata_2			),
  .reg_raddr_2	      (reg_raddr_2			),
  .reg_ren_2	      (reg_ren_2			)
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
  dec_branch_en = 1;
  dec_bne = 0;
  dec_beq = 0;
  dec_blt = 1;
  dec_bltu = 0;
  dec_bgeu = 0;
  dec_bge = 0;
  dec_rs1 = 'h0;
  dec_rs2 = 'h0;
  reg_rdata_1 = 'h00000000;
  reg_rdata_2 = 'h00004444;
  reg_raddr_1 = 'h0;
  reg_raddr_2 = 'h0;
  reg_ren_1 = 1;
  reg_ren_2 = 1;
  pc = 'h00000020;
  hrstn = 0;
  dec_imm_type_b = 5;
  #20;
  hrstn = 1;
  #20;
  
  #10000;
  $finish;
end

initial begin
  $dumpfile("exu_branch_tb.vcd");
  $dumpvars(0, exu_branch_tb);
end

endmodule
