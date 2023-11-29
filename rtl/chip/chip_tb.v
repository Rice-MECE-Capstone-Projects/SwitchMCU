module chip_tb;

// general signals
reg           hclk                                      ;
reg           hrstn                                     ;
reg           itcm_ready                                ;

// parameters
parameter     ITCM_DATA_PATH = ".config/rom_link.txt"   ;
parameter     DTCM_DATA_PATH = ".config/rom_link.txt"   ;

chip_top #(
  .ITCM_DATA_PATH     (ITCM_DATA_PATH                   ),
  .DTCM_DATA_PATH     (ITCM_DATA_PATH                   ),
  .ITCM_BASE_ADDRESS  ('h100000                         ),
  .DTCM_BASE_ADDRESS  ('h200000                         )
) chip_top_inst (
  .hclk               (hclk                             ),
  .hrstn              (hrstn                            ),
  .itcm_ready         (itcm_ready                       )
);

always #5  hclk = !hclk ;

initial begin
  itcm_ready = 0;
  hrstn = 0;
  #20;
  hrstn = 1;
  #20;
  itcm_ready = 1;
  #10000;
  $finish;
end

initial begin
  $dumpfile("chip_tb.vcd");
  $dumpvars(0, chip_tb);
end

endmodule
