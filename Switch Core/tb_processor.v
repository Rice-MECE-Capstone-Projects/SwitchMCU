`timescale 1ns/1ns
// Testbench
module processor_testbench;

   `define SIMULATION_TIME  580 // Make simulation times 580,  500, 1020  for programs 1,2, and 3 respectively,
   
processor  myProcessor(
.CLK_pi(clk),
.CPU_RESET_pi(reset)
);
   
   parameter NUM_INSTRUCTIONS = 32;
   
   reg clk;
   reg reset;
      
always @(*) begin
   while ($time < `SIMULATION_TIME) begin  
      #5;  clk = ~clk;
   end
end
   

   initial begin
      clk = 1'b0;
      reset = 1'b0;

      #1;   reset = 1'b1;
      $display("Time: %3d\tRESET: %1b", $time, reset);

      # 5; reset = 1'b0;
      $display("Time: %3d\tRESET: %1b", $time, reset);
end

always @(posedge clk) begin 
   
end // always @ (posedge clk)
  
 
endmodule // foo_testbench

