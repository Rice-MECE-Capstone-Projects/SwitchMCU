module exu_store_swc_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input dec_store_en,
    input dec_sb,
    input dec_sh,
    input dec_sw,
    input [11:0] dec_imm_type_s,
    input [4:0] dec_rs1,
    input [4:0] dec_rs2,
    input [31:0] reg_rdata_1,
    input [31:0] reg_rdata_2,
    input exu_stall,
    inout [4:0] reg_raddr_1,
    inout reg_ren_1,
    inout [4:0] reg_raddr_2,
    inout reg_ren_2,
    output reg [31:0] exu_store_addr,
    output reg [31:0] exu_store_data,
    output reg exu_store_en,
    output reg [1:0] exu_store_size
);

    exu_store_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .dec_store_en(dec_store_en),
        .dec_sb(dec_sb),
        .dec_sh(dec_sh),
        .dec_sw(dec_sw),
        .dec_imm_type_s(dec_imm_type_s),
        .dec_rs1(dec_rs1),
        .dec_rs2(dec_rs2),
        .reg_rdata_1(reg_rdata_1),
        .reg_rdata_2(reg_rdata_2),
        .exu_stall(exu_stall),
        .reg_raddr_1(reg_raddr_1),
        .reg_ren_1(reg_ren_1),
        .reg_raddr_2(reg_raddr_2),
        .reg_ren_2(reg_ren_2),
        .exu_store_addr(exu_store_addr),
        .exu_store_data(exu_store_data),
        .exu_store_en(exu_store_en),
        .exu_store_size(exu_store_size)
    );
    initial begin
        $dumpfile("./vcds/exu_store_swc.vcd");
        $dumpvars(0, exu_store_swc_wrapper);
    end
endmodule
