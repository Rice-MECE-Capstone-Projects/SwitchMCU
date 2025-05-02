module exu_jump_swc_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input dec_jump_en,
    input dec_jal,
    input dec_jalr,
    input [11:0] dec_imm_type_i,
    input [20:0] dec_imm_type_j,
    input [4:0] dec_rd,
    input [4:0] dec_rs1,
    input [31:0] pc,
    input [31:0] reg_rdata_1,
    inout pc_write,
    inout [31:0] pc_wdata,
    inout [1:0] flush,
    inout [4:0] reg_waddr,
    inout reg_wen,
    inout [31:0] reg_wdata,
    inout [4:0] reg_raddr_1,
    inout reg_ren_1
);

    exu_jump_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .dec_jump_en(dec_jump_en),
        .dec_jal(dec_jal),
        .dec_jalr(dec_jalr),
        .dec_imm_type_i(dec_imm_type_i),
        .dec_imm_type_j(dec_imm_type_j),
        .dec_rd(dec_rd),
        .dec_rs1(dec_rs1),
        .pc(pc),
        .reg_rdata_1(reg_rdata_1),
        .pc_write(pc_write),
        .pc_wdata(pc_wdata),
        .flush(flush),
        .reg_waddr(reg_waddr),
        .reg_wen(reg_wen),
        .reg_wdata(reg_wdata),
        .reg_raddr_1(reg_raddr_1),
        .reg_ren_1(reg_ren_1)
    );
    initial begin
        $dumpfile("./vcds/exu_jump_swc.vcd");
        $dumpvars(0, exu_jump_swc_wrapper);
    end
endmodule
