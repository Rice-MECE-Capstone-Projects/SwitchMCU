module hazard (
    input wire clk, 
    input wire [4:0]  rs1_stage1,                
    input wire [4:0]  rs2_stage1,                
    input wire [4:0]  destination_reg_stage2,      
    input wire        write_reg_stage2,         
    input wire [4:0]  destination_reg_stage3,    
    input wire        write_reg_stage3,    
    input wire [31:0]  rd_result_stage2,
    input wire [31:0]  operand1_stage1,
    output wire [31:0] operand1_into_exec,
    input wire [31:0]  operand2_stage1,
    output wire [31:0] operand2_into_exec
);
    wire [1:0] src1Forward_alu;           
    wire [1:0] src2Forward_alu;

    assign src1Forward_alu[0] = (destination_reg_stage2 != 5'b0) && (destination_reg_stage2 == rs1_stage1) && write_reg_stage2;
    assign src1Forward_alu[1] = (destination_reg_stage3 != 5'b0) && (destination_reg_stage3 == rs1_stage1) && write_reg_stage3;
    assign src2Forward_alu[0] = (destination_reg_stage2 != 5'b0) && (destination_reg_stage2 == rs2_stage1) && write_reg_stage2;
    assign src2Forward_alu[1] = (destination_reg_stage3 != 5'b0) && (destination_reg_stage3 == rs2_stage1) && write_reg_stage3;
    
    assign operand1_into_exec = src1Forward_alu[0] ? rd_result_stage2 : (src1Forward_alu[1] ? writeData_pi : operand1_stage1);
    assign operand2_into_exec = src2Forward_alu[0] ? rd_result_stage2 : (src2Forward_alu[1] ? writeData_pi : operand2_stage1);
endmodule