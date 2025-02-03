module execute_wrapper (
    input wire i_clk,
    input wire i_en,
    input wire [4:0] rd_i,
    input wire [4:0] rs1_i,
    input wire [4:0] rs2_i,
    input wire [31:0] instruction,
    input wire [31:0] operand1_pi,
    input wire [31:0] operand2_pi,
    input wire [31:0] imm_i,
    input wire [31:0] pc_i,
    input wire [63:0] Single_Instruction_i,
    output wire [31:0] alu_result_1,
    output wire [31:0] alu_result_2,
    output wire branch_inst_wire,
    output wire jump_inst_wire,
    output wire write_reg_file_wire
);

    execute dut (
        .i_clk(i_clk),
        .i_en(i_en),
        .rd_i(rd_i),
        .rs1_i(rs1_i),
        .rs2_i(rs2_i),
        .instruction(instruction),
        .operand1_pi(operand1_pi),
        .operand2_pi(operand2_pi),
        .imm_i(imm_i),
        .pc_i(pc_i),
        .Single_Instruction_i(Single_Instruction_i),
        .alu_result_1(alu_result_1),
        .alu_result_2(alu_result_2),
        .branch_inst_wire(branch_inst_wire),
        .jump_inst_wire(jump_inst_wire),
        .write_reg_file_wire(write_reg_file_wire)
    );
    initial begin
        $dumpfile("./vcds/execute.vcd");
        $dumpvars(0, execute_wrapper);
    end
endmodule
