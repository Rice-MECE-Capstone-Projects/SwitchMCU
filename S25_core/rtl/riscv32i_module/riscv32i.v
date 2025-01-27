
`define PC_reg              31:00   //[31:00]
`define instruct            63:32   //[31:00]
`define alu_res1            95:34   //[31:00]
// `define alu_res1            95:34   //[31:00]


`define LD_ready           105     //[ 4:0]
`define SD_ready           106     //[ 4:0]
`define rd                 111:107 //[ 4:0]
`define operand_amt        115:112 //[ 3:0]
`define opRs1_reg          120:116 //[4:0]
`define opRs2_reg          127:121 //[4:0]
`define op1_reg            159:128 //[31:00]
`define op2_reg            191:160 //[31:00]
`define immediate          223:192 //[31:0]
`define alu_res2           255:224 //[31:0]
`define rd_data            287:256 //[31:0]
`define Single_Instruction 351:288 //[63:00]     


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
    wire  [N_param-1:0]  instruction;
    wire  [4:0] rd_o;
    wire  [4:0] rs1_o;
    wire  [4:0] rs2_o;
    wire  [2:0] fun3_o;
    wire  [6:0] fun7_o;
    wire  [31:0] imm_o;
    wire  [6:0] INST_typ_o, opcode_o;
    wire  [63:0] Single_Instruction_o;
    wire  i_en;

    // param_module params ();

    reg halt_i, isTakenBranch_i;
    reg [31:0] targetPC_i;

    reg [511:0] pipeReg0, pipeReg1, pipeReg2, pipeReg3;

    //branch_taken

    wire branch_taken;
    assign branch_taken = 0;

initial begin 
    halt_i          <= 0;
    targetPC_i      <= 0;
    isTakenBranch_i <= 0; 
end

    pc pc  (
        .clk_i(clk),
        .reset_i(reset),
        .halt_i(halt_i),
        .jump_inst_wire(jump_inst_wire),
        .branch_inst_wire(branch_inst_wire),
        .targetPC_i(result_secondary)
        .pc_o(pc_i)
    );

    ins_mem ins_mem(
        .clk(clk),
        .reset(reset),
        .pc_i(pc_i),
        .pc_o(pc_o),
        .instruction_o(instruction)
    );

// Pre Stage 0
    wire [31:0] pc_stage_0,instruction_stage_0;
    wire we_pi;
    wire [31:0] pc_o,pc_i;
    wire [31:0] writeData_pi,operand1_po,operand2_po;


wire [31:0] pc_stage_1;
wire [31:0] instruction_stage_1;

wire [ 4:0] rd_stage1;
wire [ 2:0] fun3_stage1;
wire [ 6:0] fun7_stage1;
wire [ 6:0] INST_typ_stage1;
wire [ 6:0] opcode_stage1;
wire [ 4:0] rs1_stage1;
wire [ 4:0] rs2_stage1;
wire [31:0] operand1_stage1;
wire [31:0] operand2_stage1;
wire [31:0] imm_stage1;
wire [63:0] Single_Instruction_stage1;
wire [31:0] alu_result_1;
wire [31:0] alu_result_2;


wire [31:0] pc_stage_2;
wire [31:0] instruction_stage_2;
wire [ 4:0] rd_stage2;
wire [ 2:0] fun3_stage2;
wire [ 6:0] fun7_stage2;
wire [ 6:0] INST_typ_stage2;
wire [ 6:0] opcode_stage2;
wire [ 4:0] rs1_stage2;
wire [ 4:0] rs2_stage2;
wire [31:0] operand1_stage2;
wire [31:0] operand2_stage2;
wire [31:0] imm_stage2;
wire [63:0] Single_Instruction_stage2;
wire [31:0] alu_result_1_stage2;
wire [31:0] alu_result_2_stage2;
wire [31:0] loaded_data;
wire LD_memory_avalible, SD_memory_avalible;

wire [31:0] pc_stage_3;
wire [31:0] instruction_stage_3;
wire [ 4:0] rd_stage3;
wire [ 2:0] fun3_stage3;
wire [ 6:0] fun7_stage3;
wire [ 6:0] INST_typ_stage3;
wire [ 6:0] opcode_stage3;
wire [ 4:0] rs1_stage3;
wire [ 4:0] rs2_stage3;
wire [31:0] operand1_stage3;
wire [31:0] operand2_stage3;
wire [31:0] imm_stage3;
wire [63:0] Single_Instruction_stage3;
wire [31:0] alu_result_1_stage3;
wire [31:0] alu_result_2_stage3;
wire LD_memory_avalible_stage3;
wire SD_memory_avalible_stage3;

wire jump_inst_wire,branch_inst_wire;

    decode #(.N_param(N_param)) decode_debug
    (
   .i_clk(clk),
   .i_en(i_en),
   .instruction(instruction_stage_0),
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
     .Single_Instruction_i(Single_Instruction_stage1),
     .operand1_pi(operand1_stage1),
     .operand2_pi(operand2_stage1),
     .instruction(instruction_stage_1),
     .pc_i(pc_stage_1),
     .rd_i(rd_stage1),
     .rs1_i(rs1_stage1), 
     .rs2_i(rs2_stage1), 
     .imm_i(imm_stage1),
     .alu_result_1(alu_result_1),
     .alu_result_2(alu_result_2),
     .branch_inst_wire(branch_inst_wire),
     .jump_inst_wire(jump_inst_wire)

     
   );


dataMem  #(.mem_size(4096)) dataMem 
  (
.clk(clk),
.reset(reset),
.Single_Instruction(Single_Instruction_stage2),
.address(alu_result_1_stage2),
.storeData(operand2_stage2),
.loadData_w(loaded_data),
.LD_memory_avalible(LD_memory_avalible),
.SD_memory_avalible(SD_memory_avalible)
);


// assign we_pi = (Single_Instruction_stage3==);
assign pc_stage_0          =        pipeReg0[`PC_reg];
assign instruction_stage_0 =        pipeReg0[`instruct];


assign pc_stage_1 =                 pipeReg1[`PC_reg];
assign instruction_stage_1 =        pipeReg1[`instruct];
assign rd_stage1 =                  pipeReg1[`rd];
assign rs1_stage1 =                 pipeReg1[`opRs1_reg];
assign rs2_stage1 =                 pipeReg1[`opRs2_reg];
assign operand1_stage1 =            pipeReg1[`op1_reg];
assign operand2_stage1 =            pipeReg1[`op2_reg];
assign imm_stage1 =                 pipeReg1[`immediate];
assign Single_Instruction_stage1 =  pipeReg1[`Single_Instruction];




assign pc_stage_2 =                 pipeReg2[`PC_reg];
assign instruction_stage_2 =        pipeReg2[`instruct];
assign rd_stage2 =                  pipeReg2[`rd];
assign rs1_stage2 =                 pipeReg2[`opRs1_reg];
assign rs2_stage2 =                 pipeReg2[`opRs2_reg];
assign operand1_stage2 =            pipeReg2[`op1_reg];
assign operand2_stage2 =            pipeReg2[`op2_reg];
assign imm_stage2 =                 pipeReg2[`immediate];
assign Single_Instruction_stage2 =  pipeReg2[`Single_Instruction];
assign alu_result_1_stage2 =        pipeReg2[`alu_res1          ];
assign alu_result_2_stage2 =        pipeReg2[`alu_res2          ];
    



assign pc_stage_3 =                 pipeReg3[`PC_reg];
assign instruction_stage_3 =        pipeReg3[`instruct];
assign rd_stage3 =                  pipeReg3[`rd];
assign rs1_stage3 =                 pipeReg3[`opRs1_reg];
assign rs2_stage3 =                 pipeReg3[`opRs2_reg];
assign operand1_stage3 =            pipeReg3[`op1_reg];
assign operand2_stage3 =            pipeReg3[`op2_reg];
assign imm_stage3 =                 pipeReg3[`immediate];
assign Single_Instruction_stage3 =  pipeReg3[`Single_Instruction];
assign alu_result_1_stage3 =        pipeReg3[`alu_res1          ];
assign alu_result_2_stage3 =        pipeReg3[`alu_res2          ];
assign SD_memory_avalible_stage3 =  pipeReg3[`SD_ready          ];
assign LD_memory_avalible_stage3 =  pipeReg3[`LD_ready          ];

 // assign fun3_stage1 =                pipeReg1[`fun3]; // assign fun7_stage1 =                pipeReg1[`fun7]; // assign INST_typ_stage1 =            pipeReg1[`INST_typ]; // assign opcode_stage1 =              pipeReg1[`opcode];

always @(posedge clk)begin
if (reset) begin 
    pipeReg0 <= 512'b0;
    pipeReg1 <= 512'b0;
    pipeReg2 <= 512'b0;
	pipeReg3 <= 512'b0;
end else if (branch_taken) begin 
    pipeReg1 <= 512'b0;
    pipeReg2 <= 512'b0;
	pipeReg3 <= 512'b0;
end
else begin

    // stage 0 --> //
    pipeReg0[`PC_reg]   <= pc_i;
    pipeReg0[`instruct] <= instruction;
    // <-- stage 0 //

    // stage 1 --> //
    pipeReg1[`PC_reg]             <= pc_stage_0;
    pipeReg1[`instruct]           <= instruction_stage_0;
    pipeReg1[`rd                ] <= rd_o;//  87:83 //[ 4:0]
    pipeReg1[`opRs2_reg         ] <= rs2_o;// 127:121 //[4:0]
    pipeReg1[`op1_reg           ] <= operand1_po;// 159:128 //[31:00]
    pipeReg1[`op2_reg           ] <= operand2_po;// 191:160 //[31:00]
    pipeReg1[`immediate         ] <= imm_o;// 223:192 //[31:0]
    pipeReg1[`Single_Instruction] <= Single_Instruction_o;
    // 287:224 //[63:00]     
    // pipeReg1[`fun3              ] <= fun3_o;//  90:88 //[ 2:0]    // pipeReg1[`fun7              ] <= fun7_o;//  97:91 //[ 6:0]    // pipeReg1[`INST_typ          ] <= INST_typ_o;// 104:98 //[ 6:0]    // pipeReg1[`opcode            ] <= opcode_o;// 111:105 //[ 6:0]    // pipeReg1[`opRs1_reg         ] <= rs1_o;// 120:116 //[4:0]
    // pipeReg1[`operand_amt       ] <= ;// 115:112 //[ 3:0]    
    // <-- stage 1 //


    // stage 2 --> //
    pipeReg2[`PC_reg]             <= pc_stage_1;
    pipeReg2[`instruct]           <= instruction_stage_1;
    pipeReg2[`rd                ] <= rd_stage1;//  87:83 //[ 4:0]
    pipeReg2[`opRs1_reg         ] <= rs1_stage1;// 120:116 //[4:0]
    pipeReg2[`opRs2_reg         ] <= rs2_stage1;// 127:121 //[4:0]
    pipeReg2[`op1_reg           ] <= operand1_stage1;// 159:128 //[31:00]
    pipeReg2[`op2_reg           ] <= operand2_stage1;// 191:160 //[31:00]
    pipeReg2[`immediate         ] <= imm_stage1;// 223:192 //[31:0]
    pipeReg2[`Single_Instruction] <= Single_Instruction_stage1;// 287:224 //[63:00]     
    pipeReg2[`alu_res1          ] <= alu_result_1;// 223:192 //[31:0]
    pipeReg2[`alu_res2          ] <= alu_result_2;// 223:192 //[31:0]

    // pipeReg2[`fun3              ] <= fun3_o;//  90:88 //[ 2:0]    // pipeReg2[`fun7              ] <= fun7_o;//  97:91 //[ 6:0]    // pipeReg2[`INST_typ          ] <= INST_typ_o;// 104:98 //[ 6:0]    // pipeReg2[`opcode            ] <= opcode_o;// 111:105 //[ 6:0]
    // pipeReg1[`operand_amt       ] <= ;// 115:112 //[ 3:0]    
    // <-- stage 2 //
 
    pipeReg3[`PC_reg]             <= pc_stage_2;
    pipeReg3[`instruct]           <= instruction_stage_2;
    pipeReg3[`rd                ] <= rd_stage2;//  87:83 //[ 4:0]
    pipeReg3[`opRs1_reg         ] <= rs1_stage2;// 120:116 //[4:0]
    pipeReg3[`opRs2_reg         ] <= rs2_stage2;// 127:121 //[4:0]
    pipeReg3[`op1_reg           ] <= operand1_stage2;// 159:128 //[31:00]
    pipeReg3[`op2_reg           ] <= operand2_stage2;// 191:160 //[31:00]
    pipeReg3[`immediate         ] <= imm_stage2;// 223:192 //[31:0]
    pipeReg3[`Single_Instruction] <= Single_Instruction_stage2;// 287:224 //[63:00]     
    pipeReg3[`alu_res1          ] <= alu_result_1_stage2;// 223:192 //[31:0]
    pipeReg3[`alu_res2          ] <= alu_result_2_stage2;// 223:192 //[31:0]
    pipeReg3[`LD_ready          ] <= LD_memory_avalible;
    pipeReg3[`SD_ready          ] <= SD_memory_avalible;
    


end 
end



// $display("PC: %h, Instruction: %h, word in processor %h", pc, instruction,pc >> 2);

//  always @(negedge clk) begin : checker
//             // $display("%t:   INST_typ_o:{%h},   fun3_o:{%h}, fun7_o:{%h},  opcode_o:{%h},   Sing_Instru:{%h},   insturction_in:{%h}    ",
//             // $time,          INST_typ_o,        fun3_o,      fun7_o,     opcode_o,Single_Instruction_o   , instruction_o    
//             // );
//             // $write("\n %t: ERR:{%b} fun3:{%h}, fun7:{%h},  opcode:{%h},  insturction:{%h}    ",
//             // $time,    ~ (|Single_Instruction_o),     fun3_o,      fun7_o,     opcode_o, instruction   
//             // );
//             $write("\n %d: E:%b I:{%h}    ",pc_o,~ (|Single_Instruction_o),  instruction   );
//  end


endmodule









  

