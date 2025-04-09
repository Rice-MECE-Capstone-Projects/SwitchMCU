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
    input wire  [11:0] csr_i,

    input wire  [31:0] instruction,
    input wire  [31:0] operand1_pi,
    input wire  [31:0] operand2_pi,
    input wire  [31:0] imm_i,
    input wire  [31:0] pc_i,
    input wire         Noop,
    input wire  [31:0] csr_op_in,
    output wire [31:0] alu_result_1,
    output wire [31:0] alu_result_2,

    output wire  branch_inst_wire, 
    output wire  jump_inst_wire,
    output wire  write_reg_file_wire,
    output wire  write_csr_wire,

    input wire [63:0] Single_Instruction_i
    // outputs to ALU
);


reg  [32:0] result;
reg  [32:0] result_secondary;
assign alu_result_1           = result[31:0];
assign alu_result_2 = result_secondary[31:0];
reg  branch_inst, jump_inst,write_reg_file,write_csr;

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


assign write_csr_wire                 = write_csr;
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
    write_csr <= 1'b0;
end
{`inst_ADD   }:begin 
result <= operand1_pi + operand2_pi;
result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SUB   }:begin 
    result <= operand1_pi - operand2_pi;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_XOR   }:begin 
    result <= operand1_pi ^ operand2_pi;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_OR    }:begin 
    result <= operand1_pi | operand2_pi;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_AND    }:begin 
    result <= operand1_pi & operand2_pi;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SLL   }:begin 
    result <= (operand1_pi << (operand2_pi));
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SRL   }:begin 
    result <= (operand1_pi >> (operand2_pi));
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SRA   }:begin 
    result <= (operand1_pi_signed >>> (operand2_pi));
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SLTU  }:begin 
    result <= (operand1_pi        < operand2_pi       ) ? 1'b1 : 1'b0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SLT   }:begin 
    result <= (operand1_pi_signed < operand2_pi_signed) ? 1'b1 : 1'b0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_ADDI  }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_XORI  }:begin 
    result <= operand1_pi ^ imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_ORI  }:begin 
    result <= operand1_pi | imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_ANDI  }:begin 
    result <= operand1_pi & imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SLLI  }:begin 
    result <= operand1_pi << imm_i[4:0];
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SRLI  }:begin 
    result <= operand1_pi >> imm_i[4:0];
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SRAI    }:begin 
    result <=  operand1_pi_signed >>> imm_i[4:0];
    // $signed(operand1_pi) >>> imm_i[4:0];
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SLTI  }:begin 
    result <= (operand1_pi        < imm_i       ) ? 1'b1 : 1'b0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SLTIU }:begin 
    result <= (operand1_pi_signed < imm_i_signed      ) ? 1'b1 : 1'b0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_LB    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_LH    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_LW    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_LBU   }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_LHU   }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_SB    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_SH    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_SW    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_BEQ   }:begin
    result <= {31'b0,(operand1_pi == operand2_pi)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_BNE   }:begin
    result <= {31'b0,(operand1_pi != operand2_pi)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_BLT   }:begin
    result <= {31'b0,(operand1_pi_signed <  operand2_pi_signed)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_BGE   }:begin
    result <= {31'b0,(operand1_pi_signed >= operand2_pi_signed)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_BLTU  }:begin
    result <= {31'b0,(operand1_pi <  operand2_pi)};
    result_secondary <=pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_BGEU  }:begin
    result <= {31'b0,(operand1_pi >= operand2_pi)};
    result_secondary <= pc_i + imm_i;
    branch_inst <=1'b1;
    jump_inst <=0;
    write_reg_file <= 1'b0;
    write_csr <= 1'b0;
end
{`inst_JAL   }:begin
    result <= pc_i + 4;
    result_secondary <= pc_i + imm_i;
    branch_inst <=0;
    jump_inst <=1'b1;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_JALR  }:begin
    result <= pc_i + 4;
    result_secondary <= operand1_pi + imm_i;
    branch_inst <=0;
    jump_inst <=1'b1;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_LUI   }:begin
    result           <=imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_AUIPC }:begin
    result           <=pc_i + imm_i;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
         write_csr <= 1'b0;
end
{`inst_ECALL }:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_EBREAK}:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_FENCE }:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_FENCEI}:begin
    result           <=0;
    result_secondary <=0;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
// For CSR instructions, "result" is what will be getting written to REGFILE
// "result_secondary" is the value that will be written to CSR
// and operand 2 is the value that will be read from CSR for use in the register file
{`inst_CSRRW }:begin
    result           <= csr_op_in;//operand2_pi;
    result_secondary <= operand1_pi;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr      <= 1'b1;
end
{`inst_CSRRS }:begin
    result           <=  csr_op_in;//operand2_pi;
    result_secondary <=  operand1_pi |  csr_op_in;//
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr      <= 1'b1;
end
{`inst_CSRRC }:begin
    result           <=  csr_op_in;//operand2_pi;
    result_secondary <=  csr_op_in & ~operand1_pi; //operand2_pi;
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b1;

end
{`inst_CSRRWI}:begin
    result           <= csr_op_in;//operand2_pi;
    result_secondary <= {27'b0,rs1_i};
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;

end
{`inst_CSRRSI}:begin
    result           <= operand2_pi;
    result_secondary <= operand2_pi | {27'b0, rs1_i};
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
{`inst_CSRRCI}:begin
    result           <= operand2_pi;
    result_secondary <= operand2_pi & ~{27'b0, rs1_i};
    branch_inst <=0;
    jump_inst <=0;
    write_reg_file <= 1'b1;
    write_csr <= 1'b0;
end
default: begin 
    result              <=0;
    result_secondary    <=0;
    branch_inst         <=0;
    jump_inst           <=0;
    write_reg_file      <= 1'b0;
    write_csr           <= 1'b0;
end
endcase
end


//MARKER AUTOMATED HERE START


wire debug_i;
assign debug_i = 1;
always @(negedge i_clk) begin 
#11
if (debug_i) begin
    $write("\nEXEC      PC: %h: I:{%h}    ",pc_i,  instruction   );

case(Single_Instruction_i)
{`inst_UNKNOWN   }:begin 
    $write("inst_UNKOWN ");
end
{`inst_ADD   }:begin 
    $write("inst_ADD    ");

end
{`inst_SUB   }:begin 
    $write("inst_SUB    ");

end
{`inst_XOR   }:begin 
    $write("inst_XOR    ");

end
{`inst_OR    }:begin 
    $write("inst_OR     ");
end
{`inst_AND    }:begin 
    $write("inst_AND     ");
end
{`inst_SLL   }:begin 
    $write("inst_SLL    ");
end
{`inst_SRL   }:begin 
    $write("inst_SRL    ");
end
{`inst_SRA   }:begin 
    $write("inst_SRA    ");
end
{`inst_SLT   }:begin 
    $write("inst_SLT    ");
end
{`inst_SLTU  }:begin 
    $write("inst_SLTU   ");
end
{`inst_ADDI  }:begin 
    $write("inst_ADDI   ");
end
{`inst_XORI  }:begin 
    $write("inst_XORI   ");
end
{`inst_ORI  }:begin 
    $write("inst_ORI   ");
end
{`inst_ANDI  }:begin 
    $write("inst_ANDI   ");
end
{`inst_SLLI  }:begin 
    $write("inst_SLLI   ");
end
{`inst_SRLI  }:begin 
    $write("inst_SRLI   ");
end
{`inst_SRAI    }:begin 
    $write("inst_SRAI     ");
end
{`inst_SLTI  }:begin 
    $write("inst_SLTI   ");
end
{`inst_SLTIU }:begin 
    $write("inst_SLTIU   ");
end
{`inst_LB    }:begin 
    $write("inst_LB     ");
end
{`inst_LH    }:begin 
    $write("inst_LH     ");
end
{`inst_LW    }:begin 
    $write("inst_LW     ");
end
{`inst_LBU   }:begin 
    $write("inst_LBU    ");
end
{`inst_LHU   }:begin 
    $write("inst_LHU    ");
end
{`inst_SB    }:begin 
    $write("inst_SB     ");
     end
{`inst_SH    }:begin 
    $write("inst_SH     ");
     end
{`inst_SW    }:begin 
    $write("inst_SW     ");
     end
{`inst_BEQ   }:begin 
    $write("inst_BEQ    ");
     end
{`inst_BNE   }:begin 
    $write("inst_BNE    ");
     end
{`inst_BLT   }:begin 
    $write("inst_BLT    ");
     end
{`inst_BGE   }:begin 
    $write("inst_BGE    ");
     end
{`inst_BLTU  }:begin 
    $write("inst_BLTU   ");
     end
{`inst_BGEU  }:begin 
    $write("inst_BGEU   ");
     end
{`inst_JAL   }:begin 
    $write("inst_JAL    ");
     end
{`inst_JALR  }:begin 
    $write("inst_JALR   ");
     end
{`inst_LUI   }:begin 
    $write("inst_LUI    ");
     end
{`inst_AUIPC }:begin 
    $write("inst_AUIPC  ");
     end
{`inst_ECALL }:begin 
    $write("inst_ECALL   ");
     end
{`inst_EBREAK}:begin 
    $write("inst_EBREAK   ");
     end
{`inst_FENCE }:begin 
    $write("inst_FENCE   ");
     end
{`inst_FENCEI}:begin 
    $write("inst_FENCEI   ");
     end
{`inst_CSRRW }:begin 
    $write("inst_CSRRW   ");
     end
{`inst_CSRRS }:begin 
    $write("inst_CSRRS   ");
     end
{`inst_CSRRC }:begin 
    $write("inst_CSRRC   ");
     end
{`inst_CSRRWI}:begin 
    $write("inst_CSRRWI   ");
     end
{`inst_CSRRSI}:begin 
    $write("inst_CSRRSI   ");
     end
{`inst_CSRRCI}:begin 
    $write("inst_CSRRCI   ");
     end
default: begin 
    $write("not_encoded instruction   ");
end
endcase
   $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %8h rs2_d %8h  result {%4H}",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $write(" imm_i %h", $signed(imm_i));
end

end
//MARKER AUTOMATED HERE END



endmodule