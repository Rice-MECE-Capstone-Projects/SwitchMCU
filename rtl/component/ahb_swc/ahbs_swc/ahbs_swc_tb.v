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

    // Write transaction
    #10;
    haddr = 32'h11010100;
    hmastlock = 0;
    hprot = 7'b0000000;
    hsize = 3'b010; // Word transfer
    htrans = 2'b10; // NONSEQ
    hwdata = 32'hDEAD_BEEF;
    hwrite = 1;
    #10;
    haddr = 32'h11010100;
    hsize = 3'b010; // Word transfer
    htrans = 2'b10; // NONSEQ
    hwrite = 0;
    #10 
    htrans = 2'b00; // IDLE

    // Read transaction
    #10 
    haddr = 32'h0000_0000;
    htrans = 2'b10; // NONSEQ
    hwrite = 0;
    #10 
    htrans = 2'b00; // IDLE

end

endmodule
/* verilator lint_on STMTDLY */