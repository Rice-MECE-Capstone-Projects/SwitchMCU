module apbm_swc_tb;
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
reg                     pready = 0      ;
reg     [31:0]          prdata          ;
wire                    pslverr         ;
wire                    wbuffread       ;
reg                     wreq            ;
reg     [31:0]          wbuffdata       ;
reg     [31:0]          wbuffaddr       ;
reg                     rbuffwrite      ;
wire                    rreq            ;
wire    [31:0]          rbuffdata       ;
reg     [31:0]          rbuffaddr       ;

always @(posedge pclk) begin
    if(!prstn) begin
        wbuffdata = 'h20;;
    end else if(wbuffread) begin
        wbuffdata = wbuffdata + 1;
    end
end

always @(posedge pclk) begin
    if(!prstn) begin
        wbuffaddr = 'h100;
    end else if(wbuffread) begin
        wbuffaddr = wbuffaddr + 4;
    end
end

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

always #5  pclk = ! pclk ;

reg [7:0] cnt;

always @(posedge pclk) begin
    if(!prstn) begin
        cnt <= 0;
    end else if(cnt == 10) begin
        cnt <= 0;
    end else begin
        cnt <= cnt + 1;
    end
end

always @(posedge pclk) begin
    if(!prstn) begin
        pready <= 0;
    end else if(cnt == 10) begin
        pready <= !pready;
    end
end

initial begin
    $dumpfile("apbm_swc_tb.vcd");
    $dumpvars(0, apbm_swc_tb);
    #1000 $finish;
end

initial begin
    #10;
    prstn = 1;
    #10;
    wreq = 1;
end

endmodule
