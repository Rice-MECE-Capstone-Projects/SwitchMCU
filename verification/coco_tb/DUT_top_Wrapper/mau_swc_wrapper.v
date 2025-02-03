module mau_swc_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input hready,
    input hresp,
    input [31:0] hrdata,
    input [4:0] exu_load_rd,
    input [31:0] exu_load_base_addr,
    input [31:0] exu_load_offset,
    input exu_load_sext,
    input [1:0] exu_load_size,
    input exu_load_en,
    input [31:0] exu_store_addr,
    input [31:0] exu_store_data,
    input exu_store_en,
    input [1:0] exu_store_size,
    output reg [31:0] haddr,
    output reg hwrite,
    output reg [31:0] hwdata,
    output reg [2:0] hsize,
    output reg [2:0] hburst,
    output reg [6:0] hprot,
    output reg [1:0] htrans,
    output reg hmastlock,
    output reg [4:0] mau_load_rd,
    output reg [31:0] mau_load_data,
    output reg mau_load_en
);

    mau_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .hready(hready),
        .hresp(hresp),
        .hrdata(hrdata),
        .exu_load_rd(exu_load_rd),
        .exu_load_base_addr(exu_load_base_addr),
        .exu_load_offset(exu_load_offset),
        .exu_load_sext(exu_load_sext),
        .exu_load_size(exu_load_size),
        .exu_load_en(exu_load_en),
        .exu_store_addr(exu_store_addr),
        .exu_store_data(exu_store_data),
        .exu_store_en(exu_store_en),
        .exu_store_size(exu_store_size),
        .haddr(haddr),
        .hwrite(hwrite),
        .hwdata(hwdata),
        .hsize(hsize),
        .hburst(hburst),
        .hprot(hprot),
        .htrans(htrans),
        .hmastlock(hmastlock),
        .mau_load_rd(mau_load_rd),
        .mau_load_data(mau_load_data),
        .mau_load_en(mau_load_en)
    );
    initial begin
        $dumpfile("./vcds/mau_swc.vcd");
        $dumpvars(0, mau_swc_wrapper);
    end
endmodule
