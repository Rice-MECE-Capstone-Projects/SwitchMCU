module exu_load_swc_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input dec_load_en,
    input dec_lb,
    input dec_lh,
    input dec_lw,
    input dec_lbu,
    input dec_lhu,
    input [11:0] dec_imm_type_i,
    input [4:0] dec_rd,
    input [4:0] dec_rs1,
    input [31:0] reg_rdata_1,
    inout [4:0] reg_raddr_1,
    inout reg_ren_1,
    output ifu_dec_stall,
    output reg [4:0] exu_load_rd,
    output reg [31:0] exu_load_base_addr,
    output reg [31:0] exu_load_offset,
    output reg exu_load_sext,
    output reg [1:0] exu_load_size,
    output reg exu_load_en
);

    exu_load_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .dec_load_en(dec_load_en),
        .dec_lb(dec_lb),
        .dec_lh(dec_lh),
        .dec_lw(dec_lw),
        .dec_lbu(dec_lbu),
        .dec_lhu(dec_lhu),
        .dec_imm_type_i(dec_imm_type_i),
        .dec_rd(dec_rd),
        .dec_rs1(dec_rs1),
        .reg_rdata_1(reg_rdata_1),
        .reg_raddr_1(reg_raddr_1),
        .reg_ren_1(reg_ren_1),
        .ifu_dec_stall(ifu_dec_stall),
        .exu_load_rd(exu_load_rd),
        .exu_load_base_addr(exu_load_base_addr),
        .exu_load_offset(exu_load_offset),
        .exu_load_sext(exu_load_sext),
        .exu_load_size(exu_load_size),
        .exu_load_en(exu_load_en)
    );
    initial begin
        $dumpfile("./vcds/exu_load_swc.vcd");
        $dumpvars(0, exu_load_swc_wrapper);
    end
endmodule
