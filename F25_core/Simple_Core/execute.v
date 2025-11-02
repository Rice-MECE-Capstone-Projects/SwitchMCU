`include "params.vh"

module execute (
    input  wire i_clk,
    input  wire i_en,
    input  wire [31:0] operand1_pi,
    input  wire [31:0] operand2_pi,
    input  wire [31:0] imm_i,
    input  wire [31:0] pc_i,
    input  wire [6:0] opcode_i,
    input  wire [2:0] fun3_i,
    input  wire [6:0] fun7_i,
    input  wire [4:0] rd_i,
    
    // Pipelined outputs (Registered results for MEM/WB stage)
    output wire [31:0] alu_result_o,          // Registered ALU result
    output wire jump_inst_o,                 // Registered jump control
    output wire write_reg_file_o,            // Registered register write enable
    output wire [4:0] rd_addr_o,             // Registered destination register address
    
    // Immediate output (Combinational branch condition for PC unit)
    output wire branch_inst_o                // Branch condition (Combinational or Registered depending on hazard module)
);

    // Internal REGs for combinational calculation (must be declared as reg to be assigned inside always @(*))
    reg  [31:0] result_comb;
    reg  branch_cond_comb;
    reg  branch_inst_comb;
    reg  jump_inst_comb;
    reg  write_reg_file_comb;

    // Output registers for pipelining (Sequential logic for EX/MEM boundary)
    reg  [31:0] alu_result_reg;
    reg  jump_inst_reg;
    reg  write_reg_file_reg;
    reg  [4:0] rd_addr_reg;
    reg  branch_inst_reg; // Also register the branch instruction type

    // Sign extension wires
    wire signed [31:0] operand1_pi_signed = $signed(operand1_pi);
    wire signed [31:0] operand2_pi_signed = $signed(operand2_pi);
    wire signed [31:0] imm_i_signed = $signed(imm_i);

    // Final output assignments (Connecting registers to output ports)
    assign alu_result_o       = alu_result_reg;
    assign jump_inst_o        = jump_inst_reg;
    assign write_reg_file_o   = (~(rd_addr_reg == 5'b0)) & write_reg_file_reg; 
    assign rd_addr_o          = rd_addr_reg;
    
    // The Branch Instruction Output must assert both the control type AND the calculated condition
    // NOTE: This signal needs to be immediately available to the PC unit for branch resolution/prediction.
    assign branch_inst_o      = branch_inst_comb & branch_cond_comb;


    // ====================================================================
    // 1. Combinational Logic (ALU and Control Calculation - Uses Blocking assignments '=')
    // **This logic cone must complete within one clock period (the original critical path)**
    // ====================================================================
    
    always @(*) begin
        // Default assignments (Reset all combinational control signals)
        result_comb         = 32'b0;
        branch_inst_comb    = 1'b0;
        jump_inst_comb      = 1'b0;
        write_reg_file_comb = 1'b0;
        branch_cond_comb    = 1'b0; 

        case(opcode_i) 
        
            `R_Type: begin
                write_reg_file_comb = 1'b1;
                case (fun3_i)
                    3'b000: result_comb = (fun7_i == `ADD_FUN7) ? operand1_pi + operand2_pi : operand1_pi - operand2_pi; 
                    3'b001: result_comb = (operand1_pi << operand2_pi[4:0]); 
                    3'b010: result_comb = (operand1_pi_signed < operand2_pi_signed) ? 1 : 0; 
                    3'b011: result_comb = (operand1_pi < operand2_pi) ? 1 : 0; 
                    3'b100: result_comb = operand1_pi ^ operand2_pi;
                    3'b101: result_comb = (fun7_i == `ADD_FUN7) ? (operand1_pi >> operand2_pi[4:0]) : ($signed(operand1_pi) >>> operand2_pi[4:0]); 
                    3'b110: result_comb = operand1_pi | operand2_pi;
                    3'b111: result_comb = operand1_pi & operand2_pi; 
                endcase
            end
            
            `I_Type_A: begin
                write_reg_file_comb = 1'b1;
                case (fun3_i)
                    3'b000: result_comb = operand1_pi + imm_i;
                    3'b010: result_comb = (operand1_pi_signed < imm_i_signed) ? 1 : 0; 
                    3'b011: result_comb = (operand1_pi < imm_i) ? 1 : 0;
                    3'b100: result_comb = operand1_pi ^ imm_i; 
                    3'b110: result_comb = operand1_pi | imm_i;
                    3'b111: result_comb = operand1_pi & imm_i;
                    3'b001: result_comb = (operand1_pi << imm_i[4:0]);
                    3'b101: result_comb = (fun7_i == `ADD_FUN7) ? (operand1_pi >> imm_i[4:0]) : ($signed(operand1_pi) >>> imm_i[4:0]);
                endcase
            end
            
            // Load and Store Address Calculation
            `I_Type_L, `S_Type: begin
                write_reg_file_comb = (opcode_i == `I_Type_L) ? 1'b1 : 1'b0;
                result_comb = operand1_pi + imm_i;
            end
            
            `B_Type: begin
                branch_inst_comb    = 1'b1;
                result_comb         = pc_i + imm_i; // Branch Target Address (BTA)
                
                // branch_cond computes the condition flag
                case (fun3_i)
                    3'b000: branch_cond_comb = (operand1_pi == operand2_pi);        // BEQ
                    3'b001: branch_cond_comb = (operand1_pi != operand2_pi);        // BNE
                    3'b100: branch_cond_comb = (operand1_pi_signed < operand2_pi_signed); // BLT
                    3'b101: branch_cond_comb = (operand1_pi_signed >= operand2_pi_signed); // BGE
                    3'b110: branch_cond_comb = (operand1_pi < operand2_pi);         // BLTU
                    3'b111: branch_cond_comb = (operand1_pi >= operand2_pi);        // BGEU
                endcase
            end
            
            // JAL/JALR
            `J_Type_lk, `I_Type_JALR: begin
                jump_inst_comb      = 1'b1;
                write_reg_file_comb = 1'b1;
                // Target PC
                result_comb = (opcode_i == `J_Type_lk) ? (pc_i + imm_i) : ((operand1_pi + imm_i) & 32'hFFFFFFFE);
            end
            
            // U-Type
            `U_Type_lui, `U_Type_auipc: begin
                write_reg_file_comb = 1'b1;
                result_comb = (opcode_i == `U_Type_lui) ? imm_i : pc_i + imm_i;
            end
            
        endcase
    end
    

    // ====================================================================
    // 2. Sequential Logic (Pipelining the EX Stage - Uses Non-Blocking assignments '<=')
    // **This register break isolates the critical path**
    // ====================================================================
    
    always @(posedge i_clk) begin
        if (i_en) begin
            alu_result_reg     <= result_comb;
            jump_inst_reg      <= jump_inst_comb;
            write_reg_file_reg <= write_reg_file_comb;
            rd_addr_reg        <= rd_i; 
        end
    end

endmodule