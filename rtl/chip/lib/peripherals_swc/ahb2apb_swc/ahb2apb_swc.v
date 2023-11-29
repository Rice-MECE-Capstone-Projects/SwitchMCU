
module ahb2apb_swc(
    rstn            ,
    hclk            ,
    haddr           ,
    hprot           ,
    hsize           ,
    htrans          ,
    hwdata          ,
    hrdata          ,
    hwrite          ,
    hready          ,
    hresp           ,
    pclk            ,
    paddr           ,
    pselx           ,
    penable         ,
    pwrite          ,
    pwdata          ,
    pready          ,
    prdata          ,
    pslverr         
);
// reset
input                       rstn        ;

// AHB bus 5 signals
input                       hclk        ;
wire                        hrstn       ;
input       [31:0]          haddr       ;
input       [6:0]           hprot       ;
input       [2:0]           hsize       ;
input       [1:0]           htrans      ;
input       [31:0]          hwdata      ;
output      [31:0]          hrdata      ;
input                       hwrite      ;
output                      hready      ;
output                      hresp       ;

// APB bus 5 signals
parameter PD_NUM = 3;
input                       pclk        ;
wire                        prstn       ;
output      [31:0]          paddr       ;
output      [PD_NUM-1:0]    pselx       ;
output                      penable     ;
output                      pwrite      ;
output      [31:0]          pwdata      ;
input                       pready      ;
input       [31:0]          prdata      ;
input                       pslverr     ;

// Bridge signals
wire                        wbuffread   ;
wire                        wreq_ahbs   ;
reg                         wreq_r      ;
reg                         wreq_rr     ;
reg                         wreq_rrr    ;
wire                        wreq_apbm   ;
wire        [31:0]          wbuffdata   ;
wire        [31:0]          wbuffaddr   ;
wire                        rbuffread   ;
wire                        rbuffwrite  ;
wire                        rreq_ahbs   ;
reg                         rreq_r      ;
reg                         rreq_rr     ;
reg                         rreq_rrr    ;
wire                        rreq_apbm   ;
wire        [31:0]          rbuffdata   ;
wire        [31:0]          rbuffaddr   ;
wire                        done_apbm   ;
reg                         done_r      ;
reg                         done_rr     ;
reg                         done_rrr    ;
wire                        done_ahbs   ;
wire                        resp        ;

assign prstn = rstn;
assign hrstn = rstn;

// CDC buffer for wreq
// Convert pulse to edge
reg wreq_ahbs_edge;
always @(posedge hclk) begin
    if(!rstn) begin
        wreq_ahbs_edge <= 0;
    end else begin
        wreq_ahbs_edge <= wreq_ahbs ? !wreq_ahbs_edge : wreq_ahbs_edge;
    end
end
always @(posedge pclk) begin
    if(!rstn) begin
        wreq_r   <= 0;
        wreq_rr  <= 0;
        wreq_rrr <= 0;
    end else begin
        wreq_r   <= wreq_ahbs_edge;
        wreq_rr  <= wreq_r;
        wreq_rrr <= wreq_rr;
    end
end
// Convert edge back to pulse
assign wreq_apbm = wreq_rrr ^ wreq_rr;

// CDC buffer for rreq
// Convert pulse to edge
reg rreq_ahbs_edge;
always @(posedge hclk) begin
    if(!rstn) begin
        rreq_ahbs_edge <= 0;
    end else begin
        rreq_ahbs_edge <= rreq_ahbs ? !rreq_ahbs_edge : rreq_ahbs_edge;
    end
end
// CDC buffer for rreq
always @(posedge pclk) begin
    if(!rstn) begin
        rreq_r   <= 0;
        rreq_rr  <= 0;
        rreq_rrr <= 0;
    end else begin
        rreq_r   <= rreq_ahbs_edge;
        rreq_rr  <= rreq_r;
        rreq_rrr <= rreq_rr;
    end
end
// Convert edge back to pulse
assign rreq_apbm = rreq_rrr ^ rreq_rr;

// CDC buffer for done
always @(posedge hclk) begin
    if(!rstn) begin
        done_r   <= 0;
        done_rr  <= 0;
        done_rrr <= 0;
    end else begin
        done_r   <= done_apbm;
        done_rr  <= done_r;
        done_rrr <= done_rr;
    end
end
// Edge detection synchronizer
assign done_ahbs = (!done_rrr) & done_rr; 

ahb2apb_ahbs_swc  ahb2apb_ahbs_swc_inst (
    .hclk       (hclk       ),
    .hrstn      (hrstn      ),
    .haddr      (haddr      ),
    .hprot      (hprot      ),
    .hsize      (hsize      ),
    .htrans     (htrans     ),
    .hwdata     (hwdata     ),
    .hrdata     (hrdata     ),
    .hwrite     (hwrite     ),
    .hready     (hready     ),
    .hresp      (hresp      ),
    .wreq       (wreq_ahbs  ),
    .wbuffdata  (wbuffdata  ),
    .wbuffaddr  (wbuffaddr  ),
    .rreq       (rreq_ahbs  ),
    .rbuffdata  (rbuffdata  ),
    .rbuffaddr  (rbuffaddr  ),
    .done       (done_ahbs  )
);

ahb2apb_apbm_swc  ahb2apb_apbm_swc_inst (
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
    .wreq       (wreq_apbm  ),
    .wbuffdata  (wbuffdata  ),
    .wbuffaddr  (wbuffaddr  ),
    .rbuffread  (rbuffread  ),
    .rbuffwrite (rbuffwrite ),
    .rreq       (rreq_apbm  ),
    .rbuffdata  (rbuffdata  ),
    .rbuffaddr  (rbuffaddr  ),
    .done       (done_apbm  ),
    .resp       (resp       )
);

endmodule