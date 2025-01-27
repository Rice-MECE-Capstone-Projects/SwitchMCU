
module ahbm_swc_tb;
  //Ports
  reg                   hclk  = 1   ;
  reg                   hrstn       ;
  wire  [31:0]          haddr       ;
  wire                  hmastlock   ;
  wire  [6:0]           hprot       ;
  wire  [2:0]           hsize       ;
  wire  [1:0]           htrans      ;
  wire  [31:0]          hwdata      ;
  reg   [31:0]          hrdata      ;
  wire                  hwrite      ;
  reg                   hready      ;
  reg                   hresp       ;
  wire                  wbuffread   ;
  reg                   wreq        ;
  reg   [31:0]          wbuffdata   ;
  reg   [31:0]          wbuffaddr   ;
  wire                  rbuffwrite  ;
  reg                   rreq        ;
  wire  [31:0]          rbuffdata   ;
  reg   [31:0]          rbuffaddr   ;
  wire                  done        ;
  wire                  resp        ;

  ahbm_swc  ahbm_swc_inst (
    .hclk       (hclk       ),
    .hrstn      (hrstn      ),
    .haddr      (haddr      ),
    .hmastlock  (hmastlock  ),
    .hprot      (hprot      ),
    .hsize      (hsize      ),
    .htrans     (htrans     ),
    .hwdata     (hwdata     ),
    .hrdata     (hrdata     ),
    .hwrite     (hwrite     ),
    .hready     (hready     ),
    .hresp      (hresp      ),
    .wbuffread  (wbuffread  ),
    .wreq       (wreq       ),
    .wbuffdata  (wbuffdata  ),
    .wbuffaddr  (wbuffaddr  ),
    .rbuffwrite (rbuffwrite ),
    .rreq       (rreq       ),
    .rbuffdata  (rbuffdata  ),
    .rbuffaddr  (rbuffaddr  ),
    .done       (done       ),
    .resp       (resp       )
  );

always #5  hclk = ! hclk ;

initial begin
    $dumpfile("ahbm_swc_tb.vcd");
    $dumpvars(0, ahbm_swc_tb);
    #500 $finish;
end

initial begin
    #1;
    hrstn = 0;
    #10;
    hrstn = 1;
    hready = 0;
    #10;
    wreq = 1;
    wbuffdata = 'h0010;
    wbuffaddr = 'h0020;
    #10;
    wreq = 0;
    wbuffdata = 'h0;
    wbuffaddr = 'h0;
    #30;
    hready = 1;
    #10;
    hready = 0;
    #30;
    hready = 1;
    #10;
    hready = 0;

    #30;
    hrdata = 'h00cd;
    rreq = 1;
    rbuffaddr = 'h00aa;
    #10;
    rreq = 0;
    rbuffaddr = 'h0;
    #30;
    hready = 1;
    #10;
    hready = 0;
    #30;
    hready = 1;

    #30;
    rreq = 1;
    rbuffaddr = 'h00a1;
    #10;
    rbuffaddr = 'h00a2;
    #10;
    hrdata = 'h0001;
    rbuffaddr = 'h00a3;
    #10;
    hrdata = 'h0002;
    rbuffaddr = 'h00a4;
    #10;
    hrdata = 'h0003;
    rbuffaddr = 'h00a5;
    #10;
    hrdata = 'h0004;
    rbuffaddr = 'h00a6;
    #10;
    hrdata = 'h0005;
    rbuffaddr = 'h00a7;
    #10;
    hrdata = 'h0006;
    rbuffaddr = 'h0000;
    rreq = 0;
    #10;
    hrdata = 'h0007;
    rbuffaddr = 'h0000;
    #10;
    hrdata = 'h0008;
    rbuffaddr = 'h0000;
end

endmodule