module dec_swc(
    hclk                                    ,
    hrstn                                   ,
    inst_in                                 ,
    inst_out                                ,
    cycle_cnt                               ,
    ifu_dec_stall                           ,
    dec_lui                                 ,
    dec_auipc                               ,
    dec_jal                                 ,
    dec_jalr                                ,
    dec_beq                                 ,
    dec_bne                                 ,
    dec_blt                                 ,
    dec_bge                                 ,
    dec_bltu                                ,
    dec_bgeu                                ,
    dec_lb                                  ,
    dec_lh                                  ,
    dec_lw                                  ,
    dec_lbu                                 ,
    dec_lhu                                 ,
    dec_sb                                  ,
    dec_sh                                  ,
    dec_sw                                  ,
    dec_addi                                ,
    dec_slti                                ,
    dec_sltiu                               ,
    dec_xori                                ,
    dec_ori                                 ,
    dec_andi                                ,
    dec_slli                                ,
    dec_srli                                ,
    dec_srai                                ,
    dec_add                                 ,
    dec_sub                                 ,
    dec_sll                                 ,
    dec_slt                                 ,
    dec_sltu                                ,
    dec_xor                                 ,
    dec_srl                                 ,
    dec_sra                                 ,
    dec_or                                  ,
    dec_and                                 ,
    dec_fence                               ,
    dec_fence_i                             ,
    dec_ecall                               ,
    dec_ebreak                              ,
    dec_csrrw                               ,
    dec_csrrs                               ,
    dec_csrrc                               ,
    dec_csrrwi                              ,
    dec_csrrsi                              ,
    dec_csrrci                              ,
    dec_upper_en                            ,
    dec_imm_en                              ,
    dec_reg_en                              ,
    dec_jump_en                             ,
    dec_branch_en                           ,
    dec_load_en                             ,
    dec_store_en                            ,
    dec_rs2                                 ,
    dec_rs1                                 ,
    dec_rd                                  ,
    dec_imm_type_i                          ,
    dec_imm_type_s                          ,
    dec_imm_type_b                          ,
    dec_imm_type_u                          ,
    dec_imm_type_j                          
);

// general signals
input                   hclk                ;
input                   hrstn               ;
// control signals
input           [3:0]   cycle_cnt           ;
input                   ifu_dec_stall       ;
// instruction input
input           [31:0]  inst_in             ;
output reg      [31:0]  inst_out            ;
// output wires
output reg              dec_lui             ;
output reg              dec_auipc           ;
output reg              dec_jal             ;
output reg              dec_jalr            ;
output reg              dec_beq             ;
output reg              dec_bne             ;
output reg              dec_blt             ;
output reg              dec_bge             ;
output reg              dec_bltu            ;
output reg              dec_bgeu            ;
output reg              dec_lb              ;
output reg              dec_lh              ;
output reg              dec_lw              ;
output reg              dec_lbu             ;
output reg              dec_lhu             ;
output reg              dec_sb              ;
output reg              dec_sh              ;
output reg              dec_sw              ;
output reg              dec_addi            ;
output reg              dec_slti            ;
output reg              dec_sltiu           ;
output reg              dec_xori            ;
output reg              dec_ori             ;
output reg              dec_andi            ;
output reg              dec_slli            ;
output reg              dec_srli            ;
output reg              dec_srai            ;
output reg              dec_add             ;
output reg              dec_sub             ;
output reg              dec_sll             ;
output reg              dec_slt             ;
output reg              dec_sltu            ;
output reg              dec_xor             ;
output reg              dec_srl             ;
output reg              dec_sra             ;
output reg              dec_or              ;
output reg              dec_and             ;
output reg              dec_fence           ;
output reg              dec_fence_i         ;
output reg              dec_ecall           ;
output reg              dec_ebreak          ;
output reg              dec_csrrw           ;    
output reg              dec_csrrs           ;
output reg              dec_csrrc           ;
output reg              dec_csrrwi          ;
output reg              dec_csrrsi          ;
output reg              dec_csrrci          ;
output reg              dec_upper_en        ;
output reg              dec_imm_en          ;
output reg              dec_reg_en          ;
output reg              dec_jump_en         ;
output reg              dec_branch_en       ;
output reg              dec_load_en         ;
output reg              dec_store_en        ;
output reg  [4:0]       dec_rs2             ;
output reg  [4:0]       dec_rs1             ;
output reg  [4:0]       dec_rd              ;
output reg  [11:0]      dec_imm_type_i      ;
output reg  [11:0]      dec_imm_type_s      ;
output reg  [12:0]      dec_imm_type_b      ;
output reg  [19:0]      dec_imm_type_u      ;
output reg  [20:0]      dec_imm_type_j      ;

// extract parts from instructions
reg  [3:0]  inst_31_28                      ;
reg  [6:0]  inst_31_25                      ;
reg  [11:0] inst_31_20                      ;
reg  [4:0]  inst_19_15                      ;
reg  [2:0]  inst_14_12                      ;
reg  [4:0]  inst_11_7                       ;
reg  [6:0]  inst_6_0                        ;
// 31:28 bits dec
reg         inst_31_28_equal_0000           ;
// 19:15 bits dec
reg         inst_19_15_equal_00000          ;
// 11:7 bits dec
reg         inst_11_7_equal_00000           ;
// 31:25 bits dec
reg         inst_31_25_equal_0000000        ;
reg         inst_31_25_equal_0100000        ;
// 14:12 bits dec
reg         inst_14_12_equal_000            ;
reg         inst_14_12_equal_001            ;
reg         inst_14_12_equal_010            ;
reg         inst_14_12_equal_011            ;
reg         inst_14_12_equal_100            ;
reg         inst_14_12_equal_101            ;
reg         inst_14_12_equal_110            ;
reg         inst_14_12_equal_111            ;
// 6:0 bits dec
reg         inst_6_0_equal_0000011          ;
reg         inst_6_0_equal_0001111          ;
reg         inst_6_0_equal_0010011          ;
reg         inst_6_0_equal_0010111          ;
reg         inst_6_0_equal_0100011          ;
reg         inst_6_0_equal_0110011          ;
reg         inst_6_0_equal_0110111          ;
reg         inst_6_0_equal_1100011          ;
reg         inst_6_0_equal_1100111          ;
reg         inst_6_0_equal_1101111          ;
reg         inst_6_0_equal_1110011          ;
// 31:20 bits dec
reg         inst_31_20_equal_000000000000   ;
reg         inst_31_20_equal_000000000001   ;

// middle sigs
// decode with 6:0 bits
wire        mid_lui      = (inst_6_0_equal_0110111);
wire        mid_auipc    = (inst_6_0_equal_0010111);
wire        mid_jal      = (inst_6_0_equal_1101111);
// Decode with 14:12 and 6:0 bits
wire        mid_jalr     = (inst_14_12_equal_000 & inst_6_0_equal_1100111);
wire        mid_beq      = (inst_14_12_equal_000 & inst_6_0_equal_1100011);
wire        mid_bne      = (inst_14_12_equal_001 & inst_6_0_equal_1100011);
wire        mid_blt      = (inst_14_12_equal_100 & inst_6_0_equal_1100011);
wire        mid_bge      = (inst_14_12_equal_101 & inst_6_0_equal_1100011);
wire        mid_bltu     = (inst_14_12_equal_110 & inst_6_0_equal_1100011);
wire        mid_bgeu     = (inst_14_12_equal_111 & inst_6_0_equal_1100011);
// ---
wire        mid_lb       = (inst_14_12_equal_000 & inst_6_0_equal_0000011);
wire        mid_lh       = (inst_14_12_equal_001 & inst_6_0_equal_0000011);
wire        mid_lw       = (inst_14_12_equal_010 & inst_6_0_equal_0000011);
wire        mid_lbu      = (inst_14_12_equal_100 & inst_6_0_equal_0000011);
wire        mid_lhu      = (inst_14_12_equal_101 & inst_6_0_equal_0000011);
// ---
wire        mid_sb       = (inst_14_12_equal_000 & inst_6_0_equal_0100011);
wire        mid_sh       = (inst_14_12_equal_001 & inst_6_0_equal_0100011);
wire        mid_sw       = (inst_14_12_equal_010 & inst_6_0_equal_0100011);
// ---
wire        mid_addi     = (inst_14_12_equal_000 & inst_6_0_equal_0010011);
wire        mid_slti     = (inst_14_12_equal_010 & inst_6_0_equal_0010011);
wire        mid_sltiu    = (inst_14_12_equal_011 & inst_6_0_equal_0010011);
wire        mid_xori     = (inst_14_12_equal_100 & inst_6_0_equal_0010011);
wire        mid_ori      = (inst_14_12_equal_110 & inst_6_0_equal_0010011);
wire        mid_andi     = (inst_14_12_equal_111 & inst_6_0_equal_0010011);
// ---
wire        mid_csrrw    = (inst_14_12_equal_001 & inst_6_0_equal_1110011);
wire        mid_csrrs    = (inst_14_12_equal_010 & inst_6_0_equal_1110011);
wire        mid_csrrc    = (inst_14_12_equal_011 & inst_6_0_equal_1110011);
wire        mid_csrrwi   = (inst_14_12_equal_101 & inst_6_0_equal_1110011);
wire        mid_csrrsi   = (inst_14_12_equal_110 & inst_6_0_equal_1110011);
wire        mid_csrrci   = (inst_14_12_equal_111 & inst_6_0_equal_1110011);
// Decode with 31:25 , 14:12 and 6:0 bits
wire        mid_slli     = (inst_31_25_equal_0000000 & inst_14_12_equal_001 & inst_6_0_equal_0010011);
wire        mid_srli     = (inst_31_25_equal_0000000 & inst_14_12_equal_101 & inst_6_0_equal_0010011);
wire        mid_srai     = (inst_31_25_equal_0100000 & inst_14_12_equal_101 & inst_6_0_equal_0010011);
wire        mid_add      = (inst_31_25_equal_0000000 & inst_14_12_equal_000 & inst_6_0_equal_0110011);
wire        mid_sub      = (inst_31_25_equal_0100000 & inst_14_12_equal_000 & inst_6_0_equal_0110011);
wire        mid_sll      = (inst_31_25_equal_0000000 & inst_14_12_equal_001 & inst_6_0_equal_0110011);
wire        mid_slt      = (inst_31_25_equal_0000000 & inst_14_12_equal_010 & inst_6_0_equal_0110011);
wire        mid_sltu     = (inst_31_25_equal_0000000 & inst_14_12_equal_011 & inst_6_0_equal_0110011);
wire        mid_xor      = (inst_31_25_equal_0000000 & inst_14_12_equal_100 & inst_6_0_equal_0110011);
wire        mid_srl      = (inst_31_25_equal_0000000 & inst_14_12_equal_101 & inst_6_0_equal_0110011);
wire        mid_sra      = (inst_31_25_equal_0100000 & inst_14_12_equal_101 & inst_6_0_equal_0110011);
wire        mid_or       = (inst_31_25_equal_0000000 & inst_14_12_equal_110 & inst_6_0_equal_0110011);
wire        mid_and      = (inst_31_25_equal_0000000 & inst_14_12_equal_111 & inst_6_0_equal_0110011);
// Decode with 31:25 , 19:15 , 14:12 , 11:7 and 6:0
wire        mid_fence    = (inst_31_28_equal_0000 & inst_19_15_equal_00000 & inst_14_12_equal_000 & inst_11_7_equal_00000 & inst_6_0_equal_0001111);
// Decode with ALL bits
wire        mid_fence_i  = (inst_31_20_equal_000000000000 & inst_19_15_equal_00000 & inst_14_12_equal_001 & inst_11_7_equal_00000 & inst_6_0_equal_0001111);
wire        mid_ecall    = (inst_31_20_equal_000000000000 & inst_19_15_equal_00000 & inst_14_12_equal_000 & inst_11_7_equal_00000 & inst_6_0_equal_1110011);
wire        mid_ebreak   = (inst_31_20_equal_000000000001 & inst_19_15_equal_00000 & inst_14_12_equal_000 & inst_11_7_equal_00000 & inst_6_0_equal_1110011);

// [FIRST STAGE]
always @(posedge hclk) begin
    if(!hrstn) begin
        inst_31_28 <= 0;
        inst_31_25 <= 0;
        inst_31_20 <= 0;
        inst_19_15 <= 0;
        inst_14_12 <= 0;
        inst_11_7  <= 0;
        inst_6_0   <= 0;
    end else if(cycle_cnt == 1) begin
        inst_31_28 <= inst_in[31:28];
        inst_31_25 <= inst_in[31:25];
        inst_31_20 <= inst_in[31:20];
        inst_19_15 <= inst_in[19:15];
        inst_14_12 <= inst_in[14:12];
        inst_11_7  <= inst_in[11: 7];
        inst_6_0   <= inst_in[ 6: 0];
    end else begin
        inst_31_28 <=  inst_31_28;
        inst_31_25 <=  inst_31_25;
        inst_31_20 <=  inst_31_20;
        inst_19_15 <=  inst_19_15;
        inst_14_12 <=  inst_14_12;
        inst_11_7  <=  inst_11_7 ;
        inst_6_0   <=  inst_6_0  ;
    end
end

// [SECOND STAGE]
always @(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        // 31:28 bits dec
        inst_31_28_equal_0000           <= 0;
        // 19:15 bits dec
        inst_19_15_equal_00000          <= 0;
        // 11:7 bits dec
        inst_11_7_equal_00000           <= 0;
        // 31:25 bits dec
        inst_31_25_equal_0000000        <= 0;
        inst_31_25_equal_0100000        <= 0;
        // 14:12 bits dec
        inst_14_12_equal_000            <= 0;
        inst_14_12_equal_001            <= 0;
        inst_14_12_equal_010            <= 0;
        inst_14_12_equal_011            <= 0;
        inst_14_12_equal_100            <= 0;
        inst_14_12_equal_101            <= 0;
        inst_14_12_equal_110            <= 0;
        inst_14_12_equal_111            <= 0;
        // 6:0 bits dec
        inst_6_0_equal_0000011          <= 0;
        inst_6_0_equal_0001111          <= 0;
        inst_6_0_equal_0010011          <= 0;
        inst_6_0_equal_0010111          <= 0;
        inst_6_0_equal_0100011          <= 0;
        inst_6_0_equal_0110011          <= 0;
        inst_6_0_equal_0110111          <= 0;
        inst_6_0_equal_1100011          <= 0;
        inst_6_0_equal_1100111          <= 0;
        inst_6_0_equal_1101111          <= 0;
        inst_6_0_equal_1110011          <= 0;
        // 31:20 bits dec
        inst_31_20_equal_000000000000   <= 0;
        inst_31_20_equal_000000000001   <= 0;
    end else if(cycle_cnt == 2) begin
        // 31:28 bits dec
        inst_31_28_equal_0000           <= (inst_31_28  == 'b0000           );
        // 19:15 bits dec
        inst_19_15_equal_00000          <= (inst_19_15  == 'b00000          );
        // 11:7 bits dec
        inst_11_7_equal_00000           <= (inst_11_7   == 'b00000          );
        // 31:25 bits dec
        inst_31_25_equal_0000000        <= (inst_31_25  == 'b0000000        );
        inst_31_25_equal_0100000        <= (inst_31_25  == 'b0100000        );
        // 14:12 bits dec
        inst_14_12_equal_000            <= (inst_14_12  == 'b000            );
        inst_14_12_equal_001            <= (inst_14_12  == 'b001            );
        inst_14_12_equal_010            <= (inst_14_12  == 'b010            );
        inst_14_12_equal_011            <= (inst_14_12  == 'b011            );
        inst_14_12_equal_100            <= (inst_14_12  == 'b100            );
        inst_14_12_equal_101            <= (inst_14_12  == 'b101            );
        inst_14_12_equal_110            <= (inst_14_12  == 'b110            );
        inst_14_12_equal_111            <= (inst_14_12  == 'b111            );
        // 6:0 bits dec
        inst_6_0_equal_0000011          <= (inst_6_0    == 'b0000011        );
        inst_6_0_equal_0001111          <= (inst_6_0    == 'b0001111        );
        inst_6_0_equal_0010011          <= (inst_6_0    == 'b0010011        );
        inst_6_0_equal_0010111          <= (inst_6_0    == 'b0010111        );
        inst_6_0_equal_0100011          <= (inst_6_0    == 'b0100011        );
        inst_6_0_equal_0110011          <= (inst_6_0    == 'b0110011        );
        inst_6_0_equal_0110111          <= (inst_6_0    == 'b0110111        );
        inst_6_0_equal_1100011          <= (inst_6_0    == 'b1100011        );
        inst_6_0_equal_1100111          <= (inst_6_0    == 'b1100111        );
        inst_6_0_equal_1101111          <= (inst_6_0    == 'b1101111        );
        inst_6_0_equal_1110011          <= (inst_6_0    == 'b1110011        );
        // 31:20 bits dec
        inst_31_20_equal_000000000000   <= (inst_31_20  == 'b000000000000   );
        inst_31_20_equal_000000000001   <= (inst_31_20  == 'b000000000001   );
    end
end

// [OUTPUT STAGE]
always @(posedge hclk or negedge hrstn) begin
    if(!hrstn || ifu_dec_stall) begin
        dec_lui         <=      0               ;
        dec_auipc       <=      0               ;
        dec_jal         <=      0               ;
        dec_jalr        <=      0               ;
        dec_beq         <=      0               ;
        dec_bne         <=      0               ;
        dec_blt         <=      0               ;
        dec_bge         <=      0               ;
        dec_bltu        <=      0               ;
        dec_bgeu        <=      0               ;
        dec_lb          <=      0               ;
        dec_lh          <=      0               ;
        dec_lw          <=      0               ;
        dec_lbu         <=      0               ;
        dec_lhu         <=      0               ;
        dec_sb          <=      0               ;
        dec_sh          <=      0               ;
        dec_sw          <=      0               ;
        dec_addi        <=      0               ;
        dec_slti        <=      0               ;
        dec_sltiu       <=      0               ;
        dec_xori        <=      0               ;
        dec_ori         <=      0               ;
        dec_andi        <=      0               ;
        dec_slli        <=      0               ;
        dec_srli        <=      0               ;
        dec_srai        <=      0               ;
        dec_add         <=      0               ;
        dec_sub         <=      0               ;
        dec_sll         <=      0               ;
        dec_slt         <=      0               ;
        dec_sltu        <=      0               ;
        dec_xor         <=      0               ;
        dec_srl         <=      0               ;
        dec_sra         <=      0               ;
        dec_or          <=      0               ;
        dec_and         <=      0               ;
        dec_fence       <=      0               ;
        dec_fence_i     <=      0               ;
        dec_ecall       <=      0               ;
        dec_ebreak      <=      0               ;
        dec_csrrw       <=      0               ;
        dec_csrrs       <=      0               ;
        dec_csrrc       <=      0               ;
        dec_csrrwi      <=      0               ;
        dec_csrrsi      <=      0               ;
        dec_csrrci      <=      0               ;
    end else if(cycle_cnt == 4) begin
        dec_lui         <=      mid_lui         ;
        dec_auipc       <=      mid_auipc       ;
        dec_jal         <=      mid_jal         ;
        dec_jalr        <=      mid_jalr        ;
        dec_beq         <=      mid_beq         ;
        dec_bne         <=      mid_bne         ;
        dec_blt         <=      mid_blt         ;
        dec_bge         <=      mid_bge         ;
        dec_bltu        <=      mid_bltu        ;
        dec_bgeu        <=      mid_bgeu        ;
        dec_lb          <=      mid_lb          ;
        dec_lh          <=      mid_lh          ;
        dec_lw          <=      mid_lw          ;
        dec_lbu         <=      mid_lbu         ;
        dec_lhu         <=      mid_lhu         ;
        dec_sb          <=      mid_sb          ;
        dec_sh          <=      mid_sh          ;
        dec_sw          <=      mid_sw          ;
        dec_addi        <=      mid_addi        ;
        dec_slti        <=      mid_slti        ;
        dec_sltiu       <=      mid_sltiu       ;
        dec_xori        <=      mid_xori        ;
        dec_ori         <=      mid_ori         ;
        dec_andi        <=      mid_andi        ;
        dec_slli        <=      mid_slli        ;
        dec_srli        <=      mid_srli        ;
        dec_srai        <=      mid_srai        ;
        dec_add         <=      mid_add         ;
        dec_sub         <=      mid_sub         ;
        dec_sll         <=      mid_sll         ;
        dec_slt         <=      mid_slt         ;
        dec_sltu        <=      mid_sltu        ;
        dec_xor         <=      mid_xor         ;
        dec_srl         <=      mid_srl         ;
        dec_sra         <=      mid_sra         ;
        dec_or          <=      mid_or          ;
        dec_and         <=      mid_and         ;
        dec_fence       <=      mid_fence       ;
        dec_fence_i     <=      mid_fence_i     ;
        dec_ecall       <=      mid_ecall       ;
        dec_ebreak      <=      mid_ebreak      ;
        dec_csrrw       <=      mid_csrrw       ;
        dec_csrrs       <=      mid_csrrs       ;
        dec_csrrc       <=      mid_csrrc       ;
        dec_csrrwi      <=      mid_csrrwi      ;
        dec_csrrsi      <=      mid_csrrsi      ;
        dec_csrrci      <=      mid_csrrci      ;
    end
end

// [OUTPUT STAGE]
always @(posedge hclk) begin
    if(!hrstn || ifu_dec_stall) begin
        dec_rs2         <=  0               ;
        dec_rs1         <=  0               ;
        dec_rd          <=  0               ;
        dec_imm_type_i  <=  0               ;
        dec_imm_type_s  <=  0               ;
        dec_imm_type_b  <=  0               ;
        dec_imm_type_u  <=  0               ;
        dec_imm_type_j  <=  0               ;
    end else if(cycle_cnt == 4) begin
        dec_rs2         <= inst_in[24:20]                                                       ;
        dec_rs1         <= inst_in[19:15]                                                       ;
        dec_rd          <= inst_in[11:7]                                                        ;
        dec_imm_type_i  <= inst_in[31:20]                                                       ;
        dec_imm_type_s  <= {inst_in[31:25], inst_in[11:7]}                                      ;
        dec_imm_type_b  <= {inst_in[31], inst_in[7], inst_in[30:25], inst_in[11:8], 1'b0}             ;
        dec_imm_type_u  <= inst_in[31:12]                                                       ;
        dec_imm_type_j  <= {inst_in[31], inst_in[19:12], inst_in[20], inst_in[30:21], 1'b0}     ;
    end
end

// [OUTPUT STAGE]
always @(posedge hclk) begin
    if(!hrstn || ifu_dec_stall) begin
        dec_upper_en    <=  0;
        dec_imm_en      <=  0;
        dec_reg_en      <=  0;
        dec_jump_en     <=  0;
        dec_branch_en   <=  0;
        dec_load_en     <=  0;
        dec_store_en    <=  0;
    end else if(cycle_cnt == 4) begin
        dec_upper_en    <=  mid_lui  | mid_auipc;
        dec_imm_en      <=  mid_addi | mid_slti | mid_sltiu | mid_xori |
                            mid_ori  | mid_andi | mid_slli  | mid_srli |
                            mid_srai;
        dec_reg_en      <=  mid_add  | mid_sub | mid_sll | mid_slt | 
                            mid_sltu | mid_xor | mid_srl | mid_sra |
                            mid_or   | mid_and ;
        dec_jump_en     <=  mid_jal  | mid_jalr;
        dec_branch_en   <=  mid_beq  | mid_bne | mid_blt | mid_bge |
                            mid_bltu | mid_bgeu;
        dec_load_en     <=  mid_lb   | mid_lh  | mid_lw  | mid_lbu |
                            mid_lhu  ;
        dec_store_en    <=  mid_sb   | mid_sh  | mid_sw;
    end
end

// inst_out
always @(posedge hclk or negedge hrstn) begin
    if(!hrstn || ifu_dec_stall) begin
        inst_out <= 0;
    end else if(cycle_cnt == 4) begin
        inst_out <= inst_in;
    end
end

endmodule