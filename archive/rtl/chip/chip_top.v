module chip_top(
    hclk                                              ,
    hrstn                                             ,
    itcm_ready
);

// parameters
parameter                 ITCM_DATA_PATH              ;
parameter                 DTCM_DATA_PATH              ;
parameter                 ITCM_BASE_ADDRESS           ;
parameter                 DTCM_BASE_ADDRESS           ;

// general signals
input                     hclk                        ;
input                     hrstn                       ;

// itcm AHB bus
wire          [31:0]      itcm_haddr                  ;
wire                      itcm_hwrite                 ;
wire          [31:0]      itcm_hwdata                 ;
wire          [2:0]       itcm_hsize                  ;
wire          [6:0]       itcm_hprot                  ;
wire          [2:0]       itcm_hburst                 ;
wire          [1:0]       itcm_htrans                 ;
wire                      itcm_hmastlock              ;
wire                      itcm_hready                 ;
wire                      itcm_hresp                  ;
wire          [31:0]      itcm_hrdata                 ;

// dtcm AHB bus
wire          [31:0]      dtcm_haddr                  ;
wire                      dtcm_hwrite                 ;
wire          [31:0]      dtcm_hwdata                 ;
wire          [2:0]       dtcm_hsize                  ;
wire          [6:0]       dtcm_hprot                  ;
wire          [2:0]       dtcm_hburst                 ;
wire          [1:0]       dtcm_htrans                 ;
wire                      dtcm_hmastlock              ;
wire                      dtcm_hready                 ;
wire                      dtcm_hresp                  ;
wire          [31:0]      dtcm_hrdata                 ;

// itcm_ready
input                     itcm_ready                  ;

// itcm
sram_swc #(
  .DATA_PATH              (ITCM_DATA_PATH           ),
  .BASE_ADDRESS           (ITCM_BASE_ADDRESS        )
) itcm_swc_inst (
  .hclk                   (hclk                     ),
  .hrstn                  (hrstn                    ),
  .haddr                  (itcm_haddr               ),
  .hwrite                 (itcm_hwrite              ),
  .hwdata                 (itcm_hwdata              ),
  .hsize                  (itcm_hsize               ),
  .hprot                  (itcm_hprot               ),
  .hburst                 (itcm_hburst              ),
  .htrans                 (itcm_htrans              ),
  .hready                 (itcm_hready              ),
  .hresp                  (itcm_hresp               ),
  .hrdata                 (itcm_hrdata              )
);

// dtcm
sram_swc #(
  .DATA_PATH              (DTCM_DATA_PATH           ),
  .BASE_ADDRESS           (DTCM_BASE_ADDRESS        ) 
) dtcm_swc_inst (
  .hclk                   (hclk                     ),
  .hrstn                  (hrstn                    ),
  .haddr                  (dtcm_haddr               ),
  .hwrite                 (dtcm_hwrite              ),
  .hwdata                 (dtcm_hwdata              ),
  .hsize                  (dtcm_hsize               ),
  .hprot                  (dtcm_hprot               ),
  .hburst                 (dtcm_hburst              ),
  .htrans                 (dtcm_htrans              ),
  .hready                 (dtcm_hready              ),
  .hresp                  (dtcm_hresp               ),
  .hrdata                 (dtcm_hrdata              )
);

// core top
core_top_swc  core_top_swc_inst (
    .hclk                 (hclk                     ),
    .hrstn                (hrstn                    ),
    .itcm_haddr           (itcm_haddr               ),
    .itcm_hwrite          (itcm_hwrite              ),
    .itcm_hwdata          (itcm_hwdata              ),
    .itcm_hsize           (itcm_hsize               ),
    .itcm_hprot           (itcm_hprot               ),
    .itcm_hburst          (itcm_hburst              ),
    .itcm_htrans          (itcm_htrans              ),
    .itcm_hmastlock       (itcm_hmastlock           ),
    .itcm_hready          (itcm_hready              ),
    .itcm_hresp           (itcm_hresp               ),
    .itcm_hrdata          (itcm_hrdata              ),
    .dtcm_haddr           (dtcm_haddr               ),
    .dtcm_hwrite          (dtcm_hwrite              ),
    .dtcm_hwdata          (dtcm_hwdata              ),
    .dtcm_hsize           (dtcm_hsize               ),
    .dtcm_hprot           (dtcm_hprot               ),
    .dtcm_hburst          (dtcm_hburst              ),
    .dtcm_htrans          (dtcm_htrans              ),
    .dtcm_hmastlock       (dtcm_hmastlock           ),
    .dtcm_hready          (dtcm_hready              ),
    .dtcm_hresp           (dtcm_hresp               ),
    .dtcm_hrdata          (dtcm_hrdata              ),
    .itcm_ready           (itcm_ready               )
);

endmodule
