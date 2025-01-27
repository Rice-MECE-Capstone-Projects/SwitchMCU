module exu_branch_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input dec_branch_en,
    input dec_beq,
    input dec_bne,
    input dec_blt,
    input dec_bge,
    input dec_bltu,
    input dec_bgeu,
    input [11:0] dec_imm_type_b,
    input [4:0] dec_rs1,
    input [4:0] dec_rs2,
    input [31:0] pc,
    input [31:0] reg_rdata_1,
    input [31:0] reg_rdata_2,
    inout [1:0] flush,
    inout pc_write,
    inout [31:0] pc_wdata,
    inout [4:0] reg_raddr_1,
    inout reg_ren_1,
    inout [4:0] reg_raddr_2,
    inout reg_ren_2
);

    exu_branch_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .dec_branch_en(dec_branch_en),
        .dec_beq(dec_beq),
        .dec_bne(dec_bne),
        .dec_blt(dec_blt),
        .dec_bge(dec_bge),
        .dec_bltu(dec_bltu),
        .dec_bgeu(dec_bgeu),
        .dec_imm_type_b(dec_imm_type_b),
        .dec_rs1(dec_rs1),
        .dec_rs2(dec_rs2),
        .pc(pc),
        .reg_rdata_1(reg_rdata_1),
        .reg_rdata_2(reg_rdata_2),
        .flush(flush),
        .pc_write(pc_write),
        .pc_wdata(pc_wdata),
        .reg_raddr_1(reg_raddr_1),
        .reg_ren_1(reg_ren_1),
        .reg_raddr_2(reg_raddr_2),
        .reg_ren_2(reg_ren_2)
    );
    initial begin
        $dumpfile(".\vcds\exu_branch_swc.vcd");
        $dumpvars(0, exu_branch_wrapper);
    end
endmodule
