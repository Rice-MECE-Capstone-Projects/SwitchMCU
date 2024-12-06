module core_top_swc (
  hclk                                              ,
  hrstn                                             ,
  itcm_haddr                                        ,
  itcm_hwrite                                       ,
  itcm_hwdata                                       ,
  itcm_hsize                                        ,
  itcm_hprot                                        ,
  itcm_hburst                                       ,
  itcm_htrans                                       ,
  itcm_hmastlock                                    ,
  itcm_hready                                       ,
  itcm_hresp                                        ,
  itcm_hrdata                                       ,
  dtcm_haddr                                        ,
  dtcm_hwrite                                       ,
  dtcm_hwdata                                       ,
  dtcm_hsize                                        ,
  dtcm_hprot                                        ,
  dtcm_hburst                                       ,
  dtcm_htrans                                       ,
  dtcm_hmastlock                                    ,
  dtcm_hready                                       ,
  dtcm_hresp                                        ,
  dtcm_hrdata                                       ,
  itcm_ready
);

// general signals
input                     hclk                      ;
input                     hrstn                     ;
// itcm AHB bus
output        [31:0]      itcm_haddr                ;
output                    itcm_hwrite               ;
output        [31:0]      itcm_hwdata               ;
output        [2:0]       itcm_hsize                ;
output        [6:0]       itcm_hprot                ;
output        [2:0]       itcm_hburst               ;
output        [1:0]       itcm_htrans               ;
output                    itcm_hmastlock            ;
input                     itcm_hready               ;
input                     itcm_hresp                ;
input         [31:0]      itcm_hrdata               ;
// dtcm AHB bus
output        [31:0]      dtcm_haddr                ;
output                    dtcm_hwrite               ;
output        [31:0]      dtcm_hwdata               ;
output        [2:0]       dtcm_hsize                ;
output        [6:0]       dtcm_hprot                ;
output        [2:0]       dtcm_hburst               ;
output        [1:0]       dtcm_htrans               ;
output                    dtcm_hmastlock            ;
input                     dtcm_hready               ;
input                     dtcm_hresp                ;
input         [31:0]      dtcm_hrdata               ;
// itcm_ready
input                     itcm_ready                ;
// ifu signals
wire          [31:0]      inst_ifu_out              ;
wire                      ifu_idle                  ;
wire                      pc_write                  ;
wire          [31:0]      pc_wdata                  ;
wire          [31:0]      pc                        ;
// decoder signals
wire          [31:0]      inst_dec_out              ;
wire                      dec_lui                   ;
wire                      dec_auipc                 ;
wire                      dec_jal                   ;
wire                      dec_jalr                  ;
wire                      dec_beq                   ;
wire                      dec_bne                   ;
wire                      dec_blt                   ;
wire                      dec_bge                   ;
wire                      dec_bltu                  ;
wire                      dec_bgeu                  ;
wire                      dec_lb                    ;
wire                      dec_lh                    ;
wire                      dec_lw                    ;
wire                      dec_lbu                   ;
wire                      dec_lhu                   ;
wire                      dec_sb                    ;
wire                      dec_sh                    ;
wire                      dec_sw                    ;
wire                      dec_addi                  ;
wire                      dec_slti                  ;
wire                      dec_sltiu                 ;
wire                      dec_xori                  ;
wire                      dec_ori                   ;
wire                      dec_andi                  ;
wire                      dec_slli                  ;
wire                      dec_srli                  ;
wire                      dec_srai                  ;
wire                      dec_add                   ;
wire                      dec_sub                   ;
wire                      dec_sll                   ;
wire                      dec_slt                   ;
wire                      dec_sltu                  ;
wire                      dec_xor                   ;
wire                      dec_srl                   ;
wire                      dec_sra                   ;
wire                      dec_or                    ;
wire                      dec_and                   ;
wire                      dec_fence                 ;
wire                      dec_fence_i               ;
wire                      dec_ecall                 ;
wire                      dec_ebreak                ;
wire                      dec_csrrw                 ;
wire                      dec_csrrs                 ;
wire                      dec_csrrc                 ;
wire                      dec_csrrwi                ;
wire                      dec_csrrsi                ;
wire                      dec_csrrci                ;
wire                      dec_upper_en              ;
wire                      dec_imm_en                ;
wire                      dec_reg_en                ;
wire                      dec_jump_en               ;
wire                      dec_branch_en             ;
wire                      dec_load_en               ;
wire                      dec_store_en              ;
wire          [4:0]       dec_rs2                   ;
wire          [4:0]       dec_rs1                   ;
wire          [4:0]       dec_rd                    ;
wire          [11:0]      dec_imm_type_i            ;
wire          [11:0]      dec_imm_type_s            ;
wire          [12:0]      dec_imm_type_b            ;
wire          [19:0]      dec_imm_type_u            ;
wire          [20:0]      dec_imm_type_j            ;
// exu signals
wire          [31:0]      inst_exu_out              ;
wire          [4:0]       exu_load_rd               ;
wire          [31:0]      exu_load_base_addr        ;
wire          [31:0]      exu_load_offset           ;
wire                      exu_load_sext             ;
wire          [1:0]       exu_load_size             ;
wire                      exu_load_en               ;
wire          [31:0]      exu_store_addr            ;
wire          [31:0]      exu_store_data            ;
wire          [1:0]       exu_store_size            ;
wire                      exu_store_en              ;
// mau signals
wire          [4:0]       mau_load_rd               ;
wire          [31:0]      mau_load_data             ;
wire                      mau_load_en               ;
// regfile signals
wire          [4:0]       reg_waddr                 ;
wire          [31:0]      reg_wdata                 ;
wire                      reg_wen                   ;
wire          [4:0]       reg_raddr_1               ;
wire          [31:0]      reg_rdata_1               ;
wire                      reg_ren_1                 ;
wire          [4:0]       reg_raddr_2               ;
wire          [31:0]      reg_rdata_2               ;
wire                      reg_ren_2                 ;
// ifu_dec_stall
wire                      ifu_dec_stall             ;

// cycle_cnt
reg           [3:0]       cycle_cnt                 ;
always@(posedge hclk) begin
  if(!hrstn || !itcm_ready)
      cycle_cnt <= 0;
  else if(cycle_cnt == 4)
      if(ifu_idle)
          cycle_cnt <= 1;
      else
          cycle_cnt <= cycle_cnt;
  else
      cycle_cnt <= cycle_cnt + 1;
end

// regfile
regfile_swc  regfile_swc_inst (
    .hclk                 (hclk                     ),
    .hrstn                (hrstn                    ),
    .reg_waddr            (reg_waddr                ),
    .reg_wdata            (reg_wdata                ),
    .reg_wen              (reg_wen                  ),
    .reg_raddr_1          (reg_raddr_1              ),
    .reg_rdata_1          (reg_rdata_1              ),
    .reg_ren_1            (reg_ren_1                ),
    .reg_raddr_2          (reg_raddr_2              ),
    .reg_rdata_2          (reg_rdata_2              ),
    .reg_ren_2            (reg_ren_2                )
);

// ifu
ifu_swc ifu_swc_inst (
  .hclk                   (hclk                     ),
  .hrstn                  (hrstn                    ),
  .haddr                  (itcm_haddr               ),
  .hwrite                 (itcm_hwrite              ),
  .hwdata                 (itcm_hwdata              ),
  .hsize                  (itcm_hsize               ),
  .hburst                 (itcm_hburst              ),
  .hprot                  (itcm_hprot               ),
  .htrans                 (itcm_htrans              ),
  .hmastlock              (itcm_hmastlock           ),
  .hready                 (itcm_hready              ),
  .hresp                  (itcm_hresp               ),
  .hrdata                 (itcm_hrdata              ),
  .itcm_ready             (itcm_ready               ),
  .ifu_idle               (ifu_idle                 ),
  .ifu_dec_stall          (ifu_dec_stall            ),
  .cycle_cnt              (cycle_cnt                ),
  .pc_write               (pc_write                 ),
  .pc_wdata               (pc_wdata                 ),
  .pc                     (pc                       ),
  .inst_out               (inst_ifu_out             )
);

// decoder
dec_swc  dec_swc_inst (
  .hclk                   (hclk                     ),
  .hrstn                  (hrstn                    ),
  .cycle_cnt              (cycle_cnt                ),
  .ifu_dec_stall          (ifu_dec_stall            ),
  .inst_in                (inst_ifu_out             ),
  .inst_out               (inst_dec_out             ),
  .dec_lui                (dec_lui                  ),
  .dec_auipc              (dec_auipc                ),
  .dec_jal                (dec_jal                  ),
  .dec_jalr               (dec_jalr                 ),
  .dec_beq                (dec_beq                  ),
  .dec_bne                (dec_bne                  ),
  .dec_blt                (dec_blt                  ),
  .dec_bge                (dec_bge                  ),
  .dec_bltu               (dec_bltu                 ),
  .dec_bgeu               (dec_bgeu                 ),
  .dec_lb                 (dec_lb                   ),
  .dec_lh                 (dec_lh                   ),
  .dec_lw                 (dec_lw                   ),
  .dec_lbu                (dec_lbu                  ),
  .dec_lhu                (dec_lhu                  ),
  .dec_sb                 (dec_sb                   ),
  .dec_sh                 (dec_sh                   ),
  .dec_sw                 (dec_sw                   ),
  .dec_addi               (dec_addi                 ),
  .dec_slti               (dec_slti                 ),
  .dec_sltiu              (dec_sltiu                ),
  .dec_xori               (dec_xori                 ),
  .dec_ori                (dec_ori                  ),
  .dec_andi               (dec_andi                 ),
  .dec_slli               (dec_slli                 ),
  .dec_srli               (dec_srli                 ),
  .dec_srai               (dec_srai                 ),
  .dec_add                (dec_add                  ),
  .dec_sub                (dec_sub                  ),
  .dec_sll                (dec_sll                  ),
  .dec_slt                (dec_slt                  ),
  .dec_sltu               (dec_sltu                 ),
  .dec_xor                (dec_xor                  ),
  .dec_srl                (dec_srl                  ),
  .dec_sra                (dec_sra                  ),
  .dec_or                 (dec_or                   ),
  .dec_and                (dec_and                  ),
  .dec_fence              (dec_fence                ),
  .dec_fence_i            (dec_fence_i              ),
  .dec_ecall              (dec_ecall                ),
  .dec_ebreak             (dec_ebreak               ),
  .dec_csrrw              (dec_csrrw                ),
  .dec_csrrs              (dec_csrrs                ),
  .dec_csrrc              (dec_csrrc                ),
  .dec_csrrwi             (dec_csrrwi               ),
  .dec_csrrsi             (dec_csrrsi               ),
  .dec_csrrci             (dec_csrrci               ),
  .dec_upper_en           (dec_upper_en             ),
  .dec_imm_en             (dec_imm_en               ),
  .dec_reg_en             (dec_reg_en               ),
  .dec_jump_en            (dec_jump_en              ),
  .dec_branch_en          (dec_branch_en            ),
  .dec_load_en            (dec_load_en              ),
  .dec_store_en           (dec_store_en             ),
  .dec_rs2                (dec_rs2                  ),
  .dec_rs1                (dec_rs1                  ),
  .dec_rd                 (dec_rd                   ),
  .dec_imm_type_i         (dec_imm_type_i           ),
  .dec_imm_type_s         (dec_imm_type_s           ),
  .dec_imm_type_b         (dec_imm_type_b           ),
  .dec_imm_type_u         (dec_imm_type_u           ),
  .dec_imm_type_j         (dec_imm_type_j           )
);

// exu
exu_top_swc  exu_top_swc_inst (
  .hclk                   (hclk                     ),
  .hrstn                  (hrstn                    ),
  .cycle_cnt              (cycle_cnt                ),
  .inst_in                (inst_dec_out             ),
  .inst_out               (inst_exu_out             ),
  .dec_lui                (dec_lui                  ),
  .dec_auipc              (dec_auipc                ),
  .dec_jal                (dec_jal                  ),
  .dec_jalr               (dec_jalr                 ),
  .dec_beq                (dec_beq                  ),
  .dec_bne                (dec_bne                  ),
  .dec_blt                (dec_blt                  ),
  .dec_bge                (dec_bge                  ),
  .dec_bltu               (dec_bltu                 ),
  .dec_bgeu               (dec_bgeu                 ),
  .dec_lb                 (dec_lb                   ),
  .dec_lh                 (dec_lh                   ),
  .dec_lw                 (dec_lw                   ),
  .dec_lbu                (dec_lbu                  ),
  .dec_lhu                (dec_lhu                  ),
  .dec_sb                 (dec_sb                   ),
  .dec_sh                 (dec_sh                   ),
  .dec_sw                 (dec_sw                   ),
  .dec_addi               (dec_addi                 ),
  .dec_slti               (dec_slti                 ),
  .dec_sltiu              (dec_sltiu                ),
  .dec_xori               (dec_xori                 ),
  .dec_ori                (dec_ori                  ),
  .dec_andi               (dec_andi                 ),
  .dec_slli               (dec_slli                 ),
  .dec_srli               (dec_srli                 ),
  .dec_srai               (dec_srai                 ),
  .dec_add                (dec_add                  ),
  .dec_sub                (dec_sub                  ),
  .dec_sll                (dec_sll                  ),
  .dec_slt                (dec_slt                  ),
  .dec_sltu               (dec_sltu                 ),
  .dec_xor                (dec_xor                  ),
  .dec_srl                (dec_srl                  ),
  .dec_sra                (dec_sra                  ),
  .dec_or                 (dec_or                   ),
  .dec_and                (dec_and                  ),
  .dec_fence              (dec_fence                ),
  .dec_fence_i            (dec_fence_i              ),
  .dec_ecall              (dec_ecall                ),
  .dec_ebreak             (dec_ebreak               ),
  .dec_csrrw              (dec_csrrw                ),
  .dec_csrrs              (dec_csrrs                ),
  .dec_csrrc              (dec_csrrc                ),
  .dec_csrrwi             (dec_csrrwi               ),
  .dec_csrrsi             (dec_csrrsi               ),
  .dec_csrrci             (dec_csrrci               ),
  .dec_upper_en           (dec_upper_en             ),
  .dec_imm_en             (dec_imm_en               ),
  .dec_reg_en             (dec_reg_en               ),
  .dec_jump_en            (dec_jump_en              ),
  .dec_branch_en          (dec_branch_en            ),
  .dec_load_en            (dec_load_en              ),
  .dec_store_en           (dec_store_en             ),
  .dec_rs2                (dec_rs2                  ),
  .dec_rs1                (dec_rs1                  ),
  .dec_rd                 (dec_rd                   ),
  .dec_imm_type_i         (dec_imm_type_i           ),
  .dec_imm_type_s         (dec_imm_type_s           ),
  .dec_imm_type_b         (dec_imm_type_b           ),
  .dec_imm_type_u         (dec_imm_type_u           ),
  .dec_imm_type_j         (dec_imm_type_j           ),
  .pc                     (pc                       ),
  .pc_write               (pc_write                 ),
  .pc_wdata               (pc_wdata                 ),
  .exu_load_rd            (exu_load_rd              ),
  .exu_load_base_addr     (exu_load_base_addr       ),
  .exu_load_offset        (exu_load_offset          ),
  .exu_load_sext          (exu_load_sext            ),
  .exu_load_size          (exu_load_size            ),
  .exu_load_en            (exu_load_en              ),
  .exu_store_addr         (exu_store_addr           ),
  .exu_store_data         (exu_store_data           ),
  .exu_store_en           (exu_store_en             ),
  .exu_store_size         (exu_store_size           ),
  .reg_waddr              (reg_waddr                ),
  .reg_wdata              (reg_wdata                ),
  .reg_wen                (reg_wen                  ),
  .reg_raddr_1            (reg_raddr_1              ),
  .reg_rdata_1            (reg_rdata_1              ),
  .reg_ren_1              (reg_ren_1                ),
  .reg_raddr_2            (reg_raddr_2              ),
  .reg_rdata_2            (reg_rdata_2              ),
  .reg_ren_2              (reg_ren_2                ),
  .ifu_dec_stall          (ifu_dec_stall            )
);

// mau
mau_swc #(
  .CNT_MAX                (4                        )
)mau_swc_inst (
  .hclk                   (hclk                     ),
  .hrstn                  (hrstn                    ),
  .haddr                  (dtcm_haddr               ),
  .hwrite                 (dtcm_hwrite              ),
  .hwdata                 (dtcm_hwdata              ),
  .hsize                  (dtcm_hsize               ),
  .hburst                 (dtcm_hburst              ),
  .hprot                  (dtcm_hprot               ),
  .htrans                 (dtcm_htrans              ),
  .hmastlock              (dtcm_hmastlock           ),
  .hready                 (dtcm_hready              ),
  .hresp                  (dtcm_hresp               ),
  .hrdata                 (dtcm_hrdata              ),
  .cycle_cnt              (cycle_cnt                ),
  .exu_load_rd            (exu_load_rd              ),
  .exu_load_base_addr     (exu_load_base_addr       ),
  .exu_load_offset        (exu_load_offset          ),
  .exu_load_sext          (exu_load_sext            ),
  .exu_load_size          (exu_load_size            ),
  .exu_load_en            (exu_load_en              ),
  .exu_store_addr         (exu_store_addr           ),
  .exu_store_data         (exu_store_data           ),
  .exu_store_size         (exu_store_size           ),
  .exu_store_en           (exu_store_en             ),
  .mau_load_rd            (mau_load_rd              ),
  .mau_load_data          (mau_load_data            ),
  .mau_load_en            (mau_load_en              )
);

// wbu
wbu_swc  wbu_swc_inst (
    .hclk                 (hclk                     ),
    .hrstn                (hrstn                    ),
    .cycle_cnt            (cycle_cnt                ),
    .mau_load_rd          (mau_load_rd              ),
    .mau_load_data        (mau_load_data            ),
    .mau_load_en          (mau_load_en              ),
    .reg_waddr            (reg_waddr                ),
    .reg_wen              (reg_wen                  ),
    .reg_wdata            (reg_wdata                )
);

endmodule