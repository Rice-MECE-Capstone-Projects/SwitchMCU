module core_top_swc_wrapper (
    input hclk,
    input hrstn,
    input itcm_hready,
    input itcm_hresp,
    input [31:0] itcm_hrdata,
    input dtcm_hready,
    input dtcm_hresp,
    input [31:0] dtcm_hrdata,
    input itcm_ready,
    output [31:0] itcm_haddr,
    output itcm_hwrite,
    output [31:0] itcm_hwdata,
    output [2:0] itcm_hsize,
    output [6:0] itcm_hprot,
    output [2:0] itcm_hburst,
    output [1:0] itcm_htrans,
    output itcm_hmastlock,
    output [31:0] dtcm_haddr,
    output dtcm_hwrite,
    output [31:0] dtcm_hwdata,
    output [2:0] dtcm_hsize,
    output [6:0] dtcm_hprot,
    output [2:0] dtcm_hburst,
    output [1:0] dtcm_htrans,
    output dtcm_hmastlock
);

    core_top_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .itcm_hready(itcm_hready),
        .itcm_hresp(itcm_hresp),
        .itcm_hrdata(itcm_hrdata),
        .dtcm_hready(dtcm_hready),
        .dtcm_hresp(dtcm_hresp),
        .dtcm_hrdata(dtcm_hrdata),
        .itcm_ready(itcm_ready),
        .itcm_haddr(itcm_haddr),
        .itcm_hwrite(itcm_hwrite),
        .itcm_hwdata(itcm_hwdata),
        .itcm_hsize(itcm_hsize),
        .itcm_hprot(itcm_hprot),
        .itcm_hburst(itcm_hburst),
        .itcm_htrans(itcm_htrans),
        .itcm_hmastlock(itcm_hmastlock),
        .dtcm_haddr(dtcm_haddr),
        .dtcm_hwrite(dtcm_hwrite),
        .dtcm_hwdata(dtcm_hwdata),
        .dtcm_hsize(dtcm_hsize),
        .dtcm_hprot(dtcm_hprot),
        .dtcm_hburst(dtcm_hburst),
        .dtcm_htrans(dtcm_htrans),
        .dtcm_hmastlock(dtcm_hmastlock)
    );
    initial begin
        $dumpfile("./vcds/core_top_swc.vcd");
        $dumpvars(0, core_top_swc_wrapper);
    end
endmodule
