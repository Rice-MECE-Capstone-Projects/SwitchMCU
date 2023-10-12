/* verilator lint_off STMTDLY */

module ahbs_swc_tb;
  //Ports
  reg                   hclk  = 1   ;
  reg                   hrstn       ;
  reg   [31:0]          haddr       ;
  reg                   hmastlock   ;
  reg   [6:0]           hprot       ;
  reg   [2:0]           hsize       ;
  reg   [1:0]           htrans      ;
  reg   [31:0]          hwdata      ;
  wire  [31:0]          hrdata      ;
  reg                   hwrite      ;
  wire                  hready      ;
  wire                  hresp       ;
  wire                  wreq        ;
  wire  [31:0]          wbuffdata   ;
  wire  [31:0]          wbuffaddr   ;
  wire                  rreq        ;
  reg   [31:0]          rbuffdata   ;
  wire  [31:0]          rbuffaddr   ;
  wire                  done        ;
  wire                  resp        ;

  ahbs_swc  ahbs_swc_inst (
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
    .wreq       (wreq       ),
    .wbuffdata  (wbuffdata  ),
    .wbuffaddr  (wbuffaddr  ),
    .rreq       (rreq       ),
    .rbuffdata  (rbuffdata  ),
    .rbuffaddr  (rbuffaddr  ),
    .done       (done       ),
    .resp       (resp       )
  );

always #5  hclk = ! hclk ;

initial begin
    $dumpfile("ahbs_swc_tb.vcd");
    $dumpvars(0, ahbs_swc_tb);
    #500 $finish;
end

initial begin
    // Reset sequence
    #1;
    hrstn = 0;
    #10;
    hrstn = 1;

    // Setup
    #10;
    hmastlock = 0;
    hsize = 3'b010; // Word transfer
    hprot = 7'b0000000;

    // FSM Testbench
    // WRITE+READ 3x
    // WRITE 6x
    // READ 6x
    // WRITE -> RESET -> WRITE
    // WRITE -> RESET -> READ
    // READ -> RESET -> WRITE
    // READ -> RESET -> READ
    // WRITE -> ERROR -> WRITE
    // WRITE -> ERROR -> READ
    // READ -> ERROR -> WRITE
    // READ -> ERROR -> READ
    // WRITE -> IDLE -> WRITE
    // WRITE -> IDLE -> READ
    // READ -> IDLE -> WRITE
    // READ -> IDLE -> READ

    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE11;
    hwdata = 32'hCAFEBA11;
    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF011;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA11;
    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE12;
    hwdata = 32'hCAFEBA12;
    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF012;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA12;
    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE13;
    hwdata = 32'hCAFEBA13;
    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF013;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA13;

    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE21;
    hwdata = 32'hCAFEBA21;
    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE22;
    hwdata = 32'hCAFEBA22;
    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE23;
    hwdata = 32'hCAFEBA23;
    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE24;
    hwdata = 32'hCAFEBA24;
    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE25;
    hwdata = 32'hCAFEBA25;
    // WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE26;
    hwdata = 32'hCAFEBA26;

    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF031;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA31;
    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF032;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA32;
    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF033;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA33;
    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF034;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA34;
    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF035;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA35;
    // READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF036;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA36;

    // WRITE -> RESET -> WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE31;
    hwdata = 32'hCAFEBA31;
    #10;
    hrstn = 0; // RESET
    haddr = 32'hDEADBEEF;
    hwdata = 32'hCAFEBABE;
    #10;
    hrstn = 1; // Exit RESET
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE32;
    hwdata = 32'hCAFEBA32;

    // WRITE -> RESET -> READ
    #10;
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE41;
    hwdata = 32'hCAFEBA41;
    #10;
    hrstn = 0; // RESET
    haddr = 32'hDEADBEEF;
    hwdata = 32'hCAFEBABE;
    #10;
    hrstn = 1; // READ
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF041;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA41;

    // READ -> RESET -> WRITE
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF051;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA51;
    #10;
    hrstn = 0; // RESET
    haddr = 32'hDEADBEEF;
    hwdata = 32'hCAFEBABE;
    #10;
    hrstn = 1; // Exit RESET
    htrans = 2'b10; 
    hwrite = 1;
    haddr = 32'hDEADBE51;
    hwdata = 32'hCAFEBA51;

    // READ -> RESET -> READ
    #10;
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF061;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA61;
    #10;
    hrstn = 0; // RESET
    haddr = 32'hDEADBEEF;
    hwdata = 32'hCAFEBABE;
    #10;
    hrstn = 1; // Exit RESET
    htrans = 2'b10; 
    hwrite = 0;
    haddr = 32'hBAADF062;
    hwdata = 32'hCAFEBABE;
    rbuffdata = 32'hABBABA62;

    // // WRITE -> ERROR -> WRITE
    // #10;
    // haddr = 32'h11010100;
    // htrans = 2'b10; 
    // hwrite = 1;
    // #10;
    // hresp = 1; // ERROR
    // #10;
    // hresp = 0; // Exit ERROR
    // #10;
    // haddr = 32'h11010100;
    // htrans = 2'b10; 
    // hwrite = 1;

    // // WRITE -> ERROR -> READ
    // #10;
    // haddr = 32'h11010100;
    // htrans = 2'b10; 
    // hwrite = 1;
    // #10;
    // hresp = 1; // ERROR
    // #10;
    // hresp = 0; // Exit ERROR
    // #10;
    // haddr = 32'h11010100;
    // htrans = 2'b10; 
    // hwrite = 0;

    // // READ -> ERROR -> WRITE
    // #10;
    // haddr = 32'h11010100;
    // htrans = 2'b10; 
    // hwrite = 0;
    // #10;
    // hresp = 1; // ERROR
    // #10;
    // hresp = 0; // Exit ERROR
    // #10;
    // haddr = 32'h11010100;
    // htrans = 2'b10; 
    // hwrite = 1;

    // // READ -> ERROR -> READ
    // #10;
    // haddr = 32'h11010100;
    // htrans = 2'b10; 
    // hwrite = 0;
    // #10;
    // hresp = 1; // ERROR
    // #10;
    // hresp = 0; // Exit ERROR
    // #10;
    // haddr = 32'h11010100;
    // htrans = 2'b10; 
    // hwrite = 0;

end

endmodule
/* verilator lint_on STMTDLY */