`timescale 1ns/1ns

// Example of memonic names and bit fields for two pipeline register fields.

`define insField 		31:0
`define PCField  		212:181

`define opCodeField 		170:165
`define offsetField		63:32
`define controlField		164:160
`define destField		175:171
`define weField 		213
`define isHaltField 		214
`define operand1Field 		95:64
`define operand2Field 		127:96

`define aluResultField 		159:128

`define loadDataField 		255:224
`define isTakenBranchField 	215


// Add  remaining symbolic names and bit fields for the pipeline registers.



module processor (
       input CLK_pi,
       input CPU_RESET_pi
); 

   // Defining four pipeline registers each 256 bits wide.
   // pipeReg1 (IF/ID), pipeReg2 (ID/EX), pipeReg3 (EX/MEM), pipeReg4 (MEMEB)
   
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

	 // Add code to manage pipeline registers in normal operation

 	 // Update fields of pipeReg1  (Done for you)
	 pipeReg1[`insField]  <= instruction;  
	 pipeReg1[`PCField]   <= currentPC;
	 
	 // Update fields of pipeReg2
	 pipeReg2[`PCField]   		<= pipeReg1[`PCField];
	 pipeReg2[`opCodeField] 	<= opCode;
	 pipeReg2[`offsetField] 	<= offset;
	 pipeReg2[`controlField] 	<= control;
	 pipeReg2[`destField]		<= destReg;
	 pipeReg2[`weField] 		<= writeEnable;
	 pipeReg2[`isHaltField] 	<= isHalt;
	 pipeReg2[`operand1Field] 	<= operand1;
	 pipeReg2[`operand2Field] 	<= operand2;


	 // Update fields of pipeReg3
	 pipeReg3[`PCField]   		<= pipeReg2[`PCField];
	 pipeReg3[`controlField] 	<= pipeReg2[`controlField];
	 pipeReg3[`weField] 		<= pipeReg2[`weField];
	 pipeReg3[`offsetField] 	<= pipeReg2[`offsetField];
	 pipeReg3[`operand2Field] 	<= pipeReg2[`operand2Field];
	 pipeReg3[`isHaltField] 	<= pipeReg2[`isHaltField];
	 pipeReg3[`destField]		<= pipeReg2[`destField];
	 pipeReg3[`aluResultField] 	<= aluResult;


	 // Update fields of pipeReg4
	 pipeReg4[`controlField] 		<= pipeReg3[`controlField];
	 pipeReg4[`aluResultField] 		<= pipeReg3[`aluResultField];
	 pipeReg4[`weField] 			<= pipeReg3[`weField];
	 pipeReg4[`isHaltField] 		<= pipeReg3[`isHaltField];
	 pipeReg4[`destField]			<= pipeReg3[`destField];
	 pipeReg4[`loadDataField] 		<= loadData;
	 pipeReg4[`isTakenBranchField] 		<= isTakenBranch;


      
      end
end


   // Suggestion: Define auxiliary wire variables to identify pipeline register
   // signals that are routed to modules. That will avoid having complicated 
   // pipeline register indexes as arguments in  module instantiations. These
   // auxiliary signals can be set using simple "assign" statements.
   // Instantiate the  function unit modules and connect them up. The insMem 
   // module is done for you below.
 
   

   //insMem block variable
   wire [31:0] currentPC;    //  Wire  from IF stage to pipeReg1 
   wire [31:0] instruction;  //  Wire  from IF stage to pipeReg1  
 

   wire [5:0] opCode;
   wire [4:0] rs;
   wire [4:0] rt;
   wire [31:0] offset;
   wire [4:0] control;
   wire [4:0] destReg;
   wire writeEnable;
   wire isHalt;   

   wire [31:0] operand1;
   wire [31:0] operand2;

   wire [31:0] aluResult;

   wire [31:0] loadData;
   wire [31:0] loadreg;

   wire isTakenBranch; 
   wire [31:0] targetPC;
   
   
insMem  myInstructionMem(
.pc_pi(currentPC),
.instruction_po(instruction) 
);
   

decode myDecoder(
.instr_pi(pipeReg1[`insField]),
.opCode_po(opCode),
.rs_po(rs),
.rt_po(rt),
.offset_po(offset),
.control_po(control),
.destReg_po(destReg),
.writeEnable_po(writeEnable),
.isHalt_po(isHalt)
);




assign loadreg = pipeReg4[162] ? pipeReg4[`loadDataField] : pipeReg4[`aluResultField];   //Use a MUX to select the written data into the register file
	
regFile  myRegFile(
.clk_pi(CLK_pi),
.reset_pi(CPU_RESET_pi), 
.reg1_pi(rs), 
.reg2_pi(rt), 
.destReg_pi(pipeReg4[`destField]), 
.we_pi(pipeReg4[`weField]), 
.writeData_pi(loadreg),         // the write data port is connected to a MUX classified as above
.operand1_po(operand1),         // which allows ALU calculation result as well as the data loading instruction
.operand2_po(operand2)
);




execute  myExecute(
.op1_pi(pipeReg2[`operand1Field]),
.op2_pi(pipeReg2[`operand2Field]),
.aluFunc_pi(pipeReg2[`opCodeField]),
.offset_pi(pipeReg2[`offsetField]),
.aluResult_po(aluResult)
);




dataMem myDataMem(
.clk_pi(CLK_pi),
.reset_pi(CPU_RESET_pi), 
.load_pi(pipeReg3[162]),
.store_pi(pipeReg3[163]),        // control signal is a 5 bits signal that indicates 5 different instruction type 
.address_pi(pipeReg3[`aluResultField]),       // from MSB to LSB they are: {Branch, Store, Load, ALU1op, ALU2op}, so the 4th bit indicates the store instruction 
.storeData_pi(pipeReg3[`operand2Field]), 
.loadData_po(loadData)
);




branchPC  myBranch(
.currentPC_pi(pipeReg3[`PCField]), 
.branchCondTrue_pi(pipeReg3[128]),    // branchCondTrue is a control signal that indicates whether the branch condition is true or not by the 1st bit
.isBranch_pi(pipeReg3[164]),            // the 5th bit of the control signal shows the branch instruction
.branchOffset_pi(pipeReg3[`offsetField]),
.isTakenBranch_po(isTakenBranch), 
.targetPC_po(targetPC)
);




PC  myPC(
.clk_pi(CLK_pi),
.reset_pi(CPU_RESET_pi),
.halt_pi(pipeReg4[`isHaltField]),
.isTakenBranch_pi(isTakenBranch), 
.targetPC_pi(targetPC),
.pc_po(currentPC)
);

// The following code is to help debugging. It prints out the values of important fields in the pipeline registers at
//  each clock cycle (negative clock edge). Redirect your output to a file and grep for "pipeReg1", "pipeReg2"  etc.
// It assumes names for some Pipeline Register fields that you will need to change to match the names you choose.
/*   
   always @(negedge CLK_pi) begin
      $display("*****************************************************");
      $display("Time: %3d PC: Address: %3d", $time, currentPC);
      $display("Time: %3d PR1: instruction: %x PCvalue: %3d", $time, pipeReg1[`insField], pipeReg1[`PCField]);
      $display("Time: %3d PR2: src1Reg: %2d  src2Reg: %2d  destReg: %2d", $time, pipeReg2[`srcReg1Field], pipeReg2[`srcReg2Field], pipeReg2[`destRegField]);
      $display("Time: %3d PR3: ALUresult: %d", $time, pipeReg3[`resultField]);
      $display("Time: %3d PR4: DestReg: %2d  WE: %x  WriteData: %3d ", $time, pipeReg4[`destRegField], pipeReg4[`writeBackField], destWriteData);
      $display("*****************************************************");
      $display(" ");
   end // always @ (negedge CLK_pi)
*/
endmodule
