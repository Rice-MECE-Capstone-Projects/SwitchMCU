// Begin contents of params.vh
`ifndef PARAMS_VH
`define PARAMS_VH


`define PC_reg              31:00   //[31:00]
`define instruct            63:32   //[31:00]
`define alu_res1            95:64   //[31:00]
`define load_reg           101
`define jump_en            102     //[ 4:0]
`define branch_en          103     //[ 4:0]
`define reg_write_en       104     //[ 4:0]
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
`define data_mem_loaded    383:352  

// Opcode Decoding Type
`define R_Type            7'b0110011 //0110011
`define I_Type_A          7'b0010011 // 0010011
`define I_Type_L          7'b0000011
`define S_Type            7'b0100011
`define B_Type            7'b1100011
`define J_Type_lk         7'b1101111
`define I_Type_JALR       7'b1100111
`define U_Type_lui        7'b0110111
`define U_Type_auipc      7'b0010111
`define I_Type_ECALL      7'b1110011
`define F_TYPE_FENCE      7'b0001111
`define NOOP             32'h00000013


`define ONE_OP      4'b0001
`define TWO_OP      4'b0010


// Encoding Type
`define INST_typ_R             7'b0000001
`define INST_typ_I             7'b0000010
`define INST_typ_I_ECALL       7'b1000010
`define INST_typ_S             7'b0000100
`define INST_typ_B             7'b0001000
`define INST_typ_U             7'b0010000
`define INST_typ_J             7'b0100000
`define INST_typ_F             7'b1000000
`define UNRECGONIZED           7'b0000000

// Instructions
`define inst_UNKNOWN    64'h0000_0000_0000_0000
`define inst_ADD    64'h0000_0000_0000_0001
`define inst_SUB    64'h0000_0000_0000_0002
`define inst_XOR    64'h0000_0000_0000_0004
`define inst_OR     64'h0000_0000_0000_0008

`define inst_AND    64'h0000_0000_0000_0010
`define inst_SLL    64'h0000_0000_0000_0020
`define inst_SRL    64'h0000_0000_0000_0040
`define inst_SRA    64'h0000_0000_0000_0080

`define inst_SLT    64'h0000_0000_0000_0100
`define inst_SLTU   64'h0000_0000_0000_0200
`define inst_ADDI   64'h0000_0000_0000_0400
`define inst_XORI   64'h0000_0000_0000_0800

`define inst_ORI    64'h0000_0000_0000_1000
`define inst_ANDI   64'h0000_0000_0000_2000
`define inst_SLLI   64'h0000_0000_0000_4000
`define inst_SRLI   64'h0000_0000_0000_8000

`define inst_SRAI   64'h0000_0000_0001_0000
`define inst_SLTI   64'h0000_0000_0002_0000
`define inst_SLTIU  64'h0000_0000_0004_0000
`define inst_LB     64'h0000_0000_0008_0000

`define inst_LH     64'h0000_0000_0010_0000
`define inst_LW     64'h0000_0000_0020_0000
`define inst_LBU    64'h0000_0000_0040_0000
`define inst_LHU    64'h0000_0000_0080_0000

`define inst_SB     64'h0000_0000_0100_0000
`define inst_SH     64'h0000_0000_0200_0000
`define inst_SW     64'h0000_0000_0400_0000
`define inst_BEQ    64'h0000_0000_0800_0000

`define inst_BNE    64'h0000_0000_1000_0000
`define inst_BLT    64'h0000_0000_2000_0000
`define inst_BGE    64'h0000_0000_4000_0000
`define inst_BLTU   64'h0000_0000_8000_0000

`define inst_BGEU   64'h0000_0001_0000_0000
`define inst_JAL    64'h0000_0002_0000_0000
`define inst_JALR   64'h0000_0004_0000_0000
`define inst_LUI    64'h0000_0008_0000_0000

`define inst_AUIPC  64'h0000_0010_0000_0000
`define inst_ECALL  64'h0000_0020_0000_0000
`define inst_EBREAK 64'h0000_0040_0000_0000
`define inst_FENCE  64'h0000_0080_0000_0000

`define inst_FENCEI 64'h0000_0100_0000_0000
`define inst_CSRRW  64'h0000_0200_0000_0000
`define inst_CSRRS  64'h0000_0400_0000_0000
`define inst_CSRRC  64'h0000_0800_0000_0000
`define inst_CSRRWI 64'h0000_1000_0000_0000
`define inst_CSRRSI 64'h0000_2000_0000_0000
`define inst_CSRRCI 64'h0000_4000_0000_0000

`endif


















// End contents of params.vh

// Begin contents of riscv32i.v
// `default_nettype none
// `include "params.vh"

module riscv32i
   # (
    parameter   N_param = 32
   )     (
    input  wire         clk,
    input  wire [31:0]  GPIO0_R0_CH1, // control signals
    input  wire [31:0]  GPIO0_R0_CH2, // memory_offset
    input  wire [31:0]  GPIO0_R1_CH1, // initial_pc_i
    input  wire [31:0]  GPIO0_R1_CH2, // success_code

    output wire         STOP_sim,

    // BRAM ports for Data Mem
    output wire         data_mem_clkb,
    output wire         data_mem_enb,
    output wire         data_mem_rstb,
    output wire [3:0]   data_mem_web,
    output wire [31:0]  data_mem_addrb,
    output wire [31:0]  data_mem_dinb,
    input  wire         data_mem_rstb_busy,
    input  wire [31:0]  data_mem_doutb,

    // BRAM ports for Ins Mem
    output wire         ins_mem_clkb,
    output wire         ins_mem_enb,
    output wire         ins_mem_rstb,
    output wire [3:0]   ins_mem_web,
    output wire [31:0]  ins_mem_addrb,
    output wire [31:0]  ins_mem_dinb,
    input  wire         ins_mem_rstb_busy,
    input  wire [31:0]  ins_mem_doutb
);



reg enable_design_reg;
reg stop_design;
wire enable_design;
wire start_design , reset;
reg [31:0] cycle_to_end;
wire [31:0] control_signals_in;
reg [31:0]  Cycle_count  ;
wire [31:0]  memory_offset;
wire [31:0]  initial_pc_i ;
wire [31:0]  success_code  ;
wire [31:0]  final_value  ;

pulse_generator uut (
    .clk(clk),
    .in(GPIO0_R0_CH1),
    .out(control_signals_in)
);

assign STOP_sim = stop_design;
// assign  Cycle_count       = GPIO0_R0_CH2;
assign  memory_offset     = GPIO0_R0_CH2;
assign  initial_pc_i      = GPIO0_R1_CH1;
assign  success_code      = GPIO0_R1_CH2;

assign start_design    = control_signals_in[0];
assign reset           = control_signals_in[1];

assign enable_design = enable_design_reg & ~stop_design;




always @(posedge clk) begin
  	if (reset) begin

        cycle_to_end        <= 32'h0;
	    Cycle_count         <= 32'h0;
	    enable_design_reg   <=  1'b0;
        stop_design         <=  1'b0;

    end else begin  
    if (start_design) begin 
        // cycle_to_end        <= 32'h0;
	    Cycle_count         <= 32'h0;
	    enable_design_reg   <=  1'b1;
        // stop_design         <=  1'b0;
    end else if (enable_design_reg) begin
        Cycle_count         <= Cycle_count + 1;
	    enable_design_reg   <= enable_design_reg;
    end      
    if (final_value == success_code)begin 
        cycle_to_end <= cycle_to_end + 1;
        stop_design  <= 1'b0;
    end
    if (cycle_to_end >= 30) begin
        stop_design <= 1'b1;
        
    //MARKER AUTOMATED HERE START
//         
//     $display("\n\n\n\n----TB FINISH:Test Passed----\n\n\n\n\nTEST FINISHED by success write :%h \n\n\n\n\n",success_code);
//     
    //MARKER AUTOMATED HERE END

    end   
 
end
end 





    // Instantiation of riscv32i_main
    riscv32i_main #(
        .N_param(32)
    ) u_riscv32i_main (
        .clk(clk),
        .reset(reset),
        .enable_design(enable_design_reg),

        .Cycle_count(Cycle_count),
        .memory_offset(memory_offset),
        .initial_pc_i(initial_pc_i),
        .final_value(final_value),
        
        .data_mem_clkb(data_mem_clkb),
        .data_mem_enb(data_mem_enb),
        .data_mem_rstb(data_mem_rstb),
        .data_mem_web(data_mem_web),
        .data_mem_addrb(data_mem_addrb),
        .data_mem_dinb(data_mem_dinb),
        .data_mem_rstb_busy(data_mem_rstb_busy),
        .data_mem_doutb(data_mem_doutb),
        
        .ins_mem_clkb(ins_mem_clkb),
        .ins_mem_enb(ins_mem_enb),
        .ins_mem_rstb(ins_mem_rstb),
        .ins_mem_web(ins_mem_web),
        .ins_mem_addrb(ins_mem_addrb),
        .ins_mem_dinb(ins_mem_dinb),
        .ins_mem_rstb_busy(ins_mem_rstb_busy),
        .ins_mem_doutb(ins_mem_doutb)
    );

endmodule




module riscv32i_main 
   # (
    parameter   N_param = 32
   ) (
    input  wire clk,
    input  wire reset,
    input wire enable_design,

    input  wire [31:0] Cycle_count,
    input  wire [31:0] memory_offset,
    input  wire [31:0] initial_pc_i,
    output wire [31:0] final_value,


    // BRAM ports for Data Mem
    output wire        data_mem_clkb,
    output wire        data_mem_enb,
    output wire        data_mem_rstb,
    output wire [3:0 ] data_mem_web,
    output wire [31:0] data_mem_addrb,
    output wire [31:0] data_mem_dinb,
    input  wire        data_mem_rstb_busy,
    input  wire [31:0] data_mem_doutb,

    //bram  Ins_mem
    output wire        ins_mem_clkb,
    output wire        ins_mem_enb,
    output wire        ins_mem_rstb,
    output wire [3:0 ] ins_mem_web,
    output wire [31:0] ins_mem_addrb,
    output wire [31:0] ins_mem_dinb,
    input  wire        ins_mem_rstb_busy,
    input  wire [31:0] ins_mem_doutb



);


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
    reg halt_i;
    reg [63:0] pipeReg0;
    reg [511:0] pipeReg1, pipeReg2, pipeReg3;

    wire [63:0]  pipeReg0_wire;
    wire [511:0] pipeReg1_wire, pipeReg2_wire, pipeReg3_wire;
initial begin 
    halt_i          <= 0;
end

    pc pc  (
        .clk_i(clk),
        .reset_i(reset),
        .stage_IF_ready(stage_IF_ready),
        .jump_inst_wire(jump_inst_wire_stage2),
        .branch_inst_wire(branch_inst_wire_stage2),
        .targetPC_i(alu_result_2_stage2),
        .enable_design(enable_design),
        .pc_o(pc_i),
        .initial_pc_i(initial_pc_i)
    );

    ins_mem  ins_mem(
        .clk(clk),
        .reset(reset),
        .pc_i(pc_i),
        .enb(stage0_IF_valid),
        .instruction_o(instruction),

        //bram ins mem
        .ins_mem_clkb(       ins_mem_clkb),
        .ins_mem_enb(        ins_mem_enb),
        .ins_mem_rstb(       ins_mem_rstb),
        .ins_mem_web(        ins_mem_web),
        .ins_mem_addrb(      ins_mem_addrb),
        .ins_mem_dinb(       ins_mem_dinb),
        .ins_mem_rstb_busy(  ins_mem_rstb_busy),
        .ins_mem_doutb(      ins_mem_doutb)
    );

// Pre Stage 0
wire [31:0] pc_stage_0,instruction_stage_0;
wire we_pi;
wire [31:0] pc_o,pc_i;
wire [31:0] writeData_pi,operand1_po,operand2_po;


//stage 1 varibles
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


//stage 2
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


//Stage 3
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
wire        write_reg_file_wire_stage3;
wire        load_into_reg_stage3;
wire [31:0] loaded_data_stage3;



//Data Mem wires
wire [31:0] loaded_data;
wire load_into_reg;
wire stall_mem_not_avalible;

//Pc
wire branch_inst_wire_stage2;
wire jump_inst_wire_stage2;

//Going into exect
//exec 
wire [31:0] operand1_into_exec;
wire [31:0] operand2_into_exec;
wire [31:0] result_secondary;
wire        jump_inst_wire,branch_inst_wire;


//Hazard
wire write_reg_file_wire_stage2;
wire [31:0] rd_result_stage2;

reg delete_reg1_reg2_reg;


//Control signals 
wire   delete_reg1_reg2; 
wire   write_reg_stage3;
wire   write_reg_file_wire;


// Writing to WB regsiter
wire stage_WB_ready;  // Writestage ready for new register
wire stage_MEM_done;  // Memstage done
wire stage3_MEM_valid; // enables new write to PipeReg3

wire stage_MEM_ready;   // MEM  ready for new register
wire stage_EXEC_done;   // EXEC done
wire stage2_EXEC_valid; // enables new write to PipeReg2

wire stage_EXEC_ready;   // EXEC  ready for new register
wire stage_DECO_done;   //  DECO done
wire stage1_DECO_valid; // enables new write to PipeReg1

wire stage_DECO_ready;   // DECO  ready for new register
wire stage_IF_done;      //  IF    done
wire stage0_IF_valid;   // enables new write to PipeReg0

wire stage_IF_ready;   // IF  ready for PC register


//writing into destination reg
assign write_reg_stage3 = write_reg_file_wire_stage3|load_into_reg_stage3;

//flush from branch
assign delete_reg1_reg2 = branch_inst_wire_stage2 | jump_inst_wire_stage2;

//Value being wrtten to regfile in WBB stage, also may be forwarded to ALU
assign writeData_pi     = load_into_reg_stage3 ? loaded_data_stage3 : alu_result_1_stage3;

//Value being wrtten to regfile in MEM stage, also may be forwarded to ALU
assign rd_result_stage2 = load_into_reg ? loaded_data : alu_result_1_stage2;




//MARKER AUTOMATED HERE START
// 
// debug # (.Param_delay(5),.regCount(0), .pc_en(1)
//                                       ) debug_0 (.i_clk(clk),.pipeReg({448'b0,pipeReg0}), .pc_o(pc_i), .Cycle_count(Cycle_count));
// debug # (.Param_delay(10),.regCount(1) ) debug_1 (.i_clk(clk),.pipeReg(pipeReg1));
// debug # (.Param_delay(15),.regCount(2) ) debug_2 (.i_clk(clk),.pipeReg(pipeReg2));
// debug # (.Param_delay(20),.regCount(3) ) debug_3 (.i_clk(clk),.pipeReg(pipeReg3));
// 
//MARKER AUTOMATED HERE END



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
.destReg_pi(rd_stage3), 
.we_pi(write_reg_file_wire_stage3), 
.writeData_pi(writeData_pi), 
.operand1_po(operand1_po),
.operand2_po(operand2_po)
);

execute  #(.N_param(32)) execute 
    (.i_clk(clk),    
     .Single_Instruction_i(Single_Instruction_stage1),
     .operand1_pi(operand1_into_exec),
     .operand2_pi(operand2_into_exec),
     .instruction(instruction_stage_1),
     .pc_i(pc_stage_1),
     .rd_i(rd_stage1),
     .rs1_i(rs1_stage1), 
     .rs2_i(rs2_stage1), 
     .imm_i(imm_stage1),
     .alu_result_1(alu_result_1),
     .alu_result_2(alu_result_2),
     .branch_inst_wire(branch_inst_wire),
     .jump_inst_wire(jump_inst_wire),
     .write_reg_file_wire(write_reg_file_wire)
     
   );


dataMem dataMem 
  (
.final_value(final_value),
.clk(clk),
.reset(reset),
.Single_Instruction(Single_Instruction_stage2),
.address_i(alu_result_1_stage2),
.storeData(operand2_stage2),
.pc_i(pc_stage_2),
.loadData_w(loaded_data),
.memory_offset(memory_offset),
.stall_mem_not_avalible(stall_mem_not_avalible),
.load_into_reg(load_into_reg),

//bram
.data_mem_clkb(      data_mem_clkb     ),
.data_mem_addrb(     data_mem_addrb    ),
.data_mem_dinb(      data_mem_dinb     ),
.data_mem_enb(       data_mem_enb      ),
.data_mem_rstb(      data_mem_rstb     ),
.data_mem_web(       data_mem_web      ),
.data_mem_doutb(     data_mem_doutb    ),
.data_mem_rstb_busy( data_mem_rstb_busy )



);

hazard hazard (
.clk(clk),
.rs1_stage1(rs1_stage1),
.rs2_stage1(rs2_stage1),
.destination_reg_stage2(rd_stage2),
.write_reg_stage2(write_reg_file_wire_stage2),
.destination_reg_stage3(rd_stage3),
.write_reg_stage3(write_reg_stage3),
.PC_stage1(pc_stage_1), 
.PC_stage2(pc_stage_2), 
.PC_stage3(pc_stage_3),
.rd_result_stage2(rd_result_stage2),
.writeData_pi(writeData_pi),
.operand1_stage1(operand1_stage1),
.operand1_into_exec(operand1_into_exec),
.operand2_into_exec(operand2_into_exec),
.operand2_stage1(operand2_stage1)
);


assign pc_stage_0          =        pipeReg0[`PC_reg];
// assign instruction_stage_0 =        pipeReg0[`instruct];
assign instruction_stage_0          =  delete_reg1_reg2_reg ? 32'h00000000 : instruction;
// assign instruction_stage_0 =        instruction; //pipeReg0[`instruct];
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
assign jump_inst_wire_stage2      = pipeReg2[`jump_en           ];  
assign branch_inst_wire_stage2    = pipeReg2[`branch_en         ];  
assign write_reg_file_wire_stage2 = pipeReg2[`reg_write_en      ];  

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
assign write_reg_file_wire_stage3 = pipeReg3[`reg_write_en      ];  
assign load_into_reg_stage3       = pipeReg3[`load_reg          ];  
assign loaded_data_stage3         = pipeReg3[`data_mem_loaded   ];  


assign pipeReg0_wire[`PC_reg]   = pc_i;
assign pipeReg0_wire[`instruct] = instruction;


assign pipeReg1_wire[`PC_reg            ] = pc_stage_0;
assign pipeReg1_wire[`instruct          ] = instruction_stage_0;
assign pipeReg1_wire[`alu_res1          ] = 0;
assign pipeReg1_wire[`load_reg          ] = 0;
assign pipeReg1_wire[`jump_en           ] = 0;
assign pipeReg1_wire[`branch_en         ] = 0;
assign pipeReg1_wire[`reg_write_en      ] = 0;
assign pipeReg1_wire[`LD_ready          ] = 0;
assign pipeReg1_wire[`SD_ready          ] = 0;
assign pipeReg1_wire[`rd                ] = rd_o;
assign pipeReg1_wire[`operand_amt       ] = 0;
assign pipeReg1_wire[`opRs1_reg         ] = rs1_o;
assign pipeReg1_wire[`opRs2_reg         ] = rs2_o;
assign pipeReg1_wire[`op1_reg           ] = operand1_po;
assign pipeReg1_wire[`op2_reg           ] = operand2_po;
assign pipeReg1_wire[`immediate         ] = imm_o;
assign pipeReg1_wire[`alu_res2          ] = 0;
assign pipeReg1_wire[`rd_data           ] = 0;
assign pipeReg1_wire[`Single_Instruction] = Single_Instruction_o;
assign pipeReg1_wire[`data_mem_loaded   ] = 0;



assign pipeReg2_wire[`PC_reg            ] = pc_stage_1;
assign pipeReg2_wire[`instruct          ] = instruction_stage_1;
assign pipeReg2_wire[`alu_res1          ] = alu_result_1;
assign pipeReg2_wire[`load_reg          ] = 0;
assign pipeReg2_wire[`jump_en           ] = jump_inst_wire;
assign pipeReg2_wire[`branch_en         ] = branch_inst_wire;
assign pipeReg2_wire[`reg_write_en      ] = write_reg_file_wire;
assign pipeReg2_wire[`LD_ready          ] = 0;
assign pipeReg2_wire[`SD_ready          ] = 0;
assign pipeReg2_wire[`rd                ] = rd_stage1;
assign pipeReg2_wire[`operand_amt       ] = 0;
assign pipeReg2_wire[`opRs1_reg         ] = rs1_stage1;
assign pipeReg2_wire[`opRs2_reg         ] = rs2_stage1;
assign pipeReg2_wire[`op1_reg           ] = operand1_into_exec;
assign pipeReg2_wire[`op2_reg           ] = operand2_into_exec;
assign pipeReg2_wire[`immediate         ] = imm_stage1;
assign pipeReg2_wire[`alu_res2          ] = alu_result_2;
assign pipeReg2_wire[`rd_data           ] = 0;
assign pipeReg2_wire[`Single_Instruction] = Single_Instruction_stage1;
assign pipeReg2_wire[`data_mem_loaded   ] = 0;



assign pipeReg3_wire[`PC_reg            ] = pc_stage_2;
assign pipeReg3_wire[`instruct          ] = instruction_stage_2;
assign pipeReg3_wire[`alu_res1          ] = alu_result_1_stage2;
assign pipeReg3_wire[`load_reg          ] = load_into_reg;
assign pipeReg3_wire[`jump_en           ] = 0;
assign pipeReg3_wire[`branch_en         ] = 0;
assign pipeReg3_wire[`reg_write_en      ] = write_reg_file_wire_stage2;
assign pipeReg3_wire[`LD_ready          ] = 0;
assign pipeReg3_wire[`SD_ready          ] = 0;
assign pipeReg3_wire[`rd                ] = rd_stage2;
assign pipeReg3_wire[`operand_amt       ] = 0;
assign pipeReg3_wire[`opRs1_reg         ] = rs1_stage2;
assign pipeReg3_wire[`opRs2_reg         ] = rs2_stage2;
assign pipeReg3_wire[`op1_reg           ] = operand1_stage2;
assign pipeReg3_wire[`op2_reg           ] = operand2_stage2;
assign pipeReg3_wire[`immediate         ] = imm_stage2;
assign pipeReg3_wire[`alu_res2          ] = alu_result_2_stage2;
assign pipeReg3_wire[`rd_data           ] = 0;
assign pipeReg3_wire[`Single_Instruction] = Single_Instruction_stage2;
assign pipeReg3_wire[`data_mem_loaded   ] = loaded_data;


assign stage_MEM_done = ~stall_mem_not_avalible;
assign stage_WB_ready = 1'b1;
assign stage3_MEM_valid = stage_WB_ready & stage_MEM_done;

assign stage_EXEC_done = 1'b1;
assign stage_MEM_ready   = stage3_MEM_valid; // 
assign stage2_EXEC_valid = stage_MEM_ready & stage_EXEC_done;

assign stage_DECO_done = 1'b1;
assign stage_EXEC_ready   = stage2_EXEC_valid; // 
assign stage1_DECO_valid = stage_EXEC_ready & stage_DECO_done;

assign stage_IF_done = 1'b1;
assign stage_DECO_ready   = stage1_DECO_valid; // 
assign stage0_IF_valid = stage_DECO_ready & stage_IF_done;

//for PC counter 

assign stage_IF_ready   = stage0_IF_valid; // 

always @(posedge clk)begin
if (reset) begin 
    pipeReg0 <= 64'b0;
    pipeReg1 <= 512'b0;
    pipeReg2 <= 512'b0;
	pipeReg3 <= 512'b0;
end else if (enable_design) begin

delete_reg1_reg2_reg <= delete_reg1_reg2;
if  (delete_reg1_reg2) begin 
    pipeReg0 <= 64'b0;
    pipeReg1 <= 512'b0;
    pipeReg2 <= 512'b0;

    if (stage3_MEM_valid) begin      // <-- stage 2 // 
        pipeReg3 <= pipeReg3_wire;  
     end else begin
        pipeReg3 <= pipeReg3;
     end

end else begin 

    if (stage0_IF_valid) begin 
        pipeReg0   <= pipeReg0_wire;
    end else begin 
        pipeReg0   <= pipeReg0;
    end 
    if (stage1_DECO_valid) begin
        pipeReg1 <= pipeReg1_wire;
    end else begin 
        pipeReg1 <= pipeReg1;
    end 

    if (stage2_EXEC_valid) begin
        pipeReg2 <= pipeReg2_wire ;     
    end else begin 
        pipeReg2 <= pipeReg2;
    end

    if (stage3_MEM_valid) begin
        pipeReg3 <= pipeReg3_wire;  
    end else begin
        pipeReg3 <= pipeReg3;
    end


end //end else from reset


end //end enable_design

end // end clock
endmodule



module pulse_generator(
    input  wire       clk,
    input wire  [31:0] in,
    output wire [31:0] out
);

reg [31:0] out_r;
reg [31:0] prev_in;
assign out = out_r;
integer i;
  always @(posedge clk) begin
    for (i = 0; i < 32; i = i + 1) begin
        out_r[i]   <= in[i] & ~prev_in[i];
        prev_in[i] <= in[i];

    end
  end
endmodule

// End contents of riscv32i.v

// Begin contents of ins_mem.v
module ins_mem (
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] pc_i,
    input  wire        enb,
    output wire [31:0] instruction_o,

// BRAM ports
    output wire        ins_mem_clkb,
    output wire        ins_mem_enb,
    output wire        ins_mem_rstb,
    output wire [3:0 ] ins_mem_web,
    output wire [31:0] ins_mem_addrb,
    output wire [31:0] ins_mem_dinb,
    input  wire        ins_mem_rstb_busy,
    input  wire [31:0] ins_mem_doutb

);
    wire  [31:0] instruction;
    wire rstb_busy;
    assign instruction_o = reset ?  32'h00000013 : instruction ;
    
    assign ins_mem_clkb      =    clk;            
    assign ins_mem_enb       =    enb;             
    assign ins_mem_rstb      =     1'b0; 
    assign ins_mem_web       =     4'b0; 
    assign ins_mem_addrb     =    pc_i; 
    assign ins_mem_dinb      =    32'b0; 
        // ins_mem_rstb_busy =    rstb_busy   ;               
        // ins_mem_dout      =    instruction ;
    assign  rstb_busy = ins_mem_rstb_busy;              
    assign  instruction = ins_mem_doutb;

endmodule




// End contents of ins_mem.v

// Begin contents of decode.v

module decode 
   # (
    parameter   N_param = 32   ) (
    input  wire i_clk,
    input  wire i_en,
    input  wire [N_param-1:0]  instruction,
    // outputs to register file
    output wire  [4:0] rd_o,
    output wire  [4:0] rs1_o,
    output wire  [4:0] rs2_o,
    output wire  [2:0] fun3_o,
    output wire  [6:0] fun7_o,
    output wire  [31:0] imm_o,
    output wire  [63:0] Single_Instruction_o,
    output wire  [6:0] INST_typ_o,
    output wire  [6:0] opcode_o,
    output wire   [3:0] operand_amt_o
    // outputs to ALU
);

    // param_module params ()
wire [6:0] opcode;
reg  [31:0] imm;
reg  [6:0] INST_typ;
reg  [2:0] fun3;
reg  [6:0] fun7;
reg  [4:0] rd,rs1,rs2;
reg [63:0] Single_Instruction; 
reg  [3:0] operand_amt;
//FPGA 
initial begin 
    imm         <=0;
    INST_typ    <=0;
    fun3        <=0;
    fun7        <=0;
    rd          <=0;
    rs1         <=0;
    rs2         <=0;
    operand_amt <=0;
end

assign operand_amt_o        = operand_amt;
assign opcode               = instruction[6:0];
assign opcode_o             = instruction[6:0];
assign Single_Instruction_o = Single_Instruction;


always @(*) begin
    case (opcode)
        `R_Type: begin
            INST_typ <= `INST_typ_R;
            rd     <= instruction[11:7];
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= instruction[31:25];
            imm    <= 32'b0;
        end

        `I_Type_A,`I_Type_L, `I_Type_JALR: begin  
            INST_typ <= `INST_typ_I;
            rd     <= instruction[11:7];
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= 0;
            fun7   <= instruction[31:25];
            imm    <= {{20{instruction[31]}},instruction[31:20]};
        end

        `I_Type_ECALL: begin
            INST_typ <= `INST_typ_I_ECALL;
            rd     <= instruction[11:7];
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= instruction[31:25];
            imm    <= {{20{instruction[31]}},instruction[31:20]};

        end 

        `S_Type: begin  
            INST_typ <= `INST_typ_S;
            rd     <= 0;
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= 0;
            imm    <= {{20{instruction[31]}},instruction[31:25],instruction[11:7]};
        end

        `B_Type: begin  
            INST_typ <= `INST_typ_B;
            rd     <= 0;
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= 0;
            imm    <= { {20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0 }; // {{19{i_inst[31]}},i_inst[31],i_inst[7],i_inst[30:25],i_inst[11:8],1'b0} 
        end

        `U_Type_auipc, `U_Type_lui: begin  
            INST_typ <= `INST_typ_U;
            rd       <= instruction[11:7];
            fun3     <= 0;
            rs1      <= 0;
            rs2      <= 0;
            fun7     <= 0;
            imm      <= { instruction[31:12], 12'b0};     
        end

       `J_Type_lk: begin  
            INST_typ <= `INST_typ_J;
            rd     <= instruction[11:7];
            fun3   <= 0; 
            rs1    <= 0; 
            rs2    <= 0; 
            fun7   <= 0; 
            imm    <= { {12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:25], instruction[24:21], 1'b0 };
        end

        `F_TYPE_FENCE: begin  
            INST_typ <= `INST_typ_F;
            rd     <= instruction[11:7];
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= instruction[31:25];
            imm    <= 32'b0;
        end

        default: begin
            INST_typ <= `UNRECGONIZED;
            rd     <= 0;
            fun3   <= 0;
            rs1    <= 0; 
            rs2    <= 0; 
            fun7   <= 0; 
            imm    <= 0;
        end
    endcase

    case (INST_typ)
        `INST_typ_R: begin
            case ({fun7,fun3})
            {7'b0000000,3'b000}: begin  // ADD
            Single_Instruction <= `inst_ADD;
            end 
            {7'b0100000,3'b000}: begin  // SUB
            Single_Instruction <= `inst_SUB;
            end 
            {7'b0000000,3'b001}: begin  // SLL
            Single_Instruction <= `inst_SLL;
            end 
            {7'b0000000,3'b010}: begin  // SLT
            Single_Instruction <= `inst_SLT;
            end 
            {7'b0000000,3'b011}: begin  //SLTU 
            Single_Instruction <= `inst_SLTU;
            end 
            {7'b0000000,3'b100}: begin  // XOR
            Single_Instruction <= `inst_XOR;
            end 
            {7'b0000000,3'b101}: begin  //SRL 
            Single_Instruction <= `inst_SRL;
            end 
            {7'b0100000,3'b101}: begin  // SRA
            Single_Instruction <= `inst_SRA;
            end 
            {7'b0000000,3'b110}: begin  // OR 
            Single_Instruction <= `inst_OR;
            end 
            {7'b0000000,3'b111}: begin  //AND 
            Single_Instruction <= `inst_AND;
            end 
            default: begin  //UNKNOWN 
            Single_Instruction <= `inst_UNKNOWN;
            end 
            endcase
        end
        `INST_typ_U:  begin 
            case(opcode)
            `U_Type_auipc:begin 
            Single_Instruction <= `inst_AUIPC;   
            end
            `U_Type_lui:begin 
            Single_Instruction <= `inst_LUI;
            end
            default: begin 
            Single_Instruction <= `inst_UNKNOWN;
            end
            endcase
        


        end
        `INST_typ_I: begin
            case(opcode)
            `I_Type_A: begin 
                case ({fun3})
                {3'b000}: begin  // ADDI
                Single_Instruction <= `inst_ADDI;
                end 
                {3'b010}: begin  // SLTI
                Single_Instruction <= `inst_SLTI;
                end 
                {3'b011}: begin  //SLTIU 
                Single_Instruction <= `inst_SLTIU;
                end 
                {3'b100}: begin  // XORI
                Single_Instruction <= `inst_XORI;
                end 
                {3'b110}: begin  // ORI 
                Single_Instruction <= `inst_ORI;
                end 
                {3'b111}: begin  //ANDI 
                Single_Instruction <= `inst_ANDI;
                end 
                {3'b001}: begin  //SLLI 
                    case(fun7)
                        {7'b0000000}:begin 
                Single_Instruction <= `inst_SLLI;
                        end 
                        default: begin 
                Single_Instruction <= `inst_UNKNOWN;
                        end
                    endcase
                end 
                {3'b101}: begin  
                    case(fun7)
                        {7'b0000000}:begin  //SRLI
                Single_Instruction <= `inst_SRLI;
                        end 
                        {7'b0100000}:begin //SRAI
                Single_Instruction <= `inst_SRAI;
                        end 
                        default: begin 
                Single_Instruction <= `inst_UNKNOWN;
                        end
                    endcase
                end 
                default: begin  // 
                Single_Instruction <= `inst_UNKNOWN;
                end 
            endcase
            end
            `I_Type_L: begin 
                case ({fun3})
                {3'b000}: begin  // LB
                Single_Instruction <= `inst_LB;
                end 
                {3'b001}: begin  // LH
                Single_Instruction <= `inst_LH;
                end 
                {3'b010}: begin  // LW
                Single_Instruction <= `inst_LW;
                end 
                {3'b100}: begin  // LBU
                Single_Instruction <= `inst_LBU;
                end 
                {3'b101}: begin  // LHU
                Single_Instruction <= `inst_LHU;
                end 
                default:begin 
                Single_Instruction <= `inst_UNKNOWN;
                end
                endcase
            end
            `I_Type_JALR: begin 
                case ({fun3})
                {3'b000}: begin  // JALR
                Single_Instruction <= `inst_JALR;
                end 
                default: begin 
                Single_Instruction <= `inst_UNKNOWN;
                end
                endcase
            end

            endcase
        end

        `INST_typ_I_ECALL: begin 
                case ({fun3})
                {3'b000}: begin  //
                if (instruction[20]==1'b1) begin 
                Single_Instruction <= `inst_EBREAK ;

                end else begin
                Single_Instruction <= `inst_ECALL;

                 end
                end 
                {3'b001}: begin  //
                Single_Instruction <= `inst_CSRRW;
                end 
                {3'b010}: begin  //CSRRS
                Single_Instruction <= `inst_CSRRS;
                end 
                {3'b011}: begin  //CSRRC
                Single_Instruction <= `inst_CSRRC;
                end 
                {3'b101}: begin  //CSRRWI
                Single_Instruction <= `inst_CSRRWI;
                end 
                {3'b110}: begin  //CSRRSI
                Single_Instruction <= `inst_CSRRSI;
                end 
                {3'b111}: begin  //CSRRCI
                Single_Instruction <= `inst_CSRRCI;
                end 
                default: begin 
                Single_Instruction <= `inst_UNKNOWN;
                end
        endcase

        end
        
        `INST_typ_S: begin  
            case ({fun3})
                {3'b000}: begin  // SB
                Single_Instruction <= `inst_SB;
                end 
                {3'b001}: begin  // SH
                Single_Instruction <= `inst_SH;
                end 
                {3'b010}: begin  // SW
                Single_Instruction <= `inst_SW;
                end 
                default: begin 
                Single_Instruction <= `inst_UNKNOWN;
                end
            endcase
        end

        `INST_typ_B: begin  
            case ({fun3})
                {3'b000}: begin  // SEQ
                Single_Instruction <= `inst_BEQ;
                end 
                {3'b001}: begin  // BNE
                Single_Instruction <= `inst_BNE;
                end 
                {3'b100}: begin  // BLT
                Single_Instruction <= `inst_BLT;
                end 
                {3'b101}: begin  // BGE
                Single_Instruction <= `inst_BGE;
                end 
                {3'b110}: begin  // BLTU
                Single_Instruction <= `inst_BLTU;
                end 
                {3'b111}: begin  // BGEU
                Single_Instruction <= `inst_BGEU;
                end 
                default: begin 
                Single_Instruction <= `inst_UNKNOWN;
                end
            endcase  
        end

        `INST_typ_J: begin  
                Single_Instruction <= `inst_JAL;
        end

        `INST_typ_F: begin         
                case ({fun3})
                {3'b000}: begin  // FENCE
                Single_Instruction <= `inst_FENCE;
                end 
                {3'b001}: begin  // FENCE
                Single_Instruction <= `inst_FENCEI;
                end 
                default: begin 
                Single_Instruction <= `inst_UNKNOWN;
                end
            endcase
        end


        `UNRECGONIZED: begin  
                Single_Instruction <= `inst_UNKNOWN;
        end
        default: begin
                Single_Instruction <= `inst_UNKNOWN;
        end
    
    endcase

    
end


assign rd_o   = rd;
assign fun3_o = fun3;
assign fun7_o = fun7;
assign rs1_o  = rs1;
assign rs2_o  = rs2;
assign imm_o  = imm;
assign INST_typ_o = INST_typ;
// assign opcode_o = opcode;


endmodule









  


// End contents of decode.v

// Begin contents of regfile.v

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

   wire   cntrl1, cntrl2;
   reg [31:0] REG_FILE[0:31];  // 32 32-bit registers
   
// read while writing in WB stage   
assign cntrl1      =  (reg1_pi  == destReg_pi) &&  we_pi;
assign cntrl2      =  (reg2_pi  == destReg_pi) &&  we_pi ;
assign operand1_po = cntrl1  ? writeData_pi : REG_FILE[reg1_pi];
assign operand2_po = cntrl2  ? writeData_pi : REG_FILE[reg2_pi];

integer j;

initial begin 
 for (j=0; j < 32; j=j+1)begin 
	  	  REG_FILE[j] <= 32'b0;	 
 end
end
integer i;
always @(posedge clk) begin
      if (reset)
       	  for (i=0; i < 32; i=i+1) begin 
	  	     REG_FILE[i] <= 32'b0;	
           end
	else
	   if (we_pi && (destReg_pi!=0))  
		   REG_FILE[destReg_pi] <= writeData_pi;
      end



//MARKER AUTOMATED HERE START
// integer k;
// integer n;
// always @(negedge clk) begin
//       #100
//       $write("\n\nREGFILE:   ");
//       for (k=0; k < 32; k=k+1) begin 
// 	  	// REG_FILE[i] <= 32'b0;
//       if (REG_FILE[k] != 0) begin
//       $write("   R%4d: %9h,", k, REG_FILE[k]);
//       end
//       end
//       $write("\nREGFILE*:  ");
//       for (n=0; n < 32; n=n+1) begin 
// 	  	// REG_FILE[i] <= 32'b0;
//       if (REG_FILE[n] != 0) begin
//       $write("   R%4d: %9d,", n, $signed(REG_FILE[n]));
//       end
//       end
// end
// 
//MARKER AUTOMATED HERE END



endmodule

// End contents of regfile.v

// Begin contents of excute.v
module execute 
   # (
    parameter   N_param = 32   ) (
    input  wire i_clk,
    input  wire i_en,
    // input  wire [N_param-1:0]  instruction,
    // outputs to register file
    input wire  [4:0] rd_i,
    input wire  [4:0] rs1_i,
    input wire  [4:0] rs2_i,

    input wire  [31:0] instruction,
    input wire  [31:0] operand1_pi,
    input wire  [31:0] operand2_pi,
    input wire  [31:0] imm_i,
    input wire  [31:0] pc_i,
    input wire         Noop,
    output wire [31:0] alu_result_1,
    output wire [31:0] alu_result_2,

    output wire  branch_inst_wire, 
    output wire  jump_inst_wire,
    output wire  write_reg_file_wire,

    input wire [63:0] Single_Instruction_i
    // outputs to ALU
);


reg  [32:0] result;
reg  [32:0] result_secondary;
assign alu_result_1           = result[31:0];
assign alu_result_2 = result_secondary[31:0];
reg  branch_inst, jump_inst,write_reg_file;

initial begin 
result           <=0;
result_secondary <=0;
branch_inst      <=0;
jump_inst        <=0;
write_reg_file   <=0;
end 


wire signed [31:0] operand1_pi_signed = operand1_pi;
wire signed [31:0] operand2_pi_signed = operand2_pi; 
wire signed [31:0] imm_i_signed       = imm_i; 



assign jump_inst_wire                 = jump_inst;
assign branch_inst_wire               =  branch_inst & result[0];
assign write_reg_file_wire            = (~(rd_i==0)) & write_reg_file; 



always @(*) begin 
case(Single_Instruction_i)
{`inst_UNKNOWN   }:begin 
result <=0;
result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_ADD   }:begin 
result <= operand1_pi + operand2_pi;
result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SUB   }:begin 
    result <= operand1_pi - operand2_pi;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_XOR   }:begin 
    result <= operand1_pi ^ operand2_pi;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_OR    }:begin 
    result <= operand1_pi | operand2_pi;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_AND    }:begin 
    result <= operand1_pi & operand2_pi;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SLL   }:begin 
    result <= (operand1_pi << (operand2_pi));
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SRL   }:begin 
    result <= (operand1_pi >> (operand2_pi));
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SRA   }:begin 
    result <= (operand1_pi_signed >>> (operand2_pi));
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SLTU  }:begin 
    result <= (operand1_pi        < operand2_pi       ) ? 1'b1 : 1'b0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SLT   }:begin 
    result <= (operand1_pi_signed < operand2_pi_signed) ? 1'b1 : 1'b0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_ADDI  }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_XORI  }:begin 
    result <= operand1_pi ^ imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_ORI  }:begin 
    result <= operand1_pi | imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_ANDI  }:begin 
    result <= operand1_pi & imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SLLI  }:begin 
    result <= operand1_pi << imm_i[4:0];
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SRLI  }:begin 
    result <= operand1_pi >> imm_i[4:0];
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SRAI    }:begin 
    result <=  operand1_pi_signed >>> imm_i[4:0];
    // $signed(operand1_pi) >>> imm_i[4:0];
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SLTI  }:begin 
    result <= (operand1_pi        < imm_i       ) ? 1'b1 : 1'b0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SLTIU }:begin 
    result <= (operand1_pi_signed < imm_i_signed      ) ? 1'b1 : 1'b0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_LB    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_LH    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_LW    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_LBU   }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_LHU   }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_SB    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_SH    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_SW    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_BEQ   }:begin
    result <= {31'b0,(operand1_pi == operand2_pi)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_BNE   }:begin
    result <= {31'b0,(operand1_pi != operand2_pi)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_BLT   }:begin
    result <= {31'b0,(operand1_pi_signed <  operand2_pi_signed)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_BGE   }:begin
    result <= {31'b0,(operand1_pi_signed >= operand2_pi_signed)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_BLTU  }:begin
    result <= {31'b0,(operand1_pi <  operand2_pi)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_BGEU  }:begin
    result <= {31'b0,(operand1_pi >= operand2_pi)};
    result_secondary <= pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
end
{`inst_JAL   }:begin
    result <= pc_i + 4;
    result_secondary <= pc_i + imm_i;
    branch_inst <=0;
    jump_inst <=1'b1;
    write_reg_file <= 1'b1;
end
{`inst_JALR  }:begin
    result <= pc_i + 4;
    result_secondary <= operand1_pi + imm_i;
    branch_inst <=0;
    jump_inst <=1'b1;
    write_reg_file <= 1'b1;
end
{`inst_LUI   }:begin
    result           <=imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_AUIPC }:begin
    result           <=pc_i + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
     end
{`inst_ECALL }:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_EBREAK}:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_FENCE }:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_FENCEI}:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_CSRRW }:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_CSRRS }:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_CSRRC }:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_CSRRWI}:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_CSRRSI}:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
{`inst_CSRRCI}:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
default: begin 
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
end
endcase
end


//MARKER AUTOMATED HERE START
// 
// 
// wire debug_i;
// assign debug_i = 1;
// always @(negedge i_clk) begin 
// #11
// if (debug_i) begin
//     $write("\nEXEC      PC: %h: I:{%h}    ",pc_i,  instruction   );
// 
// case(Single_Instruction_i)
// {`inst_UNKNOWN   }:begin 
//     $write("inst_UNKOWN ");
// end
// {`inst_ADD   }:begin 
//     $write("inst_ADD    ");
// 
// end
// {`inst_SUB   }:begin 
//     $write("inst_SUB    ");
// 
// end
// {`inst_XOR   }:begin 
//     $write("inst_XOR    ");
// 
// end
// {`inst_OR    }:begin 
//     $write("inst_OR     ");
// end
// {`inst_AND    }:begin 
//     $write("inst_AND     ");
// end
// {`inst_SLL   }:begin 
//     $write("inst_SLL    ");
// end
// {`inst_SRL   }:begin 
//     $write("inst_SRL    ");
// end
// {`inst_SRA   }:begin 
//     $write("inst_SRA    ");
// end
// {`inst_SLT   }:begin 
//     $write("inst_SLT    ");
// end
// {`inst_SLTU  }:begin 
//     $write("inst_SLTU   ");
// end
// {`inst_ADDI  }:begin 
//     $write("inst_ADDI   ");
// end
// {`inst_XORI  }:begin 
//     $write("inst_XORI   ");
// end
// {`inst_ORI  }:begin 
//     $write("inst_ORI   ");
// end
// {`inst_ANDI  }:begin 
//     $write("inst_ANDI   ");
// end
// {`inst_SLLI  }:begin 
//     $write("inst_SLLI   ");
// end
// {`inst_SRLI  }:begin 
//     $write("inst_SRLI   ");
// end
// {`inst_SRAI    }:begin 
//     $write("inst_SRAI     ");
// end
// {`inst_SLTI  }:begin 
//     $write("inst_SLTI   ");
// end
// {`inst_SLTIU }:begin 
//     $write("inst_SLTIU   ");
// end
// {`inst_LB    }:begin 
//     $write("inst_LB     ");
// end
// {`inst_LH    }:begin 
//     $write("inst_LH     ");
// end
// {`inst_LW    }:begin 
//     $write("inst_LW     ");
// end
// {`inst_LBU   }:begin 
//     $write("inst_LBU    ");
// end
// {`inst_LHU   }:begin 
//     $write("inst_LHU    ");
// end
// {`inst_SB    }:begin 
//     $write("inst_SB     ");
//      end
// {`inst_SH    }:begin 
//     $write("inst_SH     ");
//      end
// {`inst_SW    }:begin 
//     $write("inst_SW     ");
//      end
// {`inst_BEQ   }:begin 
//     $write("inst_BEQ    ");
//      end
// {`inst_BNE   }:begin 
//     $write("inst_BNE    ");
//      end
// {`inst_BLT   }:begin 
//     $write("inst_BLT    ");
//      end
// {`inst_BGE   }:begin 
//     $write("inst_BGE    ");
//      end
// {`inst_BLTU  }:begin 
//     $write("inst_BLTU   ");
//      end
// {`inst_BGEU  }:begin 
//     $write("inst_BGEU   ");
//      end
// {`inst_JAL   }:begin 
//     $write("inst_JAL    ");
//      end
// {`inst_JALR  }:begin 
//     $write("inst_JALR   ");
//      end
// {`inst_LUI   }:begin 
//     $write("inst_LUI    ");
//      end
// {`inst_AUIPC }:begin 
//     $write("inst_AUIPC  ");
//      end
// {`inst_ECALL }:begin 
//     $write("inst_ECALL   ");
//      end
// {`inst_EBREAK}:begin 
//     $write("inst_EBREAK   ");
//      end
// {`inst_FENCE }:begin 
//     $write("inst_FENCE   ");
//      end
// {`inst_FENCEI}:begin 
//     $write("inst_FENCEI   ");
//      end
// {`inst_CSRRW }:begin 
//     $write("inst_CSRRW   ");
//      end
// {`inst_CSRRS }:begin 
//     $write("inst_CSRRS   ");
//      end
// {`inst_CSRRC }:begin 
//     $write("inst_CSRRC   ");
//      end
// {`inst_CSRRWI}:begin 
//     $write("inst_CSRRWI   ");
//      end
// {`inst_CSRRSI}:begin 
//     $write("inst_CSRRSI   ");
//      end
// {`inst_CSRRCI}:begin 
//     $write("inst_CSRRCI   ");
//      end
// default: begin 
//     $write("not_encoded instruction   ");
// end
// endcase
//    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %8h rs2_d %8h  result {%4H}",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $write(" imm_i %h", $signed(imm_i));
// end
// 
// end
//MARKER AUTOMATED HERE END



endmodule
// End contents of excute.v

// Begin contents of pc.v
module pc(
input wire clk_i,
input wire reset_i,
input wire stage_IF_ready,
input wire jump_inst_wire, 
input wire branch_inst_wire,
input wire enable_design, 
input wire [31:0] targetPC_i,
input wire [31:0] initial_pc_i,
output wire[31:0] pc_o
);

reg  [31:0] PC;
wire [31:0] nextPC;
wire change_PC_condition_for_jump_or_branch;
assign change_PC_condition_for_jump_or_branch = jump_inst_wire | branch_inst_wire;
assign nextPC = change_PC_condition_for_jump_or_branch ?  targetPC_i  : PC + 4;

assign pc_o = PC;

always @(posedge clk_i) begin
//     $display("Time: %3d\thalt: %d\tisTakenBranch: %d\tnextPC: %d\tpc_po: %d",$time, halt_pi, isTakenBranch_pi, PC, pc_po);
  	 if (reset_i)
	    PC  <= initial_pc_i; //32'h1CC;
      //Starting memory address, this logic must be changed later
	 else  if (enable_design) begin

 	    if (stage_IF_ready)  begin
            PC <= nextPC;
		end 
  end
end
//MARKER AUTOMATED HERE START
// 
// always @(negedge clk_i) begin
// 	#30
// 	if (jump_inst_wire)    begin $write("\nPC_module: JUMP!   Next cycle, New PC: %8h, Destroyed PC %8h", targetPC_i,PC + 4);end
// 	if (branch_inst_wire ) begin $write("\nPC_module: BRANCH! Next cycle, New PC: %8h, Destroyed PC %8h", targetPC_i,PC + 4);end
// 
// end
// 
//MARKER AUTOMATED HERE END


   
endmodule

// End contents of pc.v

// Begin contents of dataMem.v

// `define SET_MEM_REQ(i_stallreq, i_state, i_mem_re, i_mem_we, i_mem_addr_o, i_mem_data_o) \
// 	stallreq   = i_stallreq; \
// 	state      = i_state; \
// 	mem_re     = i_mem_re; \
// 	mem_we     = i_mem_we; \
// 	mem_addr_o = i_mem_addr_o; \
// 	mem_data_o = i_mem_data_o;

module dataMem (
input wire clk,
input wire reset, 
  
input wire      [63:0] Single_Instruction,
input wire      [31:0] address_i,
input wire      [31:0] storeData, 
input wire      [31:0] pc_i,
input wire      [31:0] memory_offset,
output wire     [31:0] loadData_w,
output wire     [31:0] final_value, // debug port not in actual FPGA
output wire     stall_mem_not_avalible,
output wire      load_into_reg,



/// BRAM PORTS
    output wire        data_mem_clkb,
    output wire        data_mem_enb,
    output wire        data_mem_rstb,
    output wire [3:0 ] data_mem_web,
    output wire [31:0] data_mem_addrb,
    output wire [31:0] data_mem_dinb,
    input  wire        data_mem_rstb_busy,
    input  wire [31:0] data_mem_doutb
);

    wire [29:0] word_address;
    wire [ 1:0] byte_address;
    reg         stall_mem_not_avalible_reg;
    reg load_data_valid;
    wire stall_needed,store_wire,load_wire;
    wire [31:0] raw_word;
    reg [31:0] loadData;               // Data to be loaded
    reg  [3:0] loadData_byte;               // Data to be loaded
    reg [31:0] storeaddress;           // Data to be loaded
    wire [31:0] raw_bram_data_word,raw_bram_data_word_end;          

    reg [31:0] last_stored_data,last_stored_word_address,last_stored_address;
    reg [31:0] last_loaded_data,last_loaded_address;
    reg stored_happened,loaded_happened;

    wire [15:0] raw_data_byte_LHU;

    wire [31:0] address;

    reg [31:0] cycles_request; 
    reg [31:0] retrive_cycles;
    wire rstb_busy;

    wire enb;
    reg [3:0] web;
    wire [ 7:0] raw_data_byte_LBU;
    reg [31:0] store_data;

    assign address = address_i - memory_offset;

    assign data_mem_clkb      =  clk;
    assign data_mem_addrb     = address;
    assign data_mem_dinb      = store_data;
    assign data_mem_enb       = enb;
    assign data_mem_rstb      = 1'b0;
    assign data_mem_web       = web;
    assign raw_bram_data_word = data_mem_doutb ;
    assign rstb_busy          = data_mem_rstb_busy;







    initial begin 
        retrive_cycles <= 0;
        store_data <= 32'b0;

    end 

    assign load_into_reg = load_wire;
    assign stall_mem_not_avalible = stall_needed && ~load_data_valid;
    // assign address = address_i;
    assign word_address = address[31:2];  
    assign byte_address = address[ 1:0];
    // assign raw_word = DMEM[word_address];
    assign loadData_w = loadData;




assign load_wire  =     ((Single_Instruction == `inst_LB)  ||
                         (Single_Instruction == `inst_LH)  ||
                         (Single_Instruction == `inst_LW)  ||
                         (Single_Instruction == `inst_LBU) ||
                         (Single_Instruction == `inst_LHU));

assign stall_needed   = ((Single_Instruction == `inst_LB)  ||
                        (Single_Instruction == `inst_LH)  ||
                        (Single_Instruction == `inst_LW)  ||
                        (Single_Instruction == `inst_LBU) ||
                        (Single_Instruction == `inst_LHU));
                    
assign store_wire    = ((Single_Instruction == `inst_SB) ||
                        (Single_Instruction == `inst_SH) ||
                        (Single_Instruction == `inst_SW));
assign enb = store_wire | load_wire;

assign loadData_w =   loadData;


assign raw_data_byte_LBU = ((byte_address == 2'b00) ? raw_bram_data_word[7:0]   :
                            (byte_address == 2'b01) ? raw_bram_data_word[15:8]  :
                            (byte_address == 2'b10) ? raw_bram_data_word[23:16] :
                            (byte_address == 2'b11) ? raw_bram_data_word[31:24] : 8'b0 );
        
assign raw_data_byte_LHU = ((byte_address == 2'b00) ? raw_bram_data_word[15:0]   : 
                            (byte_address == 2'b01) ? raw_bram_data_word[23:8]   : 
                            (byte_address == 2'b10) ? raw_bram_data_word[31:16]  : 
                            16'b0); 

always @(*) begin
  if (load_data_valid) begin  
    case(Single_Instruction)
        `inst_LW :begin 
          loadData <= raw_bram_data_word;
        end
        `inst_LB :begin  
          loadData <= { {24{raw_data_byte_LBU[7]}}, raw_data_byte_LBU };
        end
        `inst_LH :begin  
          loadData <= { {16{raw_data_byte_LHU[15]}}, raw_data_byte_LHU };
        end     
        `inst_LBU :begin  
          loadData <= {24'b0,raw_data_byte_LBU};
        end
        `inst_LHU :begin  
          loadData <= {16'b0,raw_data_byte_LHU};
        end
        default: begin 
          loadData <= 32'b0;          
        end
    endcase 
  end else begin
          loadData       <=  32'b0;          
  end
end

always @(posedge clk) begin
  if (reset) begin
    cycles_request  <= 8'b0;
    load_data_valid <= 1'b0;
  end else if (load_wire) begin
    if (cycles_request >= retrive_cycles) begin
      if ( ~load_data_valid) begin
        load_data_valid         <= 1'b1;
      end else begin 
        load_data_valid         <= 1'b0;
      end end else begin
        load_data_valid         <= 1'b0;
      cycles_request <= cycles_request + 1'b1;
      end
    end else begin
      load_data_valid      <= 1'b0;
      cycles_request       <= 8'b0;
  end
end


integer i;
always @(*) begin
        if (store_wire) begin
        case(Single_Instruction) 
        {`inst_SB    }:begin
          case(byte_address)
            2'b00:   begin web   <= 4'b0001; store_data <= {24'b0,storeData[7:0]};       end
            2'b01:   begin web   <= 4'b0010; store_data <= {16'b0,storeData[7:0], 8'b0}; end
            2'b10:   begin web   <= 4'b0100; store_data <= { 8'b0,storeData[7:0],16'b0}; end
            2'b11:   begin web   <= 4'b1000; store_data <= {      storeData[7:0],24'b0}; end
            default: begin web   <= 4'b0;    store_data <= 32'b0;                        end
          endcase// DMEM[word_address]   <= (DMEM[word_address] & ~(32'hFF << (byte_address * 8))) | ((storeData[7:0] & 8'hFF) << (byte_address * 8));
        end
        {`inst_SH }:begin
          case(byte_address)
            2'b00,2'b01: begin web   <= 4'b0011; store_data <= {16'b0, storeData[15:0]      }; end 
            2'b10,2'b11: begin web   <= 4'b1100; store_data <= {       storeData[15:0],16'b0}; end
            default:     begin web   <= 4'b0;    store_data <= 32'b0;                          end
          endcase// DMEM[word_address]   <= (DMEM[word_address] & ~(32'hFFFF << (address[1] * 16))) | ((storeData[15:0] & 16'hFFFF) << (address[1] * 16));
        end
        {`inst_SW }:begin
          web        <= 4'b1111; // DMEM[word_address]   <= storeData;
          store_data <= storeData;
        end
        endcase     
            end else begin
                web       <= 4'b0;
                store_data <= 32'b0;
            end end


// used for final endpoint      
end_write end_write (
  .final_value(final_value),// debug port not in actual FPGA
  .clkb(clk),
  .addrb(address),
  .dinb(store_data),
  .doutb(raw_bram_data_word_end),
  .enb( enb),
  .rstb(1'b0),
  .web(web),
  .rstb_busy(rstb_busy) );

endmodule




module end_write (
    input  wire        clkb,
    input  wire        enb,
    input  wire        rstb,
    input  wire [3:0 ] web,
    input  wire [31:0] addrb,
    input  wire [31:0] dinb,
    output wire        rstb_busy,
    output wire [31:0] doutb,
    output wire [31:0] final_value

);

  reg [31:0] DMEM;
  reg [31:0] doutb_reg;
  reg [29:0] addrb_word;
  wire [29:0] word_address;
  wire [ 1:0] byte_address;

  assign doutb = doutb_reg;
  assign rstb_busy = 0;
  assign word_address = addrb[31:2];  
  assign byte_address = addrb[ 1:0];
  initial begin
      DMEM <= 32'h00000000;
  end
  assign final_value           = DMEM;
  always @(posedge clkb) begin
    if (rstb) begin
      doutb_reg <= 32'b0;
      DMEM <= 32'h00000000;
    end else if ((enb==1'b1) &&( word_address == 29'b0)) begin
      if (web != 4'b0000) begin
        if (web[0]) begin DMEM[ 7: 0]  <=  dinb[ 7: 0];   end 
        if (web[1]) begin DMEM[15: 8]  <=  dinb[15: 8];   end 
        if (web[2]) begin DMEM[23:16]  <=  dinb[23:16];   end 
        if (web[3]) begin DMEM[31:24]  <=  dinb[31:24];   end 
       doutb_reg <= {
          (web[3] ? dinb[31:24] : DMEM[31:24]),
          (web[2] ? dinb[23:16] : DMEM[23:16]),
          (web[1] ? dinb[15: 8] : DMEM[15: 8]),
          (web[0] ? dinb[ 7: 0] : DMEM[ 7: 0])
        };
      end else begin
        doutb_reg <= DMEM;
      end
    end
  end

endmodule



// End contents of dataMem.v

// Begin contents of hazard.v
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


   //foward from stage2 MEM reg to exec for RS1
   assign memFwd1 =  (destination_reg_stage2  == rs1_stage1) &&  write_reg_stage2;
   

   //foward from stage3 WB  reg to exec for RS1
   assign wbFwd1  =  (destination_reg_stage3  == rs1_stage1) &&  write_reg_stage3;


   //foward from stage2 MEM reg to exec for RS1
   assign memFwd2 = (rs2_stage1 == destination_reg_stage2)  &&  write_reg_stage2;

   
   //foward from stage3 WB  reg to exec for RS1
   assign wbFwd2  = (rs2_stage1 == destination_reg_stage3 ) &&  write_reg_stage3;

   
   assign src1Forward_alu = memFwd1 ?  2'b10 : wbFwd1 ? 2'b01 : 2'b00;
   assign src2Forward_alu = memFwd2 ?  2'b10 : wbFwd2 ? 2'b01 : 2'b00;

   assign operand1_into_exec = src1Forward_alu[1] ? (rd_result_stage2) :(src1Forward_alu[0] ? writeData_pi: operand1_stage1 ) ;
   assign operand2_into_exec = src2Forward_alu[1] ? (rd_result_stage2) :(src2Forward_alu[0] ? writeData_pi: operand2_stage1 ) ;



//MARKER AUTOMATED HERE START
// 
// always @(negedge clk) begin
//    #25
// 
//    if (memFwd1|wbFwd1)begin 
//    case(src1Forward_alu)
//    2'b11: begin $write("\n HAZARD: memFwd1 <wbFwd1 also qualified but will not take>, RS1 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage2,PC_stage1,operand1_into_exec );end
//    2'b10: begin $write("\n HAZARD: memFwd1, RS1 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage2,PC_stage1,operand1_into_exec );end
//    2'b01: begin $write("\n HAZARD: wbFwd1,  RS1 Stage3  to ALU %5d, PC from stage 3: %8h forwarded to PC %8h, Forwarded value %8h", rs1_stage1,PC_stage3,PC_stage1,operand1_into_exec );end
//    endcase
// 
//    if (memFwd2|wbFwd2)begin 
//    case(src2Forward_alu)
//    2'b10: begin       $write("\n HAZARD: memFwd2 <wbFwd1 also qualified but will not take>, RS2 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage2,PC_stage1,operand2_into_exec );end
//    2'b10: begin       $write("\n HAZARD: memFwd2, RS2 Stage2  to ALU %5d, PC from stage 2: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage2,PC_stage1,operand2_into_exec );end
//    2'b00: begin       $write("\n HAZARD: wbFwd2,  RS2 Stage3  to ALU %5d, PC from stage 3: %8h forwarded to PC %8h, Forwarded value %8h", rs2_stage1,PC_stage3,PC_stage1,operand2_into_exec );end
//    endcase
//    end
// end
// end
//MARKER AUTOMATED HERE END



endmodule



// End contents of hazard.v

