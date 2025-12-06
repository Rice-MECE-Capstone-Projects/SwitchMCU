module exu_imm_swc_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input dec_branch_en,
    input dec_addi,
    input dec_slti,
    input dec_sltiu,
    input dec_xori,
    input dec_ori,
    input dec_andi,
    input dec_slli,
    input dec_srli,
    input dec_srai,
    input [11:0] dec_imm_type_i,
    input [4:0] dec_rd,
    input [4:0] dec_rs1,
    input [31:0] pc,
    input [31:0] reg_rdata_1,
    inout [4:0] reg_waddr,
    inout reg_wen,
    inout [31:0] reg_wdata,
    inout [4:0] reg_raddr_1,
    inout reg_ren_1
);

    exu_imm_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .dec_branch_en(dec_branch_en),
        .dec_addi(dec_addi),
        .dec_slti(dec_slti),
        .dec_sltiu(dec_sltiu),
        .dec_xori(dec_xori),
        .dec_ori(dec_ori),
        .dec_andi(dec_andi),
        .dec_slli(dec_slli),
        .dec_srli(dec_srli),
        .dec_srai(dec_srai),
        .dec_imm_type_i(dec_imm_type_i),
        .dec_rd(dec_rd),
        .dec_rs1(dec_rs1),
        .pc(pc),
        .reg_rdata_1(reg_rdata_1),
        .reg_waddr(reg_waddr),
        .reg_wen(reg_wen),
        .reg_wdata(reg_wdata),
        .reg_raddr_1(reg_raddr_1),
        .reg_ren_1(reg_ren_1)
    );
    initial begin
        $dumpfile("./vcds/exu_imm_swc.vcd");
        $dumpvars(0, exu_imm_swc_wrapper);
    end
endmodule
