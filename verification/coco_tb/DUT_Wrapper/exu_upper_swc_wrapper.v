module exu_upper_swc_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input dec_upper_en,
    input dec_lui,
    input dec_auipc,
    input [19:0] dec_imm_type_u,
    input [4:0] dec_rd,
    input [31:0] pc,
    input exu_stall,
    inout [4:0] reg_waddr,
    inout reg_wen,
    inout [31:0] reg_wdata
);

    exu_upper_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .dec_upper_en(dec_upper_en),
        .dec_lui(dec_lui),
        .dec_auipc(dec_auipc),
        .dec_imm_type_u(dec_imm_type_u),
        .dec_rd(dec_rd),
        .pc(pc),
        .exu_stall(exu_stall),
        .reg_waddr(reg_waddr),
        .reg_wen(reg_wen),
        .reg_wdata(reg_wdata)
    );
    initial begin
        $dumpfile("./vcds/exu_upper_swc.vcd");
        $dumpvars(0, exu_upper_swc_wrapper);
    end
endmodule
