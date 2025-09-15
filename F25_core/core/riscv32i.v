`include "params.vh"

module riscv32i (
    input wire clk,
    input wire reset
);
    // Wires connecting pipeline stages
    wire [31:0] if_pc;
    wire [31:0] if_instruction;
    
    wire [4:0] id_rd, id_rs1, id_rs2;
    wire [2:0] id_fun3;
    wire [6:0] id_fun7;
    wire [31:0] id_imm;
    wire [6:0] id_opcode;
    
    wire [31:0] ex_op1, ex_op2;
    wire [31:0] ex_alu_result;
    wire ex_jump_inst;
    wire ex_branch_inst;
    wire ex_write_reg;

    wire [31:0] mem_load_data;
    wire mem_load_en;
    wire mem_store_en;

    // Stage 1: Instruction Fetch
    pc PC_unit (
        .clk_i(clk),
        .reset_i(reset),
        .stage_IF_ready(1'b1), // Simplified for this example
        .jump_inst_wire(ex_jump_inst),
        .branch_inst_wire(ex_branch_inst),
        .enable_design(1'b1), // Always enabled
        .targetPC_i(ex_alu_result), // Assuming target PC comes from execute stage
        .initial_pc_i(32'h00000000), // Start PC
        .pc_o(if_pc),
        .pc_valid() // Unused output
    );

    ins_mem IMEM (
        .clk(clk),
        .reset(reset),
        .pc_i(if_pc),
        .instruction_o(if_instruction)
    );

    // Stage 2: Decode
    decode DEC (
        .instruction(if_instruction),
        .rd_o(id_rd),
        .rs1_o(id_rs1),
        .rs2_o(id_rs2),
        .fun3_o(id_fun3),
        .fun7_o(id_fun7),
        .imm_o(id_imm),
        .opcode_o(id_opcode)
    );

    // Register File
    regfile REG_FILE (
        .clk(clk),
        .reset(reset),
        .rs1_addr(id_rs1),
        .rs2_addr(id_rs2),
        .rs1_data(ex_op1),
        .rs2_data(ex_op2),
        .rd_addr(id_rd),
        .rd_data(ex_alu_result),
        .we_i(ex_write_reg)
    );
    
    // Stage 3: Execute
    execute EXEC (
        .i_clk(clk),
        .i_en(1'b1),
        .operand1_pi(ex_op1),
        .operand2_pi(ex_op2),
        .imm_i(id_imm),
        .pc_i(if_pc),
        .opcode_i(id_opcode),
        .fun3_i(id_fun3),
        .fun7_i(id_fun7),
        .rd_i(id_rd),
        .alu_result(ex_alu_result),
        .branch_inst_wire(ex_branch_inst),
        .jump_inst_wire(ex_jump_inst),
        .write_reg_file_wire(ex_write_reg)
    );
    
    // Stage 4: Memory and Write-Back Control
    assign mem_load_en = (id_opcode == `I_Type_L);
    assign mem_store_en = (id_opcode == `S_Type);

    dataMem DMEM (
        .clk(clk),
        .reset(reset),
        .address_i(ex_alu_result),
        .storeData(ex_op2),
        .load_en(mem_load_en),
        .store_en(mem_store_en),
        .loadData_w(mem_load_data)
    );
endmodule

