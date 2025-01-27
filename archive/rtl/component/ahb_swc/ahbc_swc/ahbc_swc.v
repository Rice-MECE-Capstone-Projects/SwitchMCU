module ahb_top(
    input           hclk,
    input           hrstn,
    // Signals b/w Master's Master and AHBm
    input           master_wreq,
    input  [31:0]   master_wbuffaddr,
    input  [31:0]   master_wbuffdata,
    output          master_wbuffread,
    input           master_rreq,
    input  [31:0]   master_rbuffaddr,
    output [31:0]   master_rbuffdata,
    output          master_rbuffwrite,
    // Signals b/w Slave's Slave and AHBs
    output          slave_wreq,
    output [31:0]   slave_wbuffaddr,
    output [31:0]   slave_wbuffdata,
    output          slave_rreq,
    output [31:0]   slave_rbuffaddr,
    input  [31:0]   slave_rbuffdata
);

    // Internal AHB signals
    wire [31:0]   haddr;
    wire          hmastlock;
    wire [6:0]    hprot;
    wire [2:0]    hsize;
    wire [1:0]    htrans;
    wire [31:0]   hwdata;
    reg  [31:0]   hrdata;
    wire          hwrite;
    reg           hready;
    reg           hresp;

    // Instantiate AHB Master
    ahbm_swc ahb_master (
        .hclk           (hclk),
        .hrstn          (hrstn),
        .haddr          (haddr),
        .hmastlock      (hmastlock),
        .hprot          (hprot),
        .hsize          (hsize),
        .htrans         (htrans),
        .hwdata         (hwdata),
        .hrdata         (hrdata),
        .hwrite         (hwrite),
        .hready         (hready),
        .hresp          (hresp),
        .wbuffread      (master_wbuffread),
        .wreq           (master_wreq),
        .wbuffdata      (master_wbuffdata),
        .wbuffaddr      (master_wbuffaddr),
        .rbuffwrite     (master_rbuffwrite),
        .rreq           (master_rreq),
        .rbuffdata      (master_rbuffdata),
        .rbuffaddr      (master_rbuffaddr),
        .done           (done),
        .resp           (resp)
    );

    // Instantiate AHB Slave
    ahbs_swc ahb_slave (
        .hclk           (hclk),
        .hrstn          (hrstn),
        .haddr          (haddr),
        .hmastlock      (hmastlock),
        .hprot          (hprot),
        .hsize          (hsize),
        .htrans         (htrans),
        .hwdata         (hwdata),
        .hrdata         (hrdata),
        .hwrite         (hwrite),
        .hready         (hready),
        .hresp          (hresp),
        .wreq           (slave_wreq),
        .wbuffdata      (slave_wbuffdata),
        .wbuffaddr      (slave_wbuffaddr),
        .rreq           (slave_rreq),
        .rbuffdata      (slave_rbuffdata),
        .rbuffaddr      (slave_rbuffaddr),
        .done           (done),
        .resp           (resp)
    );

endmodule
