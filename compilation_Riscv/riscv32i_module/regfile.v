
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
   //  param_module params ();

   /*
      Change the two assign statements below that were used to  read the source registers.
  
     assign operand1_po = REG_FILE[reg1_pi];
     assign operand2_po = REG_FILE[reg2_pi];
   assign cntrl1=  (reg1_pi  == destReg_pi) &&  we_pi;
   assign cntrl2=  (reg2_pi == destReg_pi) && we_pi ;

   assign operand1_po =  cntrl1 ? writeData_pi : REG_FILE[reg1_pi];
   assign operand2_po = cntrl2  ? writeData_pi : REG_FILE[reg2_pi];
    
    In the new design: 
    (a) If the register being read  at this cycle is different from the one being written, return the register 
    contents as before.
    (b) If the register being read  at this cycle is also being written at this cycle,then operand1_po 
    (operand2_po) should be the value being written rather than the stored value.
  */


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


// always @(negedge clk) begin
//  $display("REGFILE:\tTime:%3d\tR0: %3d R1: %3d R2: %3d R3: %3d R4: %3d R5: %3d R6: %3d R7: %3d R8: %3d", $time, REG_FILE[0], REG_FILE[1], REG_FILE[2], REG_FILE[3], REG_FILE[4], REG_FILE[5], REG_FILE[6], REG_FILE[7],   REG_FILE[8]);
// end

endmodule
