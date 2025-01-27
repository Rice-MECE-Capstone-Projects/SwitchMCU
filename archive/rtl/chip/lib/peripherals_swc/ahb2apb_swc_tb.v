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

// SPI signals
wire                        sck         ;
wire                        mosi        ;
// wire                        miso        ;
wire                        tx          ;

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
    .pslverr    (pslverr    ),
    .sck        (sck        ),
    .mosi       (mosi       ),
    .miso       (mosi       )
);

uart_swc  uart_swc_inst (
    .pclk       (pclk       ),
    .prstn      (rstn       ),
    .paddr      (paddr      ),
    .psel       (pselx[1]   ),
    .penable    (penable    ),
    .pwrite     (pwrite     ),
    .pwdata     (pwdata     ),
    .pready     (pready     ),
    .prdata     (prdata     ),
    .pslverr    (pslverr    ),
    .tx         (tx         ),
    .rx         (tx         )
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

// Function to perform write operation
function void perform_read(input [31:0] addr);
    rreq = 1;
    rbuffaddr = addr;
    #24;
    rreq = 0;
    rbuffaddr = 0;
endfunction

// SPI parameters
localparam DFF      = 1'b1;
localparam LSBFIRST = 1'b1;
localparam BR       = 3'b0;
localparam CPOL     = 1'b0;
localparam CPHA     = 1'b0;

// UART parameters
localparam UE       = 1'b1; // enable the uart
localparam M        = 1'b1; // word length, 1 = 9bits
localparam PCE      = 1'b1; // enable the parity control
localparam PS       = 1'b0; // parity selection, 0 = even
localparam STOP     = 2'b10; // stop bits, 0 = 1 bit

initial begin
    #1;
    rstn = 0;
    #240;
    rstn = 1;
    #240;
    // Call the function to write 0x10 @ SPI_CR 0x0010_0000
    perform_write({20'b0, DFF, 3'b0, LSBFIRST, 1'b1, BR, 1'b1, CPOL, CPHA}, 32'h0010_0000);
    
    #48000;
    // Call the function to write 0xABAB @ SPI_WDR 0x0010_0008
    perform_write(32'hABAB, 32'h0010_0008);

    #48000;
    // Call the function to write 0xACAC @ SPI_WDR 0x0010_0008
    perform_write(32'hACAC, 32'h0010_0008);

    #48000;
    // Call the function to write 0xADAD @ SPI_WDR 0x0010_0008
    perform_write(32'hADAD, 32'h0010_0008);

    #48000;
    // Call the function to read from SPI_RDR @ 0x0010_000C
    perform_read(32'h0010_000C);

    #48000;
    // Call the function to read from SPI_RDR @ 0x0010_000C
    perform_read(32'h0010_000C);

    #48000;
    // Call the function to read from SPI_RDR @ 0x0010_000C
    perform_read(32'h0010_000C);

    #48000;
    // Call the function to read from SPI_RDR @ 0x0010_000C
    perform_read(32'h0010_000C);

    #48000;
    // Call the function to write 0xADAD @ UART_CR1 0x0010_0110
    perform_write({18'b0, UE, M, 1'b0, PCE, PS, 9'b0}, 32'h0010_0110);

    #48000;
    // Call the function to write 0xADAD @ UART_CR2 0x0010_0114
    perform_write({18'b0, STOP, {12{1'b0}}}, 32'h0010_0114);
    
    #48000;
    // Call the function to write 0xADAD @ UART_BRR 0x0010_010C
    perform_write(32'h3, 32'h0010_010C);

    #48000;
    // Call the function to write 0xABAB @ UART_WDR 0x0010_0104
    perform_write(32'h1AB, 32'h0010_0104);
    
    #48000;
    // Call the function to write 0xACAC @ UART_WDR 0x0010_0104
    perform_write(32'h1AC, 32'h0010_0104);

    #48000;
    // Call the function to write 0xADAD @ UART_WDR 0x0010_0104
    perform_write(32'h1AD, 32'h0010_0104);

    #48000;
    // Call the function to read from SPI_RDR @ 0x0010_000C
    perform_read(32'h0010_0108);

    #48000;
    // Call the function to read from SPI_RDR @ 0x0010_000C
    perform_read(32'h0010_0108);

    #48000;
    // Call the function to read from SPI_RDR @ 0x0010_000C
    perform_read(32'h0010_0108);

    #200000;
    
    $finish;
end

always @(posedge hclk) begin
    if(rbuffwrite) begin
        $display("The data read is: %h", rbuffdata);
    end
end

endmodule