module hazard (


 input wire clk, 
 input wire [4:0]  rs1_stage1,                // Source Register  1  of instruction in EX stage
 input wire [4:0]  rs2_stage1,                // Source  Register 2  of instruction in EX stage
 input wire [11:0] csr_stage1,                // Source  Register 2  of instruction in EX stage
	      
 input wire [4:0]  destination_reg_stage2,       // Destination register of instruction in MEM stage (EX/MEM pipeline register)
 input wire 	     write_reg_stage2,         // Write Enable signal of instruction in MEM stage
	      
 input wire [11:0]  csr_destination_reg_stage2,       // Destination register of instruction in MEM stage (EX/MEM pipeline register)
 input wire 	    csr_write_reg_stage2,             // Write Enable signal of instruction in MEM stage


 input wire [4:0]  destination_reg_stage3,         // Destination register of instruction in WB stage (MEM/WB pipeline register)
 input wire        write_reg_stage3,               // Write Enable signal of instruction in WB stage

 input wire [11:0] csr_destination_reg_stage3,     // Destination register of instruction in MEM stage (EX/MEM pipeline register)
 input wire 	          csr_write_reg_stage3,     // Write Enable signal of instruction in MEM stage



input wire [31:0]  PC_stage1,
input wire [31:0]  PC_stage2,
input wire [31:0]  PC_stage3,



input  wire [31:0] writeData_pi,
input  wire [31:0] csr_wbstage_data,

input  wire [31:0] csr_memstage_data,
input  wire [31:0] csr_result_stage1,
output wire [31:0] csr_into_exec,

input  wire [31:0] rd_result_stage2,
input  wire [31:0] operand1_stage1,
output wire [31:0] operand1_into_exec,

// input  wire [31:0] rd_result_stage2,
input  wire [31:0] operand2_stage1,
output wire [31:0] operand2_into_exec

);
   wire [1:0] src1Forward_alu;            // 2-bit signal indicating the actual data source for operand 1
   wire [1:0] src2Forward_alu;            // 2-bit signal indicating the actual data source for operand 2
   wire [1:0] csrForward_alu;            // 2-bit signal indicating the actual data source for operand 2
   
   wire 	     memFwd1, wbFwd1;
   wire 	     memFwd2, wbFwd2;


   //foward from stage2 MEM reg to exec for RS1
   assign memFwd1 =  (destination_reg_stage2  == rs1_stage1) &&  write_reg_stage2;
   

   //foward from stage3 WB  reg to exec for RS1
   assign wbFwd1  =  (destination_reg_stage3  == rs1_stage1) &&  write_reg_stage3;


   //foward from stage2 MEM reg to exec for RS2
   assign memFwd2 = (rs2_stage1 == destination_reg_stage2)  &&  write_reg_stage2;

   
   //foward from stage3 WB  reg to exec for RS3
   assign wbFwd2  = (rs2_stage1 == destination_reg_stage3 ) &&  write_reg_stage3;

   
   wire csr_memFwd, csr_wbFwd;
   //foward from stage2 MEM reg to exec for CSR
   assign csr_memFwd =  (csr_destination_reg_stage2  == csr_stage1) &&  csr_write_reg_stage2;
   assign csr_wbFwd  =  (csr_destination_reg_stage3  == csr_stage1) &&  csr_write_reg_stage3;



   
   assign src1Forward_alu = memFwd1    ?  2'b10 : wbFwd1    ? 2'b01 : 2'b00;
   assign src2Forward_alu = memFwd2    ?  2'b10 : wbFwd2    ? 2'b01 : 2'b00;

   assign csrForward_alu  = csr_memFwd ?  2'b10 : csr_wbFwd ? 2'b01 : 2'b00;



   assign operand1_into_exec = src1Forward_alu[1] ? (rd_result_stage2)  :(src1Forward_alu[0] ? writeData_pi       : operand1_stage1    ) ;
   assign operand2_into_exec = src2Forward_alu[1] ? (rd_result_stage2)  :(src2Forward_alu[0] ? writeData_pi       : operand2_stage1    ) ;
   assign      csr_into_exec =  csrForward_alu[1] ? (csr_memstage_data) :( csrForward_alu[0] ? csr_wbstage_data   : csr_result_stage1  ) ;



//MARKER AUTOMATED HERE START

always @(negedge clk) begin
   #25

   if (memFwd1|wbFwd1)begin 
   case(src1Forward_alu)
   2'b11: begin $write("\n HAZARD: memFwd1 <wbFwd1 also qualified but will not take>, RS1 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage2,PC_stage1,operand1_into_exec );end
   2'b10: begin $write("\n HAZARD: memFwd1, RS1 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage2,PC_stage1,operand1_into_exec );end
   2'b01: begin $write("\n HAZARD: wbFwd1,  RS1 Stage3  to ALU %5d, PC from stage 3: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage3,PC_stage1,operand1_into_exec );end
   endcase
   end

   if (memFwd2|wbFwd2)begin 
   case(src2Forward_alu)
   2'b11: begin       $write("\n HAZARD: memFwd2 <wbFwd2 also qualified but will not take>, RS2 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage2,PC_stage1,operand2_into_exec );end
   2'b10: begin       $write("\n HAZARD: memFwd2, RS2 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage2,PC_stage1,operand2_into_exec );end
   2'b01: begin       $write("\n HAZARD: wbFwd2,  RS2 Stage3  to ALU %5d, PC from stage 3: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage3,PC_stage1,operand2_into_exec );end
   endcase
   end


 if (csr_memFwd|csr_wbFwd)begin 
   case(csrForward_alu)
   2'b11: begin       $write("\n HAZARD: csr_memFwd <wbFwd1 also qualified but will not take>, C_RS Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", csr_stage1,PC_stage2,PC_stage1,csr_into_exec );end
   2'b10: begin       $write("\n HAZARD: csr_memFwd, C_RS Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h",                                           csr_stage1,PC_stage2,PC_stage1,csr_into_exec );end
   2'b01: begin       $write("\n HAZARD: csr_wbFwd,  C_RS Stage3  to ALU %5d, PC from stage 3: %8h forwarded to PC %8h, Forwarded value %8h",                                           csr_stage1,PC_stage3,PC_stage1,csr_into_exec );end
   endcase
   end
end
//MARKER AUTOMATED HERE END



endmodule


