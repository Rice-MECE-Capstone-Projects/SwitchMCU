module apb_swc_tb;
// Parameters
parameter PD_NUM = 3;
// Ports
reg                     pclk = 1        ;
reg                     prstn = 0       ;
wire    [31:0]          paddr           ;
wire    [PD_NUM-1:0]    pselx           ;
wire                    penable         ;
wire                    pwrite          ;
wire    [31:0]          pwdata          ;
wire                    pready          ;
reg     [31:0]          prdata          ;
wire                    pslverr         ;
wire                    wbuffread       ;
reg                     wreq            ;
reg     [31:0]          wbuffdata       ;
reg     [31:0]          wbuffaddr       ;
reg                     rbuffwrite      ;
reg                     rreq            ;
wire    [31:0]          rbuffdata       ;
reg     [31:0]          rbuffaddr       ;

apbm_swc apbm_swc_inst(
    .pclk       (pclk       ),
    .prstn      (prstn      ),
    .paddr      (paddr      ),
    .pselx      (pselx      ),
    .penable    (penable    ),
    .pwrite     (pwrite     ),
    .pwdata     (pwdata     ),
    .pready     (pready     ),
    .prdata     (prdata     ),
    .pslverr    (pslverr    ),
    .wbuffread  (wbuffread  ),
    .wreq       (wreq       ),
    .wbuffdata  (wbuffdata  ),
    .wbuffaddr  (wbuffaddr  ),
    .rbuffwrite (rbuffwrite ),
    .rreq       (rreq       ),
    .rbuffdata  (rbuffdata  ),
    .rbuffaddr  (rbuffaddr  )
);

apbs_swc  apbs_swc_inst (
    .pclk       (pclk       ),
    .prstn      (prstn      ),
    .paddr      (paddr      ),
    .psel       (pselx[0]   ),
    .penable    (penable    ),
    .pwrite     (pwrite     ),
    .pwdata     (pwdata     ),
    .pready     (pready     ),
    .prdata     (prdata     ),
    .pslverr    (pslverr    )
  );

always #5  pclk = ! pclk ;

reg [7:0] cnt;

initial begin
    $dumpfile("apb_swc_tb.vcd");
    $dumpvars(0, apb_swc_tb);
    #500 $finish;
end

initial begin
    #1;
    #10;
    prstn = 1;
    #10;
    // write SPI_CR 0x0010_0000
    wreq = 1;
    wbuffdata = 'h10;
    wbuffaddr = 'h0010_0000;
    #20;
    wreq = 0;
    wbuffdata = 0;
    wbuffaddr = 'h00;
    // write SPI_SR 0x0010_0004
    wreq = 1;
    wbuffdata = 'h12;
    wbuffaddr = 'h0010_0004;
    #20;
    wreq = 0;
    wbuffdata = 0;
    wbuffaddr = 'h00;
    //read SPI_CR 0x0010_0000
    rreq = 1;
    rbuffaddr = 'h0010_0000;
    #20;
    rreq = 0;
    rbuffaddr = 'h00;
    //read SPI_SR 0x0010_0004
    rreq = 1;
    rbuffaddr = 'h0010_0004;
    #20;
    rreq = 0;
    rbuffaddr = 'h00;
    
    #50;

    // write SPI_WDR 0x0010_0008
    wreq = 1;
    wbuffdata = 'h14;
    wbuffaddr = 'h0010_0008;
    #20;
    wreq = 0;
    wbuffdata = 0;
    wbuffaddr = 'h00;

    #50;
    
    //read SPI_CR 0x0010_0000
    rreq = 1;
    rbuffaddr = 'h0010_0008;
    #20;
    rreq = 0;
    rbuffaddr = 'h00;
end

endmodule
