module hazard (
    // ID Stage inputs
    input wire [4:0]  rs1_stage1,                
    input wire [4:0]  rs2_stage1,                
    
    // EX/MEM Stage Forwarding Source (Stage 2 in this module's context)
    input wire [4:0]  destination_reg_stage2,     
    input wire        write_reg_stage2,         
    input wire [31:0] rd_result_stage2,          // ALU result from EX stage
    
    // MEM/WB Stage Forwarding Source (Stage 3 in this module's context)
    input wire [4:0]  destination_reg_stage3,   
    input wire        write_reg_stage3,         
    input wire [31:0] wb_data_i,                 // Data being written back (Load result or EX result)

    // Original data read from Register File
    input wire [31:0] operand1_stage1,          
    output wire [31:0] operand1_into_exec,      
    input wire [31:0] operand2_stage1,          
    output wire [31:0] operand2_into_exec       
);
    // Forwarding selection signals
    wire src1Forward_alu_stage2; // Forward from EX/MEM (rd_result_stage2)
    wire src1Forward_alu_stage3; // Forward from MEM/WB (wb_data_i)
    wire src2Forward_alu_stage2; 
    wire src2Forward_alu_stage3; 
    
    // Forwarding logic: Stage 2 (EX/MEM) has higher priority
    // Operand 1 checks
    assign src1Forward_alu_stage2 = (destination_reg_stage2 != 5'b0) && 
                                    (destination_reg_stage2 == rs1_stage1) && 
                                    write_reg_stage2;
                                    
    assign src1Forward_alu_stage3 = (~src1Forward_alu_stage2) && // Only forward from Stage 3 if not already forwarding from Stage 2
                                    (destination_reg_stage3 != 5'b0) && 
                                    (destination_reg_stage3 == rs1_stage1) && 
                                    write_reg_stage3;
    
    // Operand 2 checks
    assign src2Forward_alu_stage2 = (destination_reg_stage2 != 5'b0) && 
                                    (destination_reg_stage2 == rs2_stage1) && 
                                    write_reg_stage2;

    assign src2Forward_alu_stage3 = (~src2Forward_alu_stage2) && 
                                    (destination_reg_stage3 != 5'b0) && 
                                    (destination_reg_stage3 == rs2_stage1) && 
                                    write_reg_stage3;
    
    // Select the operand based on priority (Stage 2 > Stage 3 > Register File)
    assign operand1_into_exec = src1Forward_alu_stage2 ? rd_result_stage2 :
                                (src1Forward_alu_stage3 ? wb_data_i : operand1_stage1);

    assign operand2_into_exec = src2Forward_alu_stage2 ? rd_result_stage2 :
                                (src2Forward_alu_stage3 ? wb_data_i : operand2_stage1);
endmodule