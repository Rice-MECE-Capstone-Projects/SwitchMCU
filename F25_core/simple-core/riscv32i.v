`include "params.vh"

module riscv32i (
    // PYNQ-Z2 Core I/O
    input wire sysclk,
    input wire [1:0] sw, // sw[0] used as reset
    
    // Output connected to LED (Low 4 bits of ALU result)
    output wire [3:0] led
);

// ----------------------------------------------------------------------
// Internal Signal Declarations (IF/ID Boundary)
// ----------------------------------------------------------------------
    wire reset = sw[0];
    
    wire [31:0] if_pc; // Accessible as core.if_pc
    wire [31:0] if_instruction;
    
    // ID Stage Wires
    wire [4:0] id_rd, id_rs1, id_rs2;
    wire [2:0] id_fun3;
    wire [6:0] id_fun7;
    wire [31:0] id_imm;
    wire [6:0] id_opcode;
    
    wire [31:0] id_rs1_data, id_rs2_data; // Raw register file read data

// ----------------------------------------------------------------------
// ID/EX Pipeline Registers (Registered at clock edge)
// ----------------------------------------------------------------------
    reg [31:0] id_ex_op1_reg, id_ex_op2_reg;
    reg [31:0] id_ex_imm_reg;
    reg [31:0] id_ex_pc_reg;
    reg [4:0]  id_ex_rd_reg;
    reg [6:0]  id_ex_opcode_reg;
    reg [2:0]  id_ex_fun3_reg;
    reg [6:0]  id_ex_fun7_reg;

// ----------------------------------------------------------------------
// EX/MEM Boundary Wires (Registered outputs of execute.v)
// ----------------------------------------------------------------------
    wire [31:0] ex_mem_alu_result; // Accessible as core.ex_mem_alu_result
    wire ex_mem_jump_inst;
    wire ex_mem_branch_inst;
    wire ex_mem_write_reg;
    wire [4:0] ex_mem_rd_o;

// ----------------------------------------------------------------------
// MEM/WB Boundary Wires (Registered output of dataMem.v)
// ----------------------------------------------------------------------
    wire [31:0] mem_wb_load_data; 
    wire mem_load_en;
    wire mem_store_en;

    wire dummy_pc_valid;
    
    // LED Output
    assign led = ex_mem_alu_result[3:0]; 
    
// ----------------------------------------------------------------------
// ID/EX Pipeline Register Logic
// ----------------------------------------------------------------------
    always @(posedge sysclk) begin
        if (reset) begin
            id_ex_op1_reg    <= 32'b0;
            id_ex_op2_reg    <= 32'b0;
            id_ex_imm_reg    <= 32'b0;
            id_ex_pc_reg     <= 32'b0;
            id_ex_rd_reg     <= 5'b0;
            id_ex_opcode_reg <= 7'b0;
            id_ex_fun3_reg   <= 3'b0;
            id_ex_fun7_reg   <= 7'b0;
        end else begin
            id_ex_op1_reg    <= id_rs1_data; 
            id_ex_op2_reg    <= id_rs2_data;
            id_ex_imm_reg    <= id_imm;
            id_ex_pc_reg     <= if_pc;
            id_ex_rd_reg     <= id_rd;

            id_ex_opcode_reg <= id_opcode;
            id_ex_fun3_reg   <= id_fun3;
            id_ex_fun7_reg   <= id_fun7;
        end
    end
    
// ----------------------------------------------------------------------
// Modules Instantiation
// ----------------------------------------------------------------------

// Stage 1: Instruction Fetch (IF) and Program Counter (PC)
    pc PC_unit (
        .clk_i(sysclk),
        .reset_i(reset),
        .stage_IF_ready(1'b1),
        .jump_inst_wire(ex_mem_jump_inst),
        .branch_inst_wire(ex_mem_branch_inst),
        .enable_design(1'b1),
        .targetPC_i(ex_mem_alu_result),
        .initial_pc_i(32'h00000000),
        .pc_o(if_pc),
        .pc_valid(dummy_pc_valid)
    );

    // Instruction Memory
    ins_mem IMEM (
        .clk(sysclk),
        .reset(reset),
        .pc_i(if_pc),
        .instruction_o(if_instruction)
    );

// Stage 2: Decode (ID)
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

    // Register File (Reads in ID stage, Writes in WB stage)
    regfile REG_FILE (
        .clk(sysclk),
        .reset(reset),
        .rs1_addr(id_rs1),
        .rs2_addr(id_rs2),
        .rs1_data(id_rs1_data), 
        .rs2_data(id_rs2_data), 
        
        .rd_addr(ex_mem_rd_o),
        .rd_data(ex_mem_alu_result), // Assuming Load data path is not fully implemented yet
        .we_i(ex_mem_write_reg)
    );

// Stage 3: Execute (EX)
    execute EXEC (
        .i_clk(sysclk),
        .i_en(1'b1),
        .operand1_pi(id_ex_op1_reg),
        .operand2_pi(id_ex_op2_reg),
        .imm_i(id_ex_imm_reg),
        .pc_i(id_ex_pc_reg),
        .opcode_i(id_ex_opcode_reg),
        .fun3_i(id_ex_fun3_reg),
        .fun7_i(id_ex_fun7_reg),
        .rd_i(id_ex_rd_reg), 
        
        .alu_result_o(ex_mem_alu_result),
        .branch_inst_o(ex_mem_branch_inst),
        .jump_inst_o(ex_mem_jump_inst),
        .write_reg_file_o(ex_mem_write_reg),
        .rd_addr_o(ex_mem_rd_o)
    );

// Stage 4: Data Memory (MEM)
    assign mem_load_en = (id_ex_opcode_reg == `I_Type_L);
    assign mem_store_en = (id_ex_opcode_reg == `S_Type);

    dataMem DMEM (
        .clk(sysclk),
        .reset(reset), 
        .address_i(ex_mem_alu_result),
        .storeData(id_ex_op2_reg),
        .load_en(mem_load_en),
        .store_en(mem_store_en),
        .loadData_w(mem_wb_load_data)
    );
    
endmodule