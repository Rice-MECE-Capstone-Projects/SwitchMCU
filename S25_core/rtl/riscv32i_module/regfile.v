
module reg_file(
input wire clk,
input wire reset, 
input wire [4:0] reg1_pi, 
input wire [4:0] reg2_pi, 
input wire [4:0] destReg_pi, 
input wire we_pi, 
input wire [31:0] writeData_pi, 
output wire [31:0] operand1_po,
output wire [31:0] operand2_po
);

reg [31:0] REG_FILE[0:63];  // 32 32-bit registers


   wire   cntrl1, cntrl2;
   assign cntrl1 =  (reg1_pi  == destReg_pi) &&  we_pi;
   assign cntrl2 =  (reg2_pi  == destReg_pi) &&  we_pi ;
   assign operand1_po = cntrl1  ? writeData_pi : REG_FILE[reg1_pi];
   assign operand2_po = cntrl2  ? writeData_pi : REG_FILE[reg2_pi];


integer i;
always @(posedge clk) begin
      if (reset)
       	  for (i=0; i < 32; i=i+1)
	  	  REG_FILE[i] <= 32'b0;	
	else
	   if (we_pi && (destReg_pi!=0))  
		   REG_FILE[destReg_pi] <= writeData_pi;
      end



endmodule
