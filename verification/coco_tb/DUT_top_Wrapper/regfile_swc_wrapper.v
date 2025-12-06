module regfile_swc_wrapper (
    input hclk,
    input hrstn,
    input [4:0] reg_waddr,
    input [31:0] reg_wdata,
    input reg_wen,
    input [4:0] reg_raddr_1,
    input reg_ren_1,
    input [4:0] reg_raddr_2,
    input reg_ren_2,
    output reg [31:0] reg_rdata_1,
    output reg [31:0] reg_rdata_2
);

    regfile_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .reg_waddr(reg_waddr),
        .reg_wdata(reg_wdata),
        .reg_wen(reg_wen),
        .reg_raddr_1(reg_raddr_1),
        .reg_ren_1(reg_ren_1),
        .reg_raddr_2(reg_raddr_2),
        .reg_ren_2(reg_ren_2),
        .reg_rdata_1(reg_rdata_1),
        .reg_rdata_2(reg_rdata_2)
    );
    initial begin
        $dumpfile(".\vcds\regfile_swc.vcd");
        $dumpvars(0, regfile_swc_wrapper);
    end
endmodule
