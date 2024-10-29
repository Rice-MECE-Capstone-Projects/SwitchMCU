module exu_reg_wbu_tb;

// general signals
reg                   hclk                        ;
reg                   hrstn                       ;
// instruction
reg       [31:0]      inst_in                     ;
reg  [31:0]      inst_out                    ;
// signals from decoder
reg                   dec_lui                     ;
reg                   dec_auipc                   ;
reg                   dec_jal                     ;
reg                   dec_jalr                    ;
reg                   dec_beq                     ;
reg                   dec_bne                     ;
reg                   dec_blt                     ;
reg                   dec_bge                     ;
reg                   dec_bltu                    ;
reg                   dec_bgeu                    ;
reg                   dec_lb                      ;
reg                   dec_lh                      ;
reg                   dec_lw                      ;
reg                   dec_lbu                     ;
reg                   dec_lhu                     ;
reg                   dec_sb                      ;
reg                   dec_sh                      ;
reg                   dec_sw                      ;
reg                   dec_addi                    ;
reg                   dec_slti                    ;
reg                   dec_sltiu                   ;
reg                   dec_xori                    ;
reg                   dec_ori                     ;
reg                   dec_andi                    ;
reg                   dec_slli                    ;
reg                   dec_srli                    ;
reg                   dec_srai                    ;
reg                   dec_add                     ;
reg                   dec_sub                     ;
reg                   dec_sll                     ;
reg                   dec_slt                     ;
reg                   dec_sltu                    ;
reg                   dec_xor                     ;
reg                   dec_srl                     ;
reg                   dec_sra                     ;
reg                   dec_or                      ;
reg                   dec_and                     ;
reg                   dec_fence                   ;
reg                   dec_fence_i                 ;
reg                   dec_ecall                   ;
reg                   dec_ebreak                  ;
reg                   dec_csrrw                   ;    
reg                   dec_csrrs                   ;
reg                   dec_csrrc                   ;
reg                   dec_csrrwi                  ;
reg                   dec_csrrsi                  ;
reg                   dec_csrrci                  ;
reg                   dec_upper_en                ;
reg                   dec_imm_en                  ;
reg                   dec_reg_en                  ;
reg                   dec_jump_en                 ;
reg                   dec_branch_en               ;
reg                   dec_load_en                 ;
reg                   dec_store_en                ;
reg       [4:0]       dec_rs2                     ;
reg       [4:0]       dec_rs1                     ;
reg       [4:0]       dec_rd                      ;
reg       [11:0]      dec_imm_type_i              ;
reg       [11:0]      dec_imm_type_s              ;
reg       [12:0]      dec_imm_type_b              ;
reg       [19:0]      dec_imm_type_u              ;
reg       [20:0]      dec_imm_type_j              ;
// PC reg       
reg       [31:0]      pc                          ; 
reg                  pc_write                    ;
reg      [31:0]      pc_wdata                    ; 
// signals to memory access
reg      [4:0]       exu_load_rd                 ;
reg      [31:0]      exu_load_base_addr          ;
reg      [31:0]      exu_load_offset             ;
reg                  exu_load_sext               ;
reg      [1:0]       exu_load_size               ;
reg                  exu_load_en                 ;
reg      [31:0]      exu_store_addr              ;
reg      [31:0]      exu_store_data              ;
reg      [1:0]       exu_store_size              ;
reg                  exu_store_en                ;
// regfile      
reg      [4:0]       reg_waddr                   ;
reg      [31:0]      reg_wdata                   ;
reg                  reg_wen                     ;
reg      [4:0]       reg_raddr_1                 ;
reg       [31:0]      reg_rdata_1                 ;
reg                  reg_ren_1                   ;
reg      [4:0]       reg_raddr_2                 ;
reg      [31:0]      reg_rdata_2                 ;
reg                  reg_ren_2                   ;
// control signals
reg       [3:0]       cycle_cnt                   ;
reg                  ifu_dec_stall               ;

//WBU extra signals
reg [4:0]   mau_load_rd;
reg [31:0]  mau_load_data;
reg         mau_load_en;


exu_top_swc exu_top_inst (
  .hclk			(hclk                           ),
  .hrstn		(hrstn                          ),
  .cycle_cnt		(cycle_cnt			),
  .ifu_dec_stall	(ifu_dec_stall			),
  .inst_in		(inst_in			),
  .inst_out		(inst_out			),
  .dec_lui		(dec_lui			),
  .dec_auipc		(dec_auipc			),
  .dec_jal		(dec_jal			),
  .dec_jalr		(dec_jalr			),
  .dec_beq		(dec_beq			),
  .dec_bne		(dec_bne			),
  .dec_blt		(dec_blt			),
  .dec_bge		(dec_bge			),
  .dec_bltu		(dec_bltu			),
  .dec_bgeu		(dec_bgeu			),
  .dec_lb		(dec_lb				),
  .dec_lh		(dec_lh 			),
  .dec_lw		(dec_lw				),
  .dec_lbu		(dec_lbu 			),
  .dec_lhu		(dec_lhu			),
  .dec_sb		(dec_sb				),
  .dec_sh		(dec_sh				),
  .dec_sw		(dec_sw				),
  .dec_addi		(dec_addi			),
  .dec_slti		(dec_slti			),
  .dec_sltiu		(dec_sltiu			),
  .dec_xori		(dec_xori			),
  .dec_ori		(dec_ori 			),
  .dec_andi		(dec_andi			),
  .dec_slli		(dec_slli 			),
  .dec_srli		(dec_srli			),
  .dec_srai		(dec_srai			),
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
  .dec_fence		(dec_fence			),
  .dec_fence_i		(dec_fence_i			),
  .dec_ecall		(dec_ecall			),
  .dec_ebreak		(dec_ebreak			),
  .dec_csrrw		(dec_csrrw			),
  .dec_csrrs		(dec_csrrs			),
  .dec_csrrc		(dec_csrrc			),
  .dec_csrrwi		(dec_csrrwi			),
  .dec_csrrsi		(dec_csrrsi			),
  .dec_csrrci		(dec_csrrci			),
  .dec_upper_en		(dec_upper_en			),
  .dec_imm_en		(dec_imm_en			),
  .dec_reg_en		(dec_reg_en			),
  .dec_jump_en		(dec_jump_en			),
  .dec_branch_en	(dec_branch_en			),
  .dec_load_en		(dec_load_en			),
  .dec_store_en		(dec_store_en			),
  .dec_rs2		(dec_rs2			),
  .dec_rs1		(dec_rs1			),
  .dec_rd		(dec_rd				),
  .dec_imm_type_i	(dec_imm_type_i			),
  .dec_imm_type_s	(dec_imm_type_s			),
  .dec_imm_type_b	(dec_imm_type_b			),
  .dec_imm_type_u	(dec_imm_type_u			),
  .dec_imm_type_j	(dec_imm_type_j			),
  .pc			(pc				),
  .pc_write		(pc_write			),
  .pc_wdata		(pc_wdata			),
  .exu_load_rd		(exu_load_rd			),
  .exu_load_base_addr	(exu_load_base_addr		),
  .exu_load_offset	(exu_load_offset		),
  .exu_load_sext	(exu_load_sext			),
  .exu_load_size	(exu_load_size			),
  .exu_load_en		(exu_load_en			),
  .exu_store_addr	(exu_store_addr			),
  .exu_store_data	(exu_store_data			),
  .exu_store_size	(exu_store_size			),
  .exu_store_en		(exu_store_en			),
  .reg_waddr		(reg_waddr			),
  .reg_wdata		(reg_wdata			),
  .reg_wen		(reg_wen			),
  .reg_raddr_1		(reg_raddr_1			),
  .reg_rdata_1		(reg_rdata_1			),
  .reg_ren_1		(reg_ren_1			),
  .reg_raddr_2		(reg_raddr_2			),
  .reg_rdata_2		(reg_rdata_2			),
  .reg_ren_2		(reg_ren_2			)
);

regfile_swc regfile_inst (
    hclk                                  (hclk),
    hrstn                                (hrstn),
    reg_waddr                        (reg_waddr),
    reg_wen                            (reg_wen),
    reg_wdata                        (reg_wdata),
    reg_raddr_1                    (reg_raddr_1),
    reg_ren_1                        (reg_ren_1),
    reg_rdata_1                    (reg_rdata_1),
    reg_raddr_2                    (reg_raddr_2),
    reg_ren_2                        (reg_ren_2),
    reg_rdata_2                    (reg_rdata_2)
);

wbu_swc wbu_inst (
    hclk                                  (hclk),
    hrstn                                (hrstn),
    cycle_cnt                        (cycle_cnt),
    mau_load_rd                    (mau_load_rd),
    mau_load_data                (mau_load_data),
    mau_load_en                    (mau_load_en),
    reg_waddr                        (reg_waddr),
    reg_wen                            (reg_wen),
    reg_wdata                        (reg_wdata)
);

endmodule