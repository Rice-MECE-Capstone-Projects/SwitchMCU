module switch_mcu_decoder (
    in_clk,
    in_rst,
    in_inst,
    in_cycle_cnt,

    out_lui,
    out_auipc,
    out_jal,
    out_jalr,
    out_beq,
    out_bne,
    out_blt,
    out_bge,
    out_bltu,
    out_bgeu,
    out_lb,
    out_lh,
    out_lw,
    out_lbu,
    out_lhu,
    out_sb,
    out_sh,
    out_sw,
    out_addi,
    out_slti,
    out_sltiu,
    out_xori,
    out_ori,
    out_andi,
    out_slli,
    out_srli,
    out_srai,
    out_add,
    out_sub,
    out_sll,
    out_slt,
    out_sltu,
    out_xor,
    out_srl,
    out_sra,
    out_or,
    out_and,
    out_fence,
    out_fence_i,
    out_ecall,
    out_ebreak,
    out_csrrw,
    out_csrrs,
    out_csrrc,
    out_csrrwi,
    out_csrrsi,
    out_csrrci,
    out_type_u_en,
    out_type_i_en,
    out_type_r_en,
    out_type_j_en,
    out_rs2,
    out_rs1,
    out_rd,
    out_imm_type_i,
    out_imm_type_s,
    out_imm_type_b,
    out_imm_type_u,
    out_imm_type_j,
    in_stall,
);
// Global singals
input  wire         in_clk                  ;
input  wire         in_rst                  ;
// Cycle counter
input  wire [3:0]   in_cycle_cnt            ; 
// Input wires
input  wire [31:0]  in_inst                 ;
input  wire         in_stall                ;
// Output wires
output reg          out_lui                 ;
output reg          out_auipc               ;
output reg          out_jal                 ;
output reg          out_jalr                ;
output reg          out_beq                 ;
output reg          out_bne                 ;
output reg          out_blt                 ;
output reg          out_bge                 ;
output reg          out_bltu                ;
output reg          out_bgeu                ;
output reg          out_lb                  ;
output reg          out_lh                  ;
output reg          out_lw                  ;
output reg          out_lbu                 ;
output reg          out_lhu                 ;
output reg          out_sb                  ;
output reg          out_sh                  ;
output reg          out_sw                  ;
output reg          out_addi                ;
output reg          out_slti                ;
output reg          out_sltiu               ;
output reg          out_xori                ;
output reg          out_ori                 ;
output reg          out_andi                ;
output reg          out_slli                ;
output reg          out_srli                ;
output reg          out_srai                ;
output reg          out_add                 ;
output reg          out_sub                 ;
output reg          out_sll                 ;
output reg          out_slt                 ;
output reg          out_sltu                ;
output reg          out_xor                 ;
output reg          out_srl                 ;
output reg          out_sra                 ;
output reg          out_or                  ;
output reg          out_and                 ;
output reg          out_fence               ;
output reg          out_fence_i             ;
output reg          out_ecall               ;
output reg          out_ebreak              ;
output reg          out_csrrw               ;    
output reg          out_csrrs               ;
output reg          out_csrrc               ;
output reg          out_csrrwi              ;
output reg          out_csrrsi              ;
output reg          out_csrrci              ;
output reg          out_type_u_en           ;
output reg          out_type_i_en           ;
output reg          out_type_r_en           ;
output reg          out_type_j_en           ;
output reg  [4:0]   out_rs2                 ;
output reg  [4:0]   out_rs1                 ;
output reg  [4:0]   out_rd                  ;
output reg  [11:0]  out_imm_type_i          ;
output reg  [11:0]  out_imm_type_s          ;
output reg  [11:0]  out_imm_type_b          ;
output reg  [19:0]  out_imm_type_u          ;
output reg  [19:0]  out_imm_type_j          ;

// Extract parts from instructions
reg  [3:0]  inst_31_20                      ;
reg  [3:0]  inst_31_28                      ;
reg  [3:0]  inst_19_15                      ;
reg  [3:0]  inst_11_7                       ;
reg  [6:0]  inst_31_25                      ;
reg  [2:0]  inst_14_12                      ;
reg  [6:0]  inst_6_0                        ;
// 31:20 bits decoder
reg         inst_31_20_equal_000000000000   ;
reg         inst_31_20_equal_000000000001   ;
// 31:28 bits decoder
reg         inst_31_28_equal_0000           ;
// 19:15 bits decoder
reg         inst_19_15_equal_00000          ;
// 11:7 bits decoder
reg  inst_11_7_equal_00000                  ;
// 31:25 bits decoder
reg         inst_31_25_equal_0000000        ;
reg         inst_31_25_equal_0100000        ;
// 14:12 bits decoder
reg         inst_14_12_equal_000            ;
reg         inst_14_12_equal_001            ;
reg         inst_14_12_equal_010            ;
reg         inst_14_12_equal_011            ;
reg         inst_14_12_equal_100            ;
reg         inst_14_12_equal_101            ;
reg         inst_14_12_equal_110            ;
reg         inst_14_12_equal_111            ;
// 6:0 bits decoder
reg         inst_6_0_equal_1100111          ;
reg         inst_6_0_equal_0000011          ;
reg         inst_6_0_equal_0100011          ;
reg         inst_6_0_equal_0010011          ;
reg         inst_6_0_equal_0110111          ;
reg         inst_6_0_equal_0010111          ;
reg         inst_6_0_equal_1101111          ;
reg         inst_6_0_equal_0110011          ;
reg         inst_6_0_equal_0001111          ;
reg         inst_6_0_equal_1110011          ;
// Middle sigs
// Decode with 6:0 bits
wire        comb_lui      = (inst_6_0_equal_0110111);
wire        comb_auipc    = (inst_6_0_equal_0010111);
wire        comb_jal      = (inst_6_0_equal_1101111);
// Decode with 14:12 and 6:0 bits
wire        comb_jalr     = (inst_14_12_equal_000 & inst_6_0_equal_1100111);
wire        comb_beq      = (inst_14_12_equal_000 & inst_6_0_equal_1100111);
wire        comb_bne      = (inst_14_12_equal_001 & inst_6_0_equal_1100111);
wire        comb_blt      = (inst_14_12_equal_010 & inst_6_0_equal_1100111);
wire        comb_bge      = (inst_14_12_equal_011 & inst_6_0_equal_1100111);
wire        comb_bltu     = (inst_14_12_equal_100 & inst_6_0_equal_1100111);
wire        comb_bgeu     = (inst_14_12_equal_111 & inst_6_0_equal_1100111);
// ---
wire        comb_lb       = (inst_14_12_equal_000 & inst_6_0_equal_0000011);
wire        comb_lh       = (inst_14_12_equal_001 & inst_6_0_equal_0000011);
wire        comb_lw       = (inst_14_12_equal_010 & inst_6_0_equal_0000011);
wire        comb_lbu      = (inst_14_12_equal_100 & inst_6_0_equal_0000011);
wire        comb_lhu      = (inst_14_12_equal_101 & inst_6_0_equal_0000011);
// ---
wire        comb_sb       = (inst_14_12_equal_000 & inst_6_0_equal_0100011);
wire        comb_sh       = (inst_14_12_equal_001 & inst_6_0_equal_0100011);
wire        comb_sw       = (inst_14_12_equal_010 & inst_6_0_equal_0100011);
// ---
wire        comb_addi     = (inst_14_12_equal_000 & inst_6_0_equal_0010011);
wire        comb_slti     = (inst_14_12_equal_010 & inst_6_0_equal_0010011);
wire        comb_sltiu    = (inst_14_12_equal_011 & inst_6_0_equal_0010011);
wire        comb_xori     = (inst_14_12_equal_100 & inst_6_0_equal_0010011);
wire        comb_ori      = (inst_14_12_equal_110 & inst_6_0_equal_0010011);
wire        comb_andi     = (inst_14_12_equal_111 & inst_6_0_equal_0010011);
// ---
wire        comb_csrrw    = (inst_14_12_equal_001 & inst_6_0_equal_1110011);
wire        comb_csrrs    = (inst_14_12_equal_010 & inst_6_0_equal_1110011);
wire        comb_csrrc    = (inst_14_12_equal_011 & inst_6_0_equal_1110011);
wire        comb_csrrwi   = (inst_14_12_equal_101 & inst_6_0_equal_1110011);
wire        comb_csrrsi   = (inst_14_12_equal_110 & inst_6_0_equal_1110011);
wire        comb_csrrci   = (inst_14_12_equal_111 & inst_6_0_equal_1110011);
// Decode with 31:25 , 14:12 and 6:0 bits
wire        comb_slli     = (inst_31_25_equal_0000000 & inst_14_12_equal_001 & inst_6_0_equal_0010011);
wire        comb_srli     = (inst_31_25_equal_0000000 & inst_14_12_equal_101 & inst_6_0_equal_0010011);
wire        comb_srai     = (inst_31_25_equal_0100000 & inst_14_12_equal_101 & inst_6_0_equal_0010011);
wire        comb_add      = (inst_31_25_equal_0000000 & inst_14_12_equal_000 & inst_6_0_equal_0110011);
wire        comb_sub      = (inst_31_25_equal_0100000 & inst_14_12_equal_000 & inst_6_0_equal_0110011);
wire        comb_sll      = (inst_31_25_equal_0000000 & inst_14_12_equal_001 & inst_6_0_equal_0110011);
wire        comb_slt      = (inst_31_25_equal_0000000 & inst_14_12_equal_010 & inst_6_0_equal_0110011);
wire        comb_sltu     = (inst_31_25_equal_0000000 & inst_14_12_equal_011 & inst_6_0_equal_0110011);
wire        comb_xor      = (inst_31_25_equal_0000000 & inst_14_12_equal_100 & inst_6_0_equal_0110011);
wire        comb_srl      = (inst_31_25_equal_0000000 & inst_14_12_equal_101 & inst_6_0_equal_0110011);
wire        comb_sra      = (inst_31_25_equal_0100000 & inst_14_12_equal_101 & inst_6_0_equal_0110011);
wire        comb_or       = (inst_31_25_equal_0000000 & inst_14_12_equal_110 & inst_6_0_equal_0110011);
wire        comb_and      = (inst_31_25_equal_0000000 & inst_14_12_equal_111 & inst_6_0_equal_0110011);
// Decode with 31:25 , 19:15 , 14:12 , 11:7 and 6:0
wire        comb_fence    = (inst_31_28_equal_0000 & inst_19_15_equal_00000 & inst_14_12_equal_000 & inst_11_7_equal_00000 & inst_6_0_equal_0001111);
// Decode with ALL bits
wire        comb_fence_i  = (inst_31_20_equal_000000000000 & inst_19_15_equal_00000 & inst_14_12_equal_001 & inst_11_7_equal_00000 & inst_6_0_equal_0001111);
wire        comb_ecall    = (inst_31_20_equal_000000000000 & inst_19_15_equal_00000 & inst_14_12_equal_000 & inst_11_7_equal_00000 & inst_6_0_equal_1110011);
wire        comb_ebreak   = (inst_31_20_equal_000000000001 & inst_19_15_equal_00000 & inst_14_12_equal_000 & inst_11_7_equal_00000 & inst_6_0_equal_1110011);

// [FIRST STAGE]
always @(posedge in_clk or negedge in_rst) begin
    if(!in_rst) begin
        inst_31_20 <=  0;
        inst_31_28 <=  0;
        inst_19_15 <=  0;
        inst_11_7  <=  0;
        inst_31_25 <=  0;
        inst_14_12 <=  0;
        inst_6_0   <=  0;
    end else if(in_cycle_cnt == 1) begin
        inst_31_20 <= in_inst[31:20];
        inst_31_28 <= in_inst[31:28];
        inst_19_15 <= in_inst[19:15];
        inst_11_7  <= in_inst[11:7] ;
        inst_31_25 <= in_inst[31:25];
        inst_14_12 <= in_inst[14:12];
        inst_6_0   <= in_inst[6:0]  ;
    end else begin
        inst_31_20 <=  inst_31_20;
        inst_31_28 <=  inst_31_28;
        inst_19_15 <=  inst_19_15;
        inst_11_7  <=  inst_11_7 ;
        inst_31_25 <=  inst_31_25;
        inst_14_12 <=  inst_14_12;
        inst_6_0   <=  inst_6_0  ;
    end
end

// [SECOND STAGE]
always @(posedge in_clk or negedge in_rst) begin
    if(!in_rst) begin
        // 31:20 bits decoder
        inst_31_20_equal_000000000000   <= 0;
        inst_31_20_equal_000000000001   <= 0;
        // 31:28 bits decoder
        inst_31_28_equal_0000           <= 0;
        // 19:15 bits decoder
        inst_19_15_equal_00000          <= 0;
        // 11:7 bits decoder
        inst_11_7_equal_00000           <= 0;
        // 31:25 bits decoder
        inst_31_25_equal_0000000        <= 0;
        inst_31_25_equal_0100000        <= 0;
        // 14:12 bits decoder
        inst_14_12_equal_000            <= 0;
        inst_14_12_equal_001            <= 0;
        inst_14_12_equal_010            <= 0;
        inst_14_12_equal_011            <= 0;
        inst_14_12_equal_100            <= 0;
        inst_14_12_equal_101            <= 0;
        inst_14_12_equal_110            <= 0;
        inst_14_12_equal_111            <= 0;
        // 6:0 bits decoder
        inst_6_0_equal_1100111          <= 0;
        inst_6_0_equal_0000011          <= 0;
        inst_6_0_equal_0100011          <= 0;
        inst_6_0_equal_0010011          <= 0;
        inst_6_0_equal_0110111          <= 0;
        inst_6_0_equal_0010111          <= 0;
        inst_6_0_equal_1101111          <= 0;
        inst_6_0_equal_0110011          <= 0;
        inst_6_0_equal_0001111          <= 0;
        inst_6_0_equal_1110011          <= 0;
    end else if(in_cycle_cnt == 2) begin
        // 31:20 bits decoder
        inst_31_20_equal_000000000000   <= (inst_31_20 == 'b000000000000);
        inst_31_20_equal_000000000001   <= (inst_31_20 == 'b000000000001);
        // 31:28 bits decoder
        inst_31_28_equal_0000           <= (inst_31_28 == 'b0000);
        // 19:15 bits decoder
        inst_19_15_equal_00000          <= (inst_19_15 == 'b00000);
        // 11:7 bits decoder
        inst_11_7_equal_00000           <= (inst_11_7 == 'b00000);
        // 31:25 bits decoder
        inst_31_25_equal_0000000        <= (inst_31_25 == 'b0000000);
        inst_31_25_equal_0100000        <= (inst_31_25 == 'b0100000);
        // 14:12 bits decoder
        inst_14_12_equal_000            <= (inst_14_12 == 'b000);
        inst_14_12_equal_001            <= (inst_14_12 == 'b001);
        inst_14_12_equal_010            <= (inst_14_12 == 'b010);
        inst_14_12_equal_011            <= (inst_14_12 == 'b011);
        inst_14_12_equal_100            <= (inst_14_12 == 'b100);
        inst_14_12_equal_101            <= (inst_14_12 == 'b101);
        inst_14_12_equal_110            <= (inst_14_12 == 'b110);
        inst_14_12_equal_111            <= (inst_14_12 == 'b111);
        // 6:0 bits decoder
        inst_6_0_equal_1100111          <= (inst_6_0 == 'b1100111);
        inst_6_0_equal_0000011          <= (inst_6_0 == 'b0000011);
        inst_6_0_equal_0100011          <= (inst_6_0 == 'b0100011);
        inst_6_0_equal_0010011          <= (inst_6_0 == 'b0010011);
        inst_6_0_equal_0110111          <= (inst_6_0 == 'b0110111);
        inst_6_0_equal_0010111          <= (inst_6_0 == 'b0010111);
        inst_6_0_equal_1101111          <= (inst_6_0 == 'b1101111);
        inst_6_0_equal_0110011          <= (inst_6_0 == 'b0110011);
        inst_6_0_equal_0001111          <= (inst_6_0 == 'b0001111);
        inst_6_0_equal_1110011          <= (inst_6_0 == 'b1110011);
    end else begin
        // 31:20 bits decoder
        inst_31_20_equal_000000000000   <= inst_31_20_equal_000000000000;
        inst_31_20_equal_000000000001   <= inst_31_20_equal_000000000001;
        // 31:28 bits decoder
        inst_31_28_equal_0000           <= inst_31_28_equal_0000;
        // 19:15 bits decoder
        inst_19_15_equal_00000          <= inst_19_15_equal_00000;
        // 11:7 bits decoder
        inst_11_7_equal_00000           <= inst_11_7_equal_00000;
        // 31:25 bits decoder
        inst_31_25_equal_0000000        <= inst_31_25_equal_0000000;
        inst_31_25_equal_0100000        <= inst_31_25_equal_0100000;
        // 14:12 bits decoder
        inst_14_12_equal_000            <= inst_14_12_equal_000;
        inst_14_12_equal_001            <= inst_14_12_equal_001;
        inst_14_12_equal_010            <= inst_14_12_equal_010;
        inst_14_12_equal_011            <= inst_14_12_equal_011;
        inst_14_12_equal_100            <= inst_14_12_equal_100;
        inst_14_12_equal_101            <= inst_14_12_equal_101;
        inst_14_12_equal_110            <= inst_14_12_equal_110;
        inst_14_12_equal_111            <= inst_14_12_equal_111;
        // 6:0 bits decoder
        inst_6_0_equal_1100111          <= inst_6_0_equal_1100111;
        inst_6_0_equal_0000011          <= inst_6_0_equal_0000011;
        inst_6_0_equal_0100011          <= inst_6_0_equal_0100011;
        inst_6_0_equal_0010011          <= inst_6_0_equal_0010011;
        inst_6_0_equal_0110111          <= inst_6_0_equal_0110111;
        inst_6_0_equal_0010111          <= inst_6_0_equal_0010111;
        inst_6_0_equal_1101111          <= inst_6_0_equal_1101111;
        inst_6_0_equal_0110011          <= inst_6_0_equal_0110011;
        inst_6_0_equal_0001111          <= inst_6_0_equal_0001111;
        inst_6_0_equal_1110011          <= inst_6_0_equal_1110011;
    end
end

// [OUTPUT STAGE]
always @(posedge in_clk or negedge in_rst) begin
    if(!in_rst) begin
        // Decode with 6:0 bits
        out_lui      <= 0;
        out_auipc    <= 0;
        out_jal      <= 0;
        // Decode with 14:12 and 6:0 bits
        out_jalr     <= 0;
        out_beq      <= 0;
        out_bne      <= 0;
        out_blt      <= 0;
        out_bge      <= 0;
        out_bltu     <= 0;
        out_bgeu     <= 0;
        // ---
        out_lb       <= 0;
        out_lh       <= 0;
        out_lw       <= 0;
        out_lbu      <= 0;
        out_lhu      <= 0;
        // ---
        out_sb       <= 0;
        out_sh       <= 0;
        out_sw       <= 0;
        // ---
        out_addi     <= 0;
        out_slti     <= 0;
        out_sltiu    <= 0;
        out_xori     <= 0;
        out_ori      <= 0;
        out_andi     <= 0;
        // ---
        out_csrrw    <= 0;
        out_csrrs    <= 0;
        out_csrrc    <= 0;
        out_csrrwi   <= 0;
        out_csrrsi   <= 0;
        out_csrrci   <= 0;
        // Decode with 31:25 , 14:12 and 6:0 bits
        out_slli     <= 0;
        out_srli     <= 0;
        out_srai     <= 0;
        out_add      <= 0;
        out_sub      <= 0;
        out_sll      <= 0;
        out_slt      <= 0;
        out_sltu     <= 0;
        out_xor      <= 0;
        out_srl      <= 0;
        out_sra      <= 0;
        out_or       <= 0;
        out_and      <= 0;
        // Decode with 31:25 , 19:15 , 14:12 , 11:7 and 6:0
        out_fence    <= 0;
        // Decode with ALL bits
        out_fence_i  <= 0;
        out_ecall    <= 0;
        out_ebreak   <= 0;
    end else if(in_cycle_cnt == 0) begin
        // Decode with 6:0 bits
        out_lui      <= comb_lui          ;
        out_auipc    <= comb_auipc        ;
        out_jal      <= comb_jal          ;
        // Decode with 14:12 and 6:0 bits
        out_jalr     <= comb_jalr         ;
        out_beq      <= comb_beq          ;
        out_bne      <= comb_bne          ;
        out_blt      <= comb_blt          ;
        out_bge      <= comb_bge          ;
        out_bltu     <= comb_bltu         ;
        out_bgeu     <= comb_bgeu         ;
        // ---
        out_lb       <= comb_lb           ;
        out_lh       <= comb_lh           ;
        out_lw       <= comb_lw           ;
        out_lbu      <= comb_lbu          ;
        out_lhu      <= comb_lhu          ;
        // ---
        out_sb       <= comb_sb           ;
        out_sh       <= comb_sh           ;
        out_sw       <= comb_sw           ;
        // ---
        out_addi     <= comb_addi         ;
        out_slti     <= comb_slti         ;
        out_sltiu    <= comb_sltiu        ;
        out_xori     <= comb_xori         ;
        out_ori      <= comb_ori          ;
        out_andi     <= comb_andi         ;
        // ---
        out_csrrw    <= comb_csrrw        ;
        out_csrrs    <= comb_csrrs        ;
        out_csrrc    <= comb_csrrc        ;
        out_csrrwi   <= comb_csrrwi       ;
        out_csrrsi   <= comb_csrrsi       ;
        out_csrrci   <= comb_csrrci       ;
        // Decode with 31:25 , 14:12 and 6:0 bits
        out_slli     <= comb_slli         ;
        out_srli     <= comb_srli         ;
        out_srai     <= comb_srai         ;
        out_add      <= comb_add          ;
        out_sub      <= comb_sub          ;
        out_sll      <= comb_sll          ;
        out_slt      <= comb_slt          ;
        out_sltu     <= comb_sltu         ;
        out_xor      <= comb_xor          ;
        out_srl      <= comb_srl          ;
        out_sra      <= comb_sra          ;
        out_or       <= comb_or           ;
        out_and      <= comb_and          ;
        // Decode with 31:25 , 19:15 , 14:12 , 11:7 and 6:0
        out_fence    <= comb_fence;
        // Decode with ALL bits
        out_fence_i  <= comb_fence_i      ;
        out_ecall    <= comb_ecall        ;
        out_ebreak   <= comb_ebreak       ;
    end else begin
        // Decode with 6:0 bits
        out_lui      <= out_lui          ;
        out_auipc    <= out_auipc        ;
        out_jal      <= out_jal          ;
        // Decode with 14:12 and 6:0 bits
        out_jalr     <= out_jalr         ;
        out_beq      <= out_beq          ;
        out_bne      <= out_bne          ;
        out_blt      <= out_blt          ;
        out_bge      <= out_bge          ;
        out_bltu     <= out_bltu         ;
        out_bgeu     <= out_bgeu         ;
        // ---
        out_lb       <= out_lb           ;
        out_lh       <= out_lh           ;
        out_lw       <= out_lw           ;
        out_lbu      <= out_lbu          ;
        out_lhu      <= out_lhu          ;
        // ---
        out_sb       <= out_sb           ;
        out_sh       <= out_sh           ;
        out_sw       <= out_sw           ;
        // ---
        out_addi     <= out_addi         ;
        out_slti     <= out_slti         ;
        out_sltiu    <= out_sltiu        ;
        out_xori     <= out_xori         ;
        out_ori      <= out_ori          ;
        out_andi     <= out_andi         ;
        // ---
        out_csrrw    <= out_csrrw        ;
        out_csrrs    <= out_csrrs        ;
        out_csrrc    <= out_csrrc        ;
        out_csrrwi   <= out_csrrwi       ;
        out_csrrsi   <= out_csrrsi       ;
        out_csrrci   <= out_csrrci       ;
        // Decode with 31:25 , 14:12 and 6:0 bits
        out_slli     <= out_slli         ;
        out_srli     <= out_srli         ;
        out_srai     <= out_srai         ;
        out_add      <= out_add          ;
        out_sub      <= out_sub          ;
        out_sll      <= out_sll          ;
        out_slt      <= out_slt          ;
        out_sltu     <= out_sltu         ;
        out_xor      <= out_xor          ;
        out_srl      <= out_srl          ;
        out_sra      <= out_sra          ;
        out_or       <= out_or           ;
        out_and      <= out_and          ;
        // Decode with 31:25 , 19:15 , 14:12 , 11:7 and 6:0
        out_fence    <= out_fence;
        // Decode with ALL bits
        out_fence_i  <= out_fence_i      ;
        out_ecall    <= out_ecall        ;
        out_ebreak   <= out_ebreak       ;
    end
end

// [OUTPUT STAGE]
always @(posedge in_clk or negedge in_rst) begin
    if(!in_rst) begin
        out_rs2         <=  0;
        out_rs1         <=  0;
        out_rd          <=  0;
        out_imm_type_i  <=  0;
        out_imm_type_s  <=  0;
        out_imm_type_b  <=  0;
        out_imm_type_u  <=  0;
        out_imm_type_j  <=  0;
    end else if(in_cycle_cnt ==0) begin
        out_rs2         <= in_inst [24:20]  ;
        out_rs1         <= in_inst [19:15]  ;
        out_rd          <= in_inst [11:7]   ;
        out_imm_type_i  <= in_inst [31:20]  ;
        out_imm_type_s  <= {in_inst[31:25], in_inst[11:7]};
        out_imm_type_b  <= {in_inst[31], in_inst[7], in_inst[30:25], in_inst[11:8]};
        out_imm_type_u  <= in_inst [31:12]  ;
        out_imm_type_j  <= {in_inst[31], in_inst[19:12], in_inst[20], in_inst[30:21], 1'b0};
    end else begin
        out_rs2         <=  out_rs2       ;
        out_rs1         <=  out_rs1       ;
        out_rd          <=  out_rd        ;
        out_imm_type_i  <=  out_imm_type_i;
        out_imm_type_s  <=  out_imm_type_s;
        out_imm_type_b  <=  out_imm_type_b;
        out_imm_type_u  <=  out_imm_type_u;
        out_imm_type_j  <=  out_imm_type_j;
    end
end

// [OUTPUT STAGE]
always @(posedge in_clk or negedge in_rst) begin
    if(!in_rst) begin
        out_type_u_en <= 0;
        out_type_i_en <= 0;
        out_type_r_en <= 0;
        out_type_j_en <= 0;
    end else if(in_cycle_cnt == 0) begin
        out_type_u_en <=   (comb_lui  | comb_auipc) & !in_stall ;
        out_type_i_en <=   (comb_addi | comb_slti | comb_sltiu | comb_xori |
                            comb_ori  | comb_andi | comb_slli  | comb_srli |
                            comb_srai) & !in_stall ;
        out_type_r_en <=   (comb_add  | comb_sub | comb_sll | comb_slt | 
                            comb_sltu | comb_xor | comb_srl | comb_sra |
                            comb_or   | comb_and) & !in_stall;
        out_type_j_en <=   (comb_jal  | comb_jalr) & !in_stall ;
    end else begin
        out_type_u_en <= out_type_u_en;
        out_type_i_en <= out_type_i_en;
        out_type_r_en <= out_type_r_en;
        out_type_j_en <= out_type_j_en;
    end
end

endmodule