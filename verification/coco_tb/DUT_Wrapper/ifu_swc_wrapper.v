module ifu_swc_wrapper (
    input hclk,
    input hrstn,
    input hready,
    input hresp,
    input [31:0] hrdata,
    input itcm_ready,
    input ifu_dec_stall,
    input reg [3:0] cycle_cnt,
    input pc_write,
    input [31:0] pc_wdata,
    output reg [31:0] haddr,
    output hwrite,
    output reg [31:0] hwdata,
    output reg [2:0] hsize,
    output reg [2:0] hburst,
    output reg [6:0] hprot,
    output reg [1:0] htrans,
    output reg hmastlock,
    output reg ifu_idle,
    output reg [31:0] pc,
    output reg [31:0] inst_out
);

    ifu_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .hready(hready),
        .hresp(hresp),
        .hrdata(hrdata),
        .itcm_ready(itcm_ready),
        .ifu_dec_stall(ifu_dec_stall),
        .cycle_cnt(cycle_cnt),
        .pc_write(pc_write),
        .pc_wdata(pc_wdata),
        .haddr(haddr),
        .hwrite(hwrite),
        .hwdata(hwdata),
        .hsize(hsize),
        .hburst(hburst),
        .hprot(hprot),
        .htrans(htrans),
        .hmastlock(hmastlock),
        .ifu_idle(ifu_idle),
        .pc(pc),
        .inst_out(inst_out)
    );
    initial begin
        $dumpfile(".\vcds\ifu_swc.vcd");
        $dumpvars(0, ifu_swc_wrapper);
    end
endmodule
