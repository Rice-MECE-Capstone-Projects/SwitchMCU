
`timescale 1ns/1ps
`include "params.sv" // if you need the inst_* macros

// 1) interface first (recommended)
interface execute_if(input bit clk);
  logic i_en;
  logic [4:0] rd_i, rs1_i, rs2_i;
  logic [31:0] instruction;
  logic [31:0] operand1_pi, operand2_pi, imm_i, pc_i;
  logic Noop;
  logic [63:0] Single_Instruction_i;

  logic [31:0] alu_result_1;
  logic [31:0] alu_result_2;
  logic branch_inst_wire;
  logic jump_inst_wire;
  logic write_reg_file_wire;

  modport DUT (input clk, i_en, rd_i, rs1_i, rs2_i, instruction, operand1_pi, operand2_pi, imm_i, pc_i, Noop, Single_Instruction_i,
               output alu_result_1, alu_result_2, branch_inst_wire, jump_inst_wire, write_reg_file_wire);
  
  modport TB  (input clk, alu_result_1, alu_result_2, branch_inst_wire, jump_inst_wire, write_reg_file_wire,
               output i_en, rd_i, rs1_i, rs2_i, instruction, operand1_pi, operand2_pi, imm_i, pc_i, Noop, Single_Instruction_i);
endinterface

// Code your design here
module execute 
   # (
    parameter   N_param = 32   ) (
    // input  wire i_clk,
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

//MARKER AUTOMATED HERE END



endmodule