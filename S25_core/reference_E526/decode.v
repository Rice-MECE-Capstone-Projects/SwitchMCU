`timescale 1ns/1ns

`define NOP    6'd0
`define ADD    6'd1
`define ADDI   6'd5 
`define LOAD   6'd4 
`define STORE  6'd6  
`define BNEZ   6'd9  
`define HALT   6'd10 


module decode(
input wire [31:0] instr_pi,
output wire [5:0] opCode_po,
output wire [4:0] rs_po,
output wire [4:0] rt_po,
output wire [31:0] offset_po,
output wire [4:0] control_po,
output wire [4:0] destReg_po,
output wire writeEnable_po,
output wire isHalt_po
);

wire ALU2op, ALU1op, Load, Store, Branch;
wire [4:0] rd;
   
 assign opCode_po = instr_pi[31:26];   // INSTR[31:26]
 assign rs_po = instr_pi[25:21];  // INSTR[25:21]
 assign rt_po = instr_pi[20:16];  //INSTR[20:16]
 assign offset_po =  {{16{instr_pi[15]}}, instr_pi[15:0]}; // Sign extend 16-bit offset INSTR[15:0] to 32 bits	
 

   assign ALU2op = (opCode_po == `ADD);
  assign ALU1op = (opCode_po == `ADDI);
  assign Load =  (opCode_po == `LOAD);
  assign Store = (opCode_po == `STORE);
  assign Branch  =  (opCode_po == `BNEZ);
  assign rd = instr_pi[15:11];

  assign control_po = {Branch, Store, Load, ALU1op, ALU2op};
  assign destReg_po = control_po[0] ? rd  : (control_po[1] | control_po[2]) ? rt_po : 5'b0; // 2op: 2d 1op or LOAD: rt , Branch, Store: 0
  assign writeEnable_po  =   |control_po[2:0];  // ALU1op, ALU2op, Load instructions
  assign isHalt_po = (opCode_po == `HALT);

endmodule

