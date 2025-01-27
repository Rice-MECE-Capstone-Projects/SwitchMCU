`timescale 1ns/1ns

module dataMem(
input wire clk_pi,
input wire reset_pi, 
input wire load_pi, 
input wire store_pi,  
input wire [31:0] address_pi,
input wire [31:0] storeData_pi, 
output wire  [31:0] loadData_po
);

reg [31:0] 	  DMEM[0:31];
wire [4:0]   memaddr;

   assign memaddr = address_pi &  32'h1F;   
    assign  loadData_po = load_pi ? DMEM[memaddr] : 32'b0; 


   integer   i;

   
   always @(posedge clk_pi) begin
      if (reset_pi)
	for (i=0; i < 32; i = i+1)
	  DMEM[i] <= 100+i;
      else
	    if (store_pi)   
		       DMEM[memaddr] <=  storeData_pi;	
	      end


   always @(negedge clk_pi)  begin
//      $display("DMEM[5..9]:\tTime:%3d\t%3d\t%3d\t%3d\t%3d\t%3d", $time, DMEM[5], DMEM[6], DMEM[7], DMEM[8], DMEM[9]);
//      $display("DMEM[10..14]:\tTime:%3d\t%3d\t%3d\t%3d\t%3d\t%3d", $time, DMEM[10], DMEM[11], DMEM[12], DMEM[13], DMEM[14]);
      end



endmodule	       
