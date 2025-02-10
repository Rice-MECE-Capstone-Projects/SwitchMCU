module hazard (


 input wire clk, 
 input wire [4:0]  rs1_stage1,                // Source Register  1  of instruction in EX stage
 input wire [4:0]  rs2_stage1,                // Source  Register 2  of instruction in EX stage
	      
 input wire [4:0]  destination_reg_stage2,       // Destination register of instruction in MEM stage (EX/MEM pipeline register)
 input wire 	   write_reg_stage2,         // Write Enable signal of instruction in MEM stage
	      
 input wire [4:0]  destination_reg_stage3,    // Destination register of instruction in WB stage (MEM/WB pipeline register)
 input wire        write_reg_stage3,    // Write Enable signal of instruction in WB stage

input wire [31:0]  PC_stage1,
input wire [31:0]  PC_stage2,
input wire [31:0]  PC_stage3,



input  wire [31:0] writeData_pi,


input  wire [31:0] rd_result_stage2,
input  wire [31:0] operand1_stage1,
output wire [31:0] operand1_into_exec,

// input  wire [31:0] rd_result_stage2,
input  wire [31:0] operand2_stage1,
output wire [31:0] operand2_into_exec

);
   wire [1:0] src1Forward_alu;            // 2-bit signal indicating the actual data source for operand 1
   wire [1:0] src2Forward_alu;            // 2-bit signal indicating the actual data source for operand 2
   
   wire 	     memFwd1, wbFwd1;
   wire 	     memFwd2, wbFwd2;

   /*  1. Write three "assign" statements to indicate the source of operand 1 in the EX stage as follows.
   
  Set "memFwd1" (respectively "WbFwd1")  to TRUE if the instruction in the MEM stage (respectively WB stage) 
  will update the source-1 register of the instruction currently in the EX stage.

  Set output "src1Forward_alu"  to 0, 1, or 2 as follows: 0 of there is no forwarding needed for source-1 operand,
  1 if forwarding is from the WB stage, and 2 if forwarding is from the MEM stage. Recall that forwarding from  MEM 
  gets priority over forwarding from WB. The signal must be used in module "processor" to route the correct data to
  the EX stage.       
    */


   assign memFwd1 =  (destination_reg_stage2  == rs1_stage1) &&  write_reg_stage2;
   assign wbFwd1  =  (destination_reg_stage3  == rs1_stage1) &&  write_reg_stage3;

   /*  2. Repeat the three assign statement for source-2 operand.*/   
   assign memFwd2 = (rs2_stage1 == destination_reg_stage2)  &&  write_reg_stage2;
   assign wbFwd2  = (rs2_stage1 == destination_reg_stage3 ) &&  write_reg_stage3;


   assign src1Forward_alu = memFwd1 ?  2'b10 : wbFwd1 ? 2'b01 : 2'b00;
   assign src2Forward_alu = memFwd2 ?  2'b10 : wbFwd2 ? 2'b01 : 2'b00;

   assign operand1_into_exec = src1Forward_alu[1] ? (rd_result_stage2) :(src1Forward_alu[0] ? writeData_pi: operand1_stage1 ) ;
   assign operand2_into_exec = src2Forward_alu[1] ? (rd_result_stage2) :(src2Forward_alu[0] ? writeData_pi: operand2_stage1 ) ;



//MARKER AUTOMATED HERE START

always @(negedge clk) begin
   #25

   if (memFwd1|wbFwd1)begin 
   case(src1Forward_alu)
   2'b11: begin $write("\n HAZARD: memFwd1 <wbFwd1 also qualified but will not take>, RS1 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage2,PC_stage1,operand1_into_exec );end
   2'b10: begin $write("\n HAZARD: memFwd1, RS1 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage2,PC_stage1,operand1_into_exec );end
   2'b01: begin $write("\n HAZARD: wbFwd1,  RS1 Stage3  to ALU %5d, PC from stage 3: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage3,PC_stage1,operand1_into_exec );end
   endcase

   if (memFwd2|wbFwd2)begin 
   case(src2Forward_alu)
   2'b10: begin       $write("\n HAZARD: memFwd2 <wbFwd1 also qualified but will not take>, RS2 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage2,PC_stage1,operand2_into_exec );end
   2'b10: begin       $write("\n HAZARD: memFwd2, RS2 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage2,PC_stage1,operand2_into_exec );end
   2'b00: begin       $write("\n HAZARD: wbFwd2,  RS2 Stage3  to ALU %5d, PC from stage 3: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage3,PC_stage1,operand2_into_exec );end
   endcase
   end
end
end
//MARKER AUTOMATED HERE END



endmodule


