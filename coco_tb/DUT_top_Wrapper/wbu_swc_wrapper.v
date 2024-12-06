module wbu_swc_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input [4:0] mau_load_rd,
    input [31:0] mau_load_data,
    input mau_load_en,
    output [4:0] reg_waddr,
    output reg_wen,
    output [31:0] reg_wdata
);

    wbu_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .mau_load_rd(mau_load_rd),
        .mau_load_data(mau_load_data),
        .mau_load_en(mau_load_en),
        .reg_waddr(reg_waddr),
        .reg_wen(reg_wen),
        .reg_wdata(reg_wdata)
    );
    initial begin
        $dumpfile(".\vcds\wbu_swc.vcd");
        $dumpvars(0, wbu_swc_wrapper);
    end
endmodule
