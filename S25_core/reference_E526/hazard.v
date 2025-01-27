`timescale 1ns/1ns

module hazard(
	      
 input wire [4:0]  src1EX_pi, // Source Register  1  of instruction in EX stage
 input wire [4:0]  src2EX_pi, // Source  Register 2  of instruction in EX stage
	      
 input wire [4:0]  destMem_pi,  // Destination register of instruction in MEM stage (EX/MEM pipeline register)
 input wire 	    weMem_pi, // Write Enable signal of instruction in MEM stage
	      
 input wire [4:0]  destWB_pi,   // Destination register of instruction in WB stage (MEM/WB pipeline register)
 input wire 	    weWB_pi,  // Write Enable signal of instruction in WB stage
	      
 output wire [1:0] src1Forward_po,  // 2-bit signal indicating the actual data source for operand 1
 output wire [1:0] src2Forward_po   // 2-bit signal indicating the actual data source for operand 2
);
   
   wire 	   memFwd1, wbFwd1;
   wire 	   memFwd2, wbFwd2;

   /*  1. Write three "assign" statements to indicate the source of operand 1 in the EX stage as follows.
   
  Set "memFwd1" (respectively "WbFwd1")  to TRUE if the instruction in the MEM stage (respectively WB stage) 
  will update the source-1 register of the instruction currently in the EX stage.

  Set output "src1Forward_po"  to 0, 1, or 2 as follows: 0 of there is no forwarding needed for source-1 operand,
  1 if forwarding is from the WB stage, and 2 if forwarding is from the MEM stage. Recall that forwarding from  MEM 
  gets priority over forwarding from WB. The signal must be used in module "processor" to route the correct data to
  the EX stage.       
    */
   
   //assign memFwd1 = ((destMem_pi[4]&src1EX_pi[4])&(destMem_pi[3]&src1EX_pi[3])&(destMem_pi[2]&src1EX_pi[2])&(destMem_pi[1]&src1EX_pi[1])&(destMem_pi[0]&src1EX_pi[0])&(weMem_pi));
   //assign cntrl1 =  (reg1_pi  == destReg_pi) &&  we_pi;
   assign memFwd1 =  (destMem_pi  == src1EX_pi) &&  weMem_pi;

   //assign wbFwd1 =  ((destWB_pi[4]&src1EX_pi[4])&(destWB_pi[3]&src1EX_pi[3])&(destWB_pi[2]&src1EX_pi[2])&(destWB_pi[1]&src1EX_pi[1])&(destWB_pi[0]&src1EX_pi[0])&(weWB_pi));
   assign wbFwd1 =  (destWB_pi  == src1EX_pi) &&  weWB_pi;

   assign src1Forward_po = memFwd1 ?  2'b10 : wbFwd1 ? 2'b01 : 2'b00;


   
   /*  2. Repeat the three assign statement for source-2 operand.*/

   //assign memFwd2 = ((destMem_pi[4]&src2EX_pi[4])&(destMem_pi[3]&src2EX_pi[3])&(destMem_pi[2]&src2EX_pi[2])&(destMem_pi[1]&src2EX_pi[1])&(destMem_pi[0]&src2EX_pi[0])&(weMem_pi));
   //assign wbFwd2 =  ((destWB_pi[4]&src2EX_pi[4])&(destWB_pi[3]&src2EX_pi[3])&(destWB_pi[2]&src2EX_pi[2])&(destWB_pi[1]&src2EX_pi[1])&(destWB_pi[0]&src2EX_pi[0])&(weWB_pi));
   
   assign memFwd2 = (src2EX_pi == destMem_pi) &&  weMem_pi;
   assign wbFwd2  = (src2EX_pi == destWB_pi ) &&  weWB_pi;
   assign src2Forward_po = memFwd2 ?  2'b10 : wbFwd2 ? 2'b01 : 2'b00;




endmodule


