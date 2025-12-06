module hazard (

 input wire [4:0]  rs1_stage1,                // Source Register  1  of instruction in EX stage
 input wire [4:0]  rs2_stage1,                // Source  Register 2  of instruction in EX stage
	      
 input wire [4:0]  destination_reg_stage2,       // Destination register of instruction in MEM stage (EX/MEM pipeline register)
 input wire 	   write_reg_stage2,         // Write Enable signal of instruction in MEM stage
	      
 input wire [4:0]  destination_reg_stage3,    // Destination register of instruction in WB stage (MEM/WB pipeline register)
 input wire        write_reg_stage3,    // Write Enable signal of instruction in WB stage

 output wire [1:0] src1Forward_po,            // 2-bit signal indicating the actual data source for operand 1
 output wire [1:0] src2Forward_po             // 2-bit signal indicating the actual data source for operand 2
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


   assign memFwd1 =  (destination_reg_stage2  == rs1_stage1) &&  write_reg_stage2;
   assign wbFwd1 =  (destination_reg_stage3  == rs1_stage1) &&  write_reg_stage3;

   assign src1Forward_po = memFwd1 ?  2'b10 : wbFwd1 ? 2'b01 : 2'b00;
   /*  2. Repeat the three assign statement for source-2 operand.*/   
   assign memFwd2 = (rs2_stage1 == destination_reg_stage2) &&  write_reg_stage2;
   assign wbFwd2  = (rs2_stage1 == destination_reg_stage3 ) &&  write_reg_stage3;
   assign src2Forward_po = memFwd2 ?  2'b10 : wbFwd2 ? 2'b01 : 2'b00;




endmodule


