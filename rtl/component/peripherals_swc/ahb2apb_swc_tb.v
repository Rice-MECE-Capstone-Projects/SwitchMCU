// `timescale 1ns/1ps
module ahb2apb_swc_tb;

reg             rstn        ;
reg             hclk = 1    ;
reg             pclk = 1    ;

//APB signals
wire        [31:0]          paddr       ;
wire        [2:0]           pselx       ;
wire                        penable     ;
wire                        pwrite      ;
wire        [31:0]          pwdata      ;
wire                        pready      ;
wire        [31:0]          prdata      ;
wire                        pslverr     ;

// AHB signals
wire        [31:0]          haddr       ;
wire                        hmastlock   ;
wire        [6:0]           hprot       ;
wire        [2:0]           hsize       ;
wire        [1:0]           htrans      ;
wire        [31:0]          hwdata      ;
wire        [31:0]          hrdata      ;
wire                        hwrite      ;
wire                        hready      ;
wire                        hresp       ;

// Control signals
wire                        wbuffread   ;
wire                        rbuffread   ;
reg                         wreq        ;
reg         [31:0]          wbuffdata   ;
reg         [31:0]          wbuffaddr   ;
wire                        rbuffwrite  ;
reg                         rreq        ;
wire        [31:0]          rbuffdata   ;
reg         [31:0]          rbuffaddr   ;
wire                        done        ;
wire                        resp        ;

ahbm_swc  ahbm_swc_inst (
    .hclk       (hclk       ),
    .hrstn      (rstn       ),
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
    .rbuffread  (rbuffread  ),
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

ahb2apb_swc  ahb2apb_swc_inst (
    .rstn       (rstn       ),
    .hclk       (hclk       ),
    .haddr      (haddr      ),
    .hprot      (hprot      ),
    .hsize      (hsize      ),
    .htrans     (htrans     ),
    .hwdata     (hwdata     ),
    .hrdata     (hrdata     ),
    .hwrite     (hwrite     ),
    .hready     (hready     ),
    .hresp      (hresp      ),
    .pclk       (pclk       ),
    .paddr      (paddr      ),
    .pselx      (pselx      ),
    .penable    (penable    ),
    .pwrite     (pwrite     ),
    .pwdata     (pwdata     ),
    .pready     (pready     ),
    .prdata     (prdata     ),
    .pslverr    (pslverr    )
);

spictrl_swc  spictrl_swc_inst (
    .pclk       (pclk       ),
    .prstn      (rstn       ),
    .paddr      (paddr      ),
    .psel       (pselx[0]   ),
    .penable    (penable    ),
    .pwrite     (pwrite     ),
    .pwdata     (pwdata     ),
    .pready     (pready     ),
    .prdata     (prdata     ),
    .pslverr    (pslverr    )
);

always #12      hclk = ! hclk ;
always #22      pclk = ! pclk ;

initial begin
    $dumpfile("ahb2apb_swc_tb.vcd");
    $dumpvars(0, ahb2apb_swc_tb);
end

// Function to perform write operation
function void perform_write(input [31:0] data, input [31:0] addr);
    wreq = 1;
    wbuffdata = data;
    wbuffaddr = addr;
    #24;
    wreq = 0;
    wbuffdata = 0;
    wbuffaddr = 0;
endfunction

initial begin
    #1;
    rstn = 0;
    #240;
    rstn = 1;
    #240;
    // Call the function to write 0x10 @ SPI_CR 0x0010_0000
    perform_write(32'h10, 32'h0010_0000);
    #480;
    // Call the function to write 0x12 @ SPI_WDR 0x0010_0008
    perform_write(32'h12, 32'h0010_0008);
    #480;
    // Call the function to write 0x16 @ SPI_WDR 0x0010_0008
    perform_write(32'h16, 32'h0010_0008);
    #480;
    // Call the function to write 0x20 @ SPI_WDR 0x0010_0008
    perform_write(32'h20, 32'h0010_0008);
    #480;
    // Call the function to write 0x24 @ SPI_WDR 0x0010_0008
    perform_write(32'h24, 32'h0010_0008);
    #20000;
    
    // Call the function again if needed
    
    // rreq = 1;
    // rbuffaddr = 32'h0010_0004;
    // #24;
    // rreq = 0;
    // rbuffaddr = 0;
    // #1000;
    
    $finish;
end

endmodule