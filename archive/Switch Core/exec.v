`timescale 1ns/1ns

`define NOP    6'd0
`define ADD    6'd1
`define ADDI   6'd5 
`define LOAD   6'd4 
`define STORE  6'd6  
`define BNEZ   6'd9
`define HALT   6'd10 


module execute(
input wire [31:0] op1_pi, 
input wire [31:0] op2_pi, 
input wire [5:0] aluFunc_pi,
input wire [31:0] offset_pi,
output wire [31:0] aluResult_po
);


reg [31:0] result;

assign aluResult_po  = result;
       always @(*) begin
       	      case (aluFunc_pi) 		  
 	      	   `ADD:  result = op1_pi + op2_pi;
  		   `ADDI, `LOAD, `STORE:  result = op1_pi + offset_pi;
  		   `BNEZ:  result = {31'b0, |op1_pi};  // 32-bit representation of 1 and 0
		    default: result = 32'hFFFFFFFF;
  	       endcase
      end
endmodule


