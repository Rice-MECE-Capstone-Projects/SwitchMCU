`timescale 1ns/1ns

module branchPC(
input wire [31:0]  currentPC_pi, 
input wire 	   branchCondTrue_pi,
input wire 	   isBranch_pi,
input wire [31:0]  branchOffset_pi,
output wire 	   isTakenBranch_po, 
output wire [31:0] targetPC_po
);


  assign isTakenBranch_po = isBranch_pi &  branchCondTrue_pi;
  assign targetPC_po  = currentPC_pi + branchOffset_pi + 4;	
  
endmodule
