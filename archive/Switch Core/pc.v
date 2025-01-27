`timescale 1ns/1ns

module PC(
input wire clk_pi,
input wire reset_pi,
input wire halt_pi,
input wire isTakenBranch_pi, 
input wire [31:0] targetPC_pi,
output wire[31:0] pc_po
);

reg [31:0] PC;
wire [31:0] nextPC;

  assign nextPC = isTakenBranch_pi ?  targetPC_pi  : PC + 4;
  assign pc_po = PC;

  always @(posedge clk_pi) begin
  	 if (reset_pi)
	    PC  <= 32'b0;
	 else 
	    if (~halt_pi)  PC <= nextPC;
	end
endmodule
