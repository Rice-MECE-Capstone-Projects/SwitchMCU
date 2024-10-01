module exu_flush_tb;

// general signals
reg           		  hclk                ;
reg           		  hrstn               ;

// inputs
reg           [3:0]       cycle_cnt           ;
reg           [1:0]       flush               ;
// output
reg                  	  flush_stall         ;

ex_flush_swc exu_flush_inst(
  .hclk               (hclk                             ),
  .hrstn              (hrstn                            ),
  .cycle_cnt          (cycle_cnt                        ),
  .flush              (flush                            ),
  .flush_stall        (flush_stall                      )
);

always #5  hclk = !hclk ;


// copied from the core top
always@(posedge hclk) begin
  if(!hrstn)
      cycle_cnt <= 0;
  else if(cycle_cnt == 4)
      cycle_cnt <= 1;
  else
      cycle_cnt <= cycle_cnt + 1;
end


initial begin
  hrstn = 0;
  flush = 1;
  #20;
  hrstn = 1;
  #100;
  flush = 0;
  #50;
  flush = 2;
  #100;
  flush = 1;
  #10000;
  $finish;
end

initial begin
  $dumpfile("exu_flush_tb.vcd");
  $dumpvars(0, exu_flush_tb);
end

endmodule
