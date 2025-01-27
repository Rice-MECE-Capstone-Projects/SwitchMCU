`timescale 1ns/1ns

////////////////////////////////////////////////////////////////
//12 vars 
// PCcount  31:00  [31:00]
// offser   63:32  [31:00]
//reg_write 64     [1]
//control   69:65  [04:00]
//dest_reg  74:70  [04:00]
//opcode    80:75  [05:00]
//op1      112:81  [31:00]
//op2      144:113 [31:00]
//alu_res  176:145 [31:00]
//data_mem 208:177 [31:00]
//ins_reg  240:209 [31:00]
//halt_reg 241     [1]

`define PC_reg             31:00   //[31:00]
`define ofs_reg            63:32   //[31:00]
`define write_reg_en_reg   64      //[1]
`define control_reg        69:65   //[04:00]
`define dest_reg           74:70   //[04:00]
`define opcode_reg         80:75   //[05:00]
`define op1_reg            112:81  //[31:00]
`define op2_reg            144:113 //[31:00]
`define alu_res_reg        176:145 //[31:00]
`define data_mem_reg       208:177 //[31:00]
`define ins_reg            240:209 //[31:00]
`define halt_reg           241     //[1]
`define opRs1_reg          246:242 //[4:0]
`define opRs2_reg          251:247 //[4:0]
`define isTakenBranch_reg  252     //[1]

// Add  remaining symbolic names and bit fields for the pipeline registers.
module processor (
       input CLK_pi,
       input CPU_RESET_pi
); 


   reg [255:0] pipeReg1, pipeReg2, pipeReg3, pipeReg4; 
       
   always @(posedge CLK_pi) begin
   
      // On reset, clear all bits of the pipeline registers   
      if (CPU_RESET_pi) begin
	 pipeReg1 <= 256'b0;
	 pipeReg2 <= 256'b0;
	 pipeReg3 <= 256'b0;
	 pipeReg4 <= 256'b0;
      end


      else begin

         

	 //Add code to manage pipeline registers in normal operation

 	 //Update fields of pipeReg1  (Done for you)

   
	//Update fields of pipeReg2
   //ID_END
   //for branch   -->Decoder --> RegFile --> pipe_reg
   //                   |--> --> --> --> --> pipe_reg 

// PCcount  31:00  [31:00]
// offser   63:32  [31:00]
//reg_write 64     [1]
//control   69:65  [04:00]
//dest_reg  74:70  [04:00]
//opcode    80:75  [05:00]
//op1      112:81  [31:00]
//op2      144:113 [31:00]
//alu_res  176:145 [31:00]
//data_mem 208:177 [31:00]
//ins_reg  240:209 [31:00]
//halt_reg 241     [1]
//opRs1_reg  246:242 [4:0]
//opRs2_reg  251:247 [4:0]
//isTakenBranch

  //$display("posedge: : %2b",isTakenBranch_po_cpu_end_MEM);
  if (isTakenBranch_po_cpu_end_MEM) begin
    pipeReg1 <= 256'b0;
    pipeReg2 <= 256'b0;
	 pipeReg3 <= 256'b0;
      end
   else begin   
	pipeReg1[`ins_reg]  <= instruction_end_IF;  
	pipeReg1[`PC_reg]   <= currentPC_end_IF;
	 
   pipeReg2[`PC_reg]            <= currentPC_end_ID;
   pipeReg2[`ofs_reg]           <= offset_po_cpu_end_ID;      //from decoder
   pipeReg2[`write_reg_en_reg]  <= write_reg_end_ID;      //from decoder
   pipeReg2[`control_reg]       <= control_po_cpu_end_ID; //from decoder
   pipeReg2[`dest_reg]          <= destReg_po_cpu_end_ID; //from decoder
   pipeReg2[`opcode_reg]        <= opCode_po_cpu_end_ID;
   pipeReg2[`op1_reg]           <= operand1_po_cpu_end_ID;    //from register
   pipeReg2[`op2_reg]           <= operand2_po_cpu_end_ID;    //from register
   //alu_res  176:145 [31:00]
   //data_mem 208:177 [31:00]
   //ins_reg  240:209 [31:00]
   pipeReg2[`halt_reg]          <= is_halt_end_ID;
   pipeReg2[`opRs1_reg]         <=rs_po_cpu;
   pipeReg2[`opRs2_reg]         <=rt_po_cpu;

	//Update fields of pipeReg3
   pipeReg3[`PC_reg]            <= currentPC_end_ALU;
   pipeReg3[`ofs_reg]           <= offset_po_cpu_end_ALU;
   pipeReg3[`write_reg_en_reg]  <= write_reg_end_ALU;      //from decoder
   pipeReg3[`control_reg]       <= control_po_cpu_end_ALU;
   pipeReg3[`dest_reg]          <= destReg_po_cpu_end_ALU; //from decoder
   pipeReg3[`opcode_reg]        <= pipeReg2[`opcode_reg];
   pipeReg3[`op1_reg]           <= operand1_po_cpu_end_ALU;
   pipeReg3[`op2_reg]           <= operand2_po_cpu_end_ALU;
   pipeReg3[`alu_res_reg]       <= aluResult_po_cpu_end_ALU;
   pipeReg3[`opRs2_reg]         <=op2_regindex_end_ALU;

   //data_mem 208:177 [31:00]
   //ins_reg  240:209 [31:00]  
   pipeReg3[`halt_reg]          <= is_halt_end_ALU;
   end

	// Update fields of pipeReg4
   pipeReg4[`PC_reg]            <= PC_reg4;
   pipeReg4[`write_reg_en_reg]  <= write_reg_end_MEM;      //from decoder
   pipeReg4[`control_reg]       <= control_po_cpu_end_MEM;
   pipeReg4[`dest_reg]          <= destReg_po_cpu_end_MEM; //from decoder
   pipeReg4[`opcode_reg]        <= opCode_po_cpu_end_MEM;
   pipeReg4[`alu_res_reg]       <= aluResult_po_cpu_end_MEM;
   pipeReg4[`data_mem_reg]      <= data_mem_po_cpu_end_MEM;
   pipeReg4[`isTakenBranch_reg] <= isTakenBranch_po_cpu_end_MEM;
   pipeReg4[`op1_reg]           <= operand1_pi_cpu_start_MEM;
   pipeReg4[`op1_reg]           <= operand2_pi_cpu_start_MEM;


      end
   
 
      
end

//fetch------------------------------------------------------------------------------------------------------------------------
//wires sent to register
wire [31:0] instruction_end_IF, currentPC_end_IF;  
wire [31:0] PC_reg4;

assign PC_reg4 =  pipeReg3[`PC_reg];

// Otherwise perform normal pipeline update operations.
// NEW: Forwarding may require some changes in normal operation  from Part 2

	 
// NEW: If required Handle Branch Misprediction: Flush appropriate pipeline registers

// NEW: Inputs to EX stage should account for forwarding commands provided by the "hazard"  module.
 

// New: Instantiate the "hazard" module
//
wire isTakenBranch_po_cpu_start_WB;
assign isTakenBranch_po_cpu_start_WB = pipeReg4[`isTakenBranch_reg];
wire [1:0] src2Forward_po_CON, src1Forward_po_CON;
hazard myHazard(
.src1EX_pi(op1_regindex_start_ALU),         //[4:0] input Source Register  1  of instruction in EX stage
.src2EX_pi(op2_regindex_start_ALU),         //[4:0] input Source Register  2  of instruction in EX stage
.destMem_pi(destReg_po_cpu_end_MEM),        //[4:0] input Destination register of instruction in MEM stage (EX/MEM pipeline register)
.weMem_pi(write_reg_end_MEM),               //[1]   input Write Enable signal of instruction in MEM stage
.destWB_pi(destReg_po_cpu_start_WB),        //[4:0] input Destination register of instruction in WB stage (MEM/WB pipeline register)
.weWB_pi(write_reg_start_WB),               //[1]   input Write Enable signal of instruction in WB stage
.src1Forward_po(src1Forward_po_CON),        //[1:0] output 2-bit signal indicating the actual data source for operand 1
.src2Forward_po(src2Forward_po_CON)         //[1:0] output 2-bit signal indicating the actual data source for operand 2
);



assign operand1_in_ALU = src1Forward_po_CON[1] ? (aluResult_po_cpu_end_MEM) :(src1Forward_po_CON[0] ? writeData_pi_cpu_WB: operand1_po_cpu_start_ALU ) ;
assign operand2_in_ALU = src2Forward_po_CON[1] ? (aluResult_po_cpu_end_MEM) :(src2Forward_po_CON[0] ? writeData_pi_cpu_WB: operand2_po_cpu_start_ALU ) ;



PC  myPC(
.clk_pi(CLK_pi), //input wire
.reset_pi(CPU_RESET_pi), //input wire
.halt_pi(is_halt_start_MEM), //input wire
.isTakenBranch_pi(isTakenBranch_po_cpu_end_MEM), //input wire
.targetPC_pi(NextPC_end_MEM), //input wire [31:0]
.pc_po(currentPC_end_IF) ); //output wire[31:0]

insMem  myInstructionMem(
.pc_pi(currentPC_end_IF),             //INPUT  Drive the primary input port "pc_pi" of "insMem" with wire  "currentPC"
.instruction_po(instruction_end_IF));   //OUTPUT  Drive wire "currentPC" from the output port of the "PC" module


//wires sent to reg 1:
//currentPC_IF 
//instruction_IF

//ID start from registers ------------------------------------------------------------------------------------------------------------------------
wire [31:0] currentPC_end_ID, instruction_start_ID;  
assign instruction_start_ID = pipeReg1[`ins_reg];
assign currentPC_end_ID =   pipeReg1[`PC_reg]; //pass along 
//assign reg_write_start_WB =   pipeReg1[`reg_write];

//intermediate signals:
wire [4:0] rs_po_cpu, rt_po_cpu;
//reg final values
wire [4:0] control_po_cpu_end_ID, destReg_po_cpu_end_ID;
wire [31:0] offset_po_cpu_end_ID;
wire [5:0] opCode_po_cpu_end_ID;
wire write_reg_end_ID, is_halt_end_ID;
wire [31:0] operand1_po_cpu_end_ID, operand2_po_cpu_end_ID;

decode myDecoder(
.instr_pi(instruction_start_ID),//input wire [31:0]
.opCode_po(opCode_po_cpu_end_ID),//output wire [5:0]
.rs_po(rs_po_cpu),//output wire [4:0] 
.rt_po(rt_po_cpu),//output wire [4:0]
.offset_po(offset_po_cpu_end_ID),//output wire [31:0]
.control_po(control_po_cpu_end_ID),//output wire [4:0]
.destReg_po(destReg_po_cpu_end_ID),//output wire [4:0]
.writeEnable_po(write_reg_end_ID),//output wire
.isHalt_po(is_halt_end_ID) );//output wire

regFile  myRegFile(
.clk_pi(CLK_pi),//input wire
.reset_pi(CPU_RESET_pi), //input wire resets all registers
.reg1_pi(rs_po_cpu), //input wire [4:0]
.reg2_pi(rt_po_cpu), //input wire [4:0]
.destReg_pi(destReg_po_cpu_start_WB), //input wire [4:0]
.we_pi(write_reg_start_WB), //input wire
.writeData_pi(writeData_pi_cpu_WB), //input wire [31:0]
.operand1_po(operand1_po_cpu_end_ID), //output wire [31:0]
.operand2_po(operand2_po_cpu_end_ID) );//output wire [31:0]


//wires sent to reg2
//currentPC_end_ID 
//opCode_po_cpu_end_ID
//offset_po_cpu_end_ID
//control_po_cpu_end_ID
//destReg_po_cpu_end_ID
//write_reg_end_ID
//is_halt_end_ID
//operand1_po_cpu_end_ID
//operand2_po_cpu_end_ID




//start of ALU ------------------------------------------------------------------------------------------------------------------------

wire [31:0] currentPC_end_ALU;  
wire [4:0] control_po_cpu_end_ALU, destReg_po_cpu_end_ALU;
wire write_reg_end_ALU, is_halt_end_ALU;
wire [31:0] aluResult_po_cpu_end_ALU;

wire [31:0] operand1_po_cpu_start_ALU, operand2_po_cpu_start_ALU, operand1_po_cpu_end_ALU, operand2_po_cpu_end_ALU;
wire [31:0] operand1_in_ALU, operand2_in_ALU;
wire [5:0] opCode_po_cpu_start_ALU, opCode_po_cpu_end_ALU;
wire [4:0] op1_regindex_start_ALU, op2_regindex_start_ALU, op2_regindex_end_ALU;
wire [31:0] offset_po_cpu_start_ALU, offset_po_cpu_end_ALU;

//passed vars 6
assign currentPC_end_ALU       = pipeReg2[`PC_reg];
assign write_reg_end_ALU       = pipeReg2[`write_reg_en_reg];
assign destReg_po_cpu_end_ALU  = pipeReg2[`dest_reg];
assign control_po_cpu_end_ALU  = pipeReg2[`control_reg];
assign is_halt_end_ALU         = pipeReg2[`halt_reg]; 
assign operand1_po_cpu_end_ALU = pipeReg2[`op1_reg];
assign operand2_po_cpu_end_ALU = pipeReg2[`op2_reg];
assign offset_po_cpu_end_ALU   = pipeReg2[`ofs_reg];
assign op2_regindex_end_ALU = pipeReg2[`opRs2_reg];


//  assign opCode_po_cpu_end_ALU   = pipeReg2[`opcode_reg];
assign op1_regindex_start_ALU = pipeReg2[`opRs1_reg];
assign op2_regindex_start_ALU = pipeReg2[`opRs2_reg];

//for alu Ports
assign operand1_po_cpu_start_ALU = pipeReg2[`op1_reg];
assign operand2_po_cpu_start_ALU = pipeReg2[`op2_reg];
assign opCode_po_cpu_start_ALU   = pipeReg2[`opcode_reg];
assign offset_po_cpu_start_ALU   = pipeReg2[`ofs_reg];

execute  myExecute(
.op1_pi(operand1_in_ALU), //input wire [31:0]
.op2_pi(operand2_in_ALU),// input wire [31:0]
.aluFunc_pi(opCode_po_cpu_start_ALU), //input wire [5:0]
.offset_pi(offset_po_cpu_start_ALU), //input wire [31:0]
.aluResult_po(aluResult_po_cpu_end_ALU) );//output wire [31:0] New Var

//passed to reg 3: (8)
//currentPC_end_ALU      
//write_reg_end_ALU      
//destReg_po_cpu_end_ALU 
//control_po_cpu_end_ALU 
//is_halt_end_ALU         
//aluResult_po_cpu_end_ALU
//offset_po_cpu_start_ALU
//operand2_po_cpu_start_ALU


//start MEM ------------------------------------------------------------------------------------------------------------------------


wire [31:0] currentPC_start_MEM, branchCondTrue_pi_start_MEM, offset_po_cpu_start_MEM, aluResult_po_cpu_end_MEM;
wire [31:0] operand2_pi_cpu_start_MEM, mem_addr_start_MEM, operand1_pi_cpu_start_MEM, data_stored;
wire [5:0] opCode_po_cpu_end_MEM;
wire [4:0] is_branch_start_MEM, mem_load_start_MEM, mem_store_start_MEM, destReg_po_cpu_end_MEM, control_po_cpu_end_MEM, operand2_reg_index_start_MEM; // control reg
wire write_reg_end_MEM, is_halt_start_MEM;


//passed varivles
assign write_reg_end_MEM         = pipeReg3[`write_reg_en_reg];
assign destReg_po_cpu_end_MEM    = pipeReg3[`dest_reg];
assign control_po_cpu_end_MEM    = pipeReg3[`control_reg];
assign aluResult_po_cpu_end_MEM  = pipeReg3[`alu_res_reg];
assign opCode_po_cpu_end_MEM     = pipeReg3[`opcode_reg];

//branch and Mem 
//assign control_po_cpu_start_MEM   = pipeReg3[`control_reg3];
//assign aluResult_po_cpu_start_MEM = pipeReg3[`alu_res_reg3];

//branch
assign currentPC_start_MEM          = pipeReg3[`PC_reg];
assign is_branch_start_MEM          = pipeReg3[`control_reg];
assign branchCondTrue_pi_start_MEM  = pipeReg3[`alu_res_reg];
assign offset_po_cpu_start_MEM      = pipeReg3[`ofs_reg];
//for PC
assign is_halt_start_MEM            = pipeReg3[`halt_reg]; 

//ports of memory
assign operand1_pi_cpu_start_MEM  = pipeReg3[`op1_reg];// value for load
assign operand2_reg_index_start_MEM  = pipeReg3[`opRs2_reg];// value for load
assign operand2_pi_cpu_start_MEM  = pipeReg3[`op2_reg];// value for load
assign mem_load_start_MEM   = pipeReg3[`control_reg]; 
assign mem_store_start_MEM   = pipeReg3[`control_reg]; 
assign mem_addr_start_MEM = pipeReg3[`alu_res_reg];//adress




//.destWB_pi(destReg_po_cpu_start_WB),        //[4:0] input Destination register of instruction in WB stage (MEM/WB pipeline register)
//.weWB_pi(write_reg_start_WB),  
//pipeReg3[`opRs2_reg]
//assign wbFwd2  = (src2EX_pi == destWB_pi ) &&  weWB_pi;
wire wb_reg_fwd2;
assign wb_reg_fwd2 = ((operand2_reg_index_start_MEM == destReg_po_cpu_start_WB ) &&  write_reg_start_WB);
assign data_stored = wb_reg_fwd2 ? writeData_pi_cpu_WB : operand2_pi_cpu_start_MEM;

dataMem myDataMem(
.clk_pi(CLK_pi), // input wire
.reset_pi(CPU_RESET_pi), //input wire
.load_pi(mem_load_start_MEM[2]),
.store_pi(mem_store_start_MEM[3]), //input wire
.address_pi(mem_addr_start_MEM), //input wire [31:0]
.storeData_pi(data_stored), // input wire [31:0]
.loadData_po(data_mem_po_cpu_end_MEM) );//output wire  [31:0]

branchPC  myBranch(
.currentPC_pi(currentPC_start_MEM), //input wire [31:0]
.branchCondTrue_pi(branchCondTrue_pi_start_MEM[0]), //input wire
.isBranch_pi(is_branch_start_MEM[4]), //input wire
.branchOffset_pi(offset_po_cpu_start_MEM), //input wire [31:0]
.isTakenBranch_po(isTakenBranch_po_cpu_end_MEM), //output wire
.targetPC_po(NextPC_end_MEM) ); //output wire [31:0]

wire isTakenBranch_po_cpu_end_MEM;
wire [31:0] data_mem_po_cpu_end_MEM, NextPC_end_MEM;



//----------Following sent to reg 4
//data_mem_po_cpu_end_MEM
//aluResult_po_cpu_end_MEM
//control_po_cpu_end_MEM
//destReg_po_cpu_end_MEM
//write_reg_end_MEM

//start WB ------------------------------------------------------------------------------------------------------------------------


wire [31:0] aluResult_po_cpu_start_WB, data_mem_po_cpu_start_WB, writeData_pi_cpu_WB;
wire [4:0] destReg_po_cpu_start_WB, control_po_cpu_start_WB; // control reg
wire write_reg_start_WB;

//Mux thses
assign control_po_cpu_start_WB    = pipeReg4[`control_reg];
//Goes to register
assign destReg_po_cpu_start_WB    = pipeReg4[`dest_reg];
assign write_reg_start_WB         = pipeReg4[`write_reg_en_reg];
assign aluResult_po_cpu_start_WB  = pipeReg4[`alu_res_reg];
assign data_mem_po_cpu_start_WB   = pipeReg4[`data_mem_reg];

assign writeData_pi_cpu_WB = control_po_cpu_start_WB[2] ? data_mem_po_cpu_start_WB : aluResult_po_cpu_start_WB;
//assign writeData_pi_cpu    = control_po_cpu[2] ? loadData_po_cpu :  aluResult_po_cpu;

//Goes to register here**



// The following code is to help debugging. It prints out the values of important fields in the pipeline registers at
//  each clock cycle (negative clock edge). Redirect your output to a file and grep for "pipeReg1", "pipeReg2"  etc.
// It assumes names for some Pipeline Register fields that you will need to change the names you choose.
   
   always @(negedge CLK_pi) begin
      //$display("*****************************************************");
      //$display("Time: %3d PC: Address: %3d", $time, currentPC);
      //$display("Time: %3d PR1: instruction: %x PCvalue: %3d", $time, pipeReg1[`insField], pipeReg1[`PCField]);
      //$display("negedge: : %2b",isTakenBranch_po_cpu_end_MEM);
      /*
      $display("FpD, REG_1: PC: %2d ofs: %2d con: %d destR: %d opC: %d op1: %d  op2: %d aluR: %d d_mem: %d halt: %b  opRs1 %d opRs2 %d", pipeReg1[`PC_reg], pipeReg1[`ofs_reg], pipeReg1[`control_reg], pipeReg1[`dest_reg], pipeReg1[`opcode_reg],pipeReg1[`op1_reg],pipeReg1[`op2_reg],pipeReg1[`alu_res_reg],pipeReg1[`data_mem_reg],pipeReg1[`halt_reg],pipeReg1[`opRs1_reg],pipeReg1[`opRs2_reg]);
      $display("DpE, REG_2: PC: %2d ofs: %2d con: %d destR: %d opC: %d op1: %d  op2: %d aluR: %d d_mem: %d halt: %b  opRs1 %d opRs2 %d", pipeReg2[`PC_reg], pipeReg2[`ofs_reg], pipeReg2[`control_reg], pipeReg2[`dest_reg], pipeReg2[`opcode_reg],pipeReg2[`op1_reg],pipeReg2[`op2_reg],pipeReg2[`alu_res_reg],pipeReg2[`data_mem_reg],pipeReg2[`halt_reg],pipeReg2[`opRs1_reg],pipeReg2[`opRs2_reg]);
      $display("EpM, REG_3: PC: %2d ofs: %2d con: %d destR: %d opC: %d op1: %d  op2: %d aluR: %d d_mem: %d halt: %b  opRs1 %d opRs2 %d", pipeReg3[`PC_reg], pipeReg3[`ofs_reg], pipeReg3[`control_reg], pipeReg3[`dest_reg], pipeReg3[`opcode_reg],pipeReg3[`op1_reg],pipeReg3[`op2_reg],pipeReg3[`alu_res_reg],pipeReg3[`data_mem_reg],pipeReg3[`halt_reg],pipeReg3[`opRs1_reg],pipeReg3[`opRs2_reg]);
      $display("REG_3X PC: %2d ofs: %2d destR: %d op1_iALU: %d  op2_iALU: %d aluR: %d src1Forward_po_CON %b src2Forward_po_CON %b", pipeReg3[`PC_reg], pipeReg3[`ofs_reg], pipeReg3[`dest_reg],operand1_in_ALU,operand2_in_ALU,pipeReg3[`alu_res_reg],src1Forward_po_CON,src2Forward_po_CON);
      $display("REG_3X alu_MEM: %d alu_wB: %d op1: %d op2: %d",aluResult_po_cpu_end_MEM, aluResult_po_cpu_start_WB, operand1_po_cpu_start_ALU, operand2_po_cpu_start_ALU);
      $display("Wp, REG_4: PC: %2d ofs: %2d con: %d destR: %d opC: %d op1: %d  op2: %d aluR: %d d_mem: %d halt: %b  opRs1 %d opRs2 %d", pipeReg4[`PC_reg], pipeReg4[`ofs_reg], pipeReg4[`control_reg], pipeReg4[`dest_reg], pipeReg4[`opcode_reg],pipeReg4[`op1_reg],pipeReg4[`op2_reg],pipeReg4[`alu_res_reg],pipeReg4[`data_mem_reg],pipeReg4[`halt_reg],pipeReg4[`opRs1_reg],pipeReg4[`opRs2_reg]);
      */
      
      
 //     $display("REG_1: PC: %2d ofs: %2d wriEn: %b control: %b destR: %d opC: %b op1: %d  op2: %d aluR: %d d_mem: %d halt: %b  opRs1 %d opRs2 %b", pipeReg1[`PC_reg], pipeReg1[`ofs_reg], pipeReg1[`write_reg_en_reg],pipeReg1[`control_reg], pipeReg1[`dest_reg], pipeReg1[`opcode_reg],pipeReg1[`op1_reg],pipeReg1[`op2_reg],pipeReg1[`alu_res_reg],pipeReg1[`data_mem_reg],pipeReg1[`halt_reg],pipeReg1[`opRs1_reg],pipeReg1[`opRs1_reg]);
   //   $display("REG_2: PC: %2d ofs: %2d wriEn: %b control: %b destR: %d opC: %b op1: %d  op2: %d aluR: %d d_mem: %d halt: %b  opRs1 %d opRs2 %b", pipeReg2[`PC_reg], pipeReg2[`ofs_reg], pipeReg2[`write_reg_en_reg],pipeReg2[`control_reg], pipeReg2[`dest_reg], pipeReg2[`opcode_reg],pipeReg2[`op1_reg],pipeReg2[`op2_reg],pipeReg2[`alu_res_reg],pipeReg2[`data_mem_reg],pipeReg2[`halt_reg],pipeReg2[`opRs1_reg],pipeReg2[`opRs1_reg]);
     // $display("REG_3: PC: %2d ofs: %2d wriEn: %b control: %b destR: %d opC: %b op1: %d  op2: %d aluR: %d d_mem: %d halt: %b  opRs1 %d opRs2 %b", pipeReg3[`PC_reg], pipeReg3[`ofs_reg], pipeReg3[`write_reg_en_reg],pipeReg3[`control_reg], pipeReg3[`dest_reg], pipeReg3[`opcode_reg],pipeReg3[`op1_reg],pipeReg3[`op2_reg],pipeReg3[`alu_res_reg],pipeReg3[`data_mem_reg],pipeReg3[`halt_reg],pipeReg3[`opRs1_reg],pipeReg3[`opRs1_reg]);
      //$display("REG_4: PC: %2d ofs: %2d wriEn: %b control: %b destR: %d opC: %b op1: %d  op2: %d aluR: %d d_mem: %d halt: %b  opRs1 %d opRs2 %b", pipeReg4[`PC_reg], pipeReg4[`ofs_reg], pipeReg4[`write_reg_en_reg],pipeReg4[`control_reg], pipeReg4[`dest_reg], pipeReg4[`opcode_reg],pipeReg4[`op1_reg],pipeReg4[`op2_reg],pipeReg4[`alu_res_reg],pipeReg4[`data_mem_reg],pipeReg4[`halt_reg],pipeReg4[`opRs1_reg],pipeReg4[`opRs1_reg]);
      
     
      //$display("Time: %3d REG_1: ins: %d PC_reg: %2d ofs_reg: %2d write_reg_en_reg: %b control_reg: %b dest_reg: %d opcode_reg: %b op1_reg: %d  op2_reg: %d alu_res: %d data_mem: %d halt: %b  opRs1 %d opRs1 %b", $time, pipeReg1[`ins_reg], pipeReg1[`PC_reg], pipeReg1[`ofs_reg], pipeReg1[`write_reg_en_reg],pipeReg1[`control_reg], pipeReg1[`dest_reg], pipeReg1[`opcode_reg],pipeReg1[`op1_reg],pipeReg1[`op2_reg],pipeReg1[`alu_res_reg],pipeReg1[`data_mem_reg],pipeReg1[`halt_reg],pipeReg1[`opRs1_reg],pipeReg1[`opRs1_reg]);
      //$display("Time: %3d REG_2: ins: %d PC_reg: %2d ofs_reg: %2d write_reg_en_reg: %b control_reg: %b dest_reg: %d opcode_reg: %b op1_reg: %d  op2_reg: %d alu_res: %d data_mem: %d halt: %b  opRs1 %d opRs1 %b", $time, pipeReg2[`ins_reg], pipeReg2[`PC_reg], pipeReg2[`ofs_reg], pipeReg2[`write_reg_en_reg],pipeReg2[`control_reg], pipeReg2[`dest_reg], pipeReg2[`opcode_reg],pipeReg2[`op1_reg],pipeReg2[`op2_reg],pipeReg2[`alu_res_reg],pipeReg2[`data_mem_reg],pipeReg2[`halt_reg],pipeReg2[`opRs1_reg],pipeReg2[`opRs1_reg]);
      //$display("Time: %3d REG_3: ins: %d PC_reg: %2d ofs_reg: %2d write_reg_en_reg: %b control_reg: %b dest_reg: %d opcode_reg: %b op1_reg: %d  op2_reg: %d alu_res: %d data_mem: %d halt: %b  opRs1 %d opRs1 %b", $time, pipeReg3[`ins_reg], pipeReg3[`PC_reg], pipeReg3[`ofs_reg], pipeReg3[`write_reg_en_reg],pipeReg3[`control_reg], pipeReg3[`dest_reg], pipeReg3[`opcode_reg],pipeReg3[`op1_reg],pipeReg3[`op2_reg],pipeReg3[`alu_res_reg],pipeReg3[`data_mem_reg],pipeReg3[`halt_reg],pipeReg3[`opRs1_reg],pipeReg3[`opRs1_reg]);
      //$display("Time: %3d REG_4: ins: %d PC_reg: %2d ofs_reg: %2d write_reg_en_reg: %b control_reg: %b dest_reg: %d opcode_reg: %b op1_reg: %d  op2_reg: %d alu_res: %d data_mem: %d halt: %b  opRs1 %d opRs1 %b", $time, pipeReg4[`ins_reg], pipeReg4[`PC_reg], pipeReg4[`ofs_reg], pipeReg4[`write_reg_en_reg],pipeReg4[`control_reg], pipeReg4[`dest_reg], pipeReg4[`opcode_reg],pipeReg4[`op1_reg],pipeReg4[`op2_reg],pipeReg4[`alu_res_reg],pipeReg4[`data_mem_reg],pipeReg4[`halt_reg],pipeReg4[`opRs1_reg],pipeReg4[`opRs1_reg]);
      //$display("Time: %3d REG_2: src1Reg: %2d  src2Reg: %2d  destReg: %2d", $time, pipeReg2[`opRs1_reg], pipeReg2[`opRs2_reg], pipeReg2[`dest_reg]);
      //$display("Time: %3d REG_3: opcode: %b OP1: %3d OP2: %3d", $time, pipeReg2[`opcode_reg], pipeReg2[`op1_reg], pipeReg2[`op2_reg]);
      //$display("Time: %3d RE: ALUresult: %d OP1: %3d OP2: %3d", $time, pipeReg3[`alu_res_reg], pipeReg3[`op1_reg], pipeReg3[`op2_reg]);
      //$display("Time: %3d PR4: DestReg: %2d  control_reg4: %x  data_mem_reg: %3d write_reg_enable: %1d reg_write_val %3d ", $time, pipeReg4[`dest_reg], pipeReg4[`control_reg], pipeReg4[`data_mem_reg], pipeReg4[`write_reg_en_reg], writeData_pi_cpu_WB);
      //$display("*****************************************************");
      //$display(" ");
   end // always @ (negedge CLK_pi)



   // Suggestion: Define auxiliary wire variables to identify pipeline register
   // signals that are routed to modules. That will avoid having complicated 
   // pipeline register indexes as arguments in  module instantiations. These
   // auxiliary signals can be set using simple "assign" statements.

   // Instantiate the  function unit modules and connect them up. The insMem 
   // module is done for you below.
//wire [31:0] currentPC;    //  Wire  from IF stage to pipeReg1   
//wire [31:0] instruction;  //  Wire  from IF stage to pipeReg1   




endmodule
