module riscv32i 
   # (
    parameter   N_param = 32
   ) (
    input  wire clk,
    input  wire reset
    // input  wire en
);

    // wire i_clk;
    // wire i_en;
    wire [N_param-1:0]  instruction;
    wire  [4:0] rd_o;
    wire  [4:0] rs1_o;
    wire  [4:0] rs2_o;
    wire  [2:0] fun3_o;
    wire  [6:0] fun7_o;
    wire [31:0] imm_o;
    wire [6:0] INST_typ_o, opcode_o;
    wire [63:0] Single_Instruction_o;
    wire i_en;

    // param_module params ();


    ins_mem ins_mem(
        .clk(clk),
        .reset(reset),
        .pc_o(pc_o),
        .instruction_o(instruction)
    );

    decode #(.N_param(N_param)) decode_debug
    (
   .i_clk(clk),
   .i_en(i_en),
   .instruction(instruction),
   .rd_o(rd_o),
   .rs1_o(rs1_o),
   .rs2_o(rs2_o),
   .fun3_o(fun3_o),
   .fun7_o(fun7_o),
   .imm_o(imm_o),
   .INST_typ_o(INST_typ_o),
   .opcode_o(opcode_o),
   .Single_Instruction_o(Single_Instruction_o)
   );
//    .(),
//    .(),

wire we_pi;
wire [31:0] pc_o;
wire [31:0] writeData_pi,operand1_po,operand2_po;

 reg_file reg_file(
.clk(clk),
.reset(reset), 
.reg1_pi(rs1_o), 
.reg2_pi(rs2_o), 
.destReg_pi(rd_o), 
.we_pi(we_pi), 
.writeData_pi(writeData_pi), 
.operand1_po(operand1_po),
.operand2_po(operand2_po)
);




execute  #(.N_param(32)) execute 
    (.i_clk(clk),    
     .Single_Instruction_i(Single_Instruction_o),
     .operand1_pi(operand1_po),
     .operand2_pi(operand2_po),
     .rs1_i(rs1_o), 
     .rs2_i(rs2_o), 
     .imm_i(imm_o)
   );

            // $display("PC: %h, Instruction: %h, word in processor %h", pc, instruction,pc >> 2);

 always @(negedge clk) begin : checker
            // $display("%t:   INST_typ_o:{%h},   fun3_o:{%h}, fun7_o:{%h},  opcode_o:{%h},   Sing_Instru:{%h},   insturction_in:{%h}    ",
            // $time,          INST_typ_o,        fun3_o,      fun7_o,     opcode_o,Single_Instruction_o   , instruction_o    
            // );
            // $write("\n %t: ERR:{%b} fun3:{%h}, fun7:{%h},  opcode:{%h},  insturction:{%h}    ",
            // $time,    ~ (|Single_Instruction_o),     fun3_o,      fun7_o,     opcode_o, instruction   
            // );
            $write("\n %d: E:%b I:{%h}    ",pc_o,~ (|Single_Instruction_o),  instruction   
            );
 end


endmodule









  

