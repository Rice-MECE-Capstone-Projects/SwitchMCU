// NAME : Lechuan Sun
//--------------------------------------------------------------------
// Testbench here to verify the DUT.
// Provide a verification plan also detailing the strategy & testbench.
// Include checks, coverage and stimulus
// 
//--------------------------------------------------------------------
// below is the initial test case to test if the design works

module edge_detect_tb ();
  bit clk;
  bit rstn;
  bit sig_now;
  bit rising_edge;
  bit falling_edge;

edge_detect DUT (
    .clk(clk),
    .rstn(rstn),
    .sig_now(sig_now),
    .rising_edge(rising_edge),
	.falling_edge(falling_edge)
);

always begin
#5 clk = ~ clk;
end  
  
initial begin
  clk = 1'b0; rstn = 1'b0; sig_now = 1'b0;

// dump the waveform file 
$dumpfile ("edge_detect_tb.vcd"); 
$dumpvars; 
  
  #10 rstn = 1'b1;
  #10 sig_now = 1'b1;
  #20 sig_now = 1'b0;
  #30 sig_now = 1'b1;
  #10 rstn = 1'b0;
  #10 rstn = 1'b1;
  #20 sig_now = 1'b0;
  #30 sig_now = 1'b1;

#20 $finish;
end 

endmodule