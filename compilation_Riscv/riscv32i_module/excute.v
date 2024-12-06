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

    input wire  [31:0] operand1_pi,
    input wire  [31:0] operand2_pi,
    input wire  [31:0] imm_i,
    input wire  [31:0] pc_i,
    output wire [31:0] result_o,
    output wire [31:0] result_secondary_o,


    input wire [63:0] Single_Instruction_i
    // output wire [6:0] INST_typ_o,
    // output wire [6:0] opcode_o
    // outputs to ALU
);


reg  [32:0] result;
reg  [32:0] result_secondary;
assign result_o           = result[31:0];
assign result_secondary_o = result_secondary[31:0];
initial begin 
result <=0;
end 
wire signed [31:0] operand1_pi_signed = operand1_pi;
wire signed [31:0] operand2_pi_signed = operand2_pi; 
wire signed [31:0] imm_i_signed       = imm_i; 

always @(*) begin 
case(Single_Instruction_i)
{inst_UNKNOWN   }:begin 
result <=0;
result_secondary <=0;
end
{inst_ADD   }:begin 
result <= operand1_pi + operand2_pi;
result_secondary <=0;
end
{inst_SUB   }:begin 
    result <= operand1_pi + operand2_pi;
    result_secondary <=0;
end
{inst_XOR   }:begin 
    result <= operand1_pi ^ operand2_pi;
    result_secondary <=0;
end
{inst_OR    }:begin 
    result <= operand1_pi | operand2_pi;
    result_secondary <=0;
end
{inst_AND    }:begin 
    result <= operand1_pi & operand2_pi;
    result_secondary <=0;
end
{inst_SLL   }:begin 
    result <= (operand1_pi << (operand2_pi));
    result_secondary <=0;
end
{inst_SRL   }:begin 
    result <= (operand1_pi >> (operand2_pi));
    result_secondary <=0;
end
{inst_SRA   }:begin 
    result <= (operand1_pi >>> (operand2_pi));
    result_secondary <=0;
end
{inst_SLT   }:begin 
    result <= (operand1_pi        < operand2_pi       ) ? 1'b1 : 1'b0;
    result_secondary <=0;
end
{inst_SLTU  }:begin 
    result <= (operand1_pi_signed < operand2_pi_signed) ? 1'b1 : 1'b0;
    result_secondary <=0;
end
{inst_ADDI  }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_XORI  }:begin 
    result <= operand1_pi ^ imm_i;
    result_secondary <=0;
end
{inst_ORI  }:begin 
    result <= operand1_pi | imm_i;
    result_secondary <=0;
end
{inst_ANDI  }:begin 
    result <= operand1_pi & imm_i;
    result_secondary <=0;
end
{inst_SLLI  }:begin 
    result <= operand1_pi << imm_i;
    result_secondary <=0;
end
{inst_SRLI  }:begin 
    result <= operand1_pi >> imm_i;
    result_secondary <=0;
end
{inst_SRAI    }:begin 
    result <= operand1_pi >>> imm_i;
    result_secondary <=0;
end
{inst_SLTI  }:begin 
    result <= (operand1_pi        < operand2_pi       ) ? 1'b1 : 1'b0;
    result_secondary <=0;
end
{inst_SLTIU }:begin 
    result <= (operand1_pi_signed < imm_i_signed      ) ? 1'b1 : 1'b0;
    result_secondary <=0;
end
{inst_LB    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_LH    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_LW    }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_LBU   }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_LHU   }:begin 
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_SB    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_SH    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_SW    }:begin
    result <= operand1_pi + imm_i;
    result_secondary <=0;
end
{inst_BEQ   }:begin
    result <= {31'b0,(operand1_pi == operand2_pi)};
    result_secondary <=pc_i + imm_i;
end
{inst_BNE   }:begin
    result <= {31'b0,(operand1_pi != operand2_pi)};
    result_secondary <=pc_i + imm_i;
end
{inst_BLT   }:begin
    result <= {31'b0,(operand1_pi <  operand2_pi)};
    result_secondary <=pc_i + imm_i;
end
{inst_BGE   }:begin
    result <= {31'b0,(operand1_pi >= operand2_pi)};
    result_secondary <=pc_i + imm_i;
end
{inst_BLTU  }:begin
    result <= {31'b0,(operand1_pi <  operand2_pi)};
    result_secondary <=pc_i + imm_i;
end
{inst_BGEU  }:begin
    result <= {31'b0,(operand1_pi >= operand2_pi)};
    result_secondary <= pc_i + imm_i;
end
{inst_JAL   }:begin
    result <= pc_i + 4;
    result_secondary <= pc_i + imm_i;
end
{inst_JALR  }:begin
    result <= pc_i + 4;
    result_secondary <= operand1_pi + imm_i;
end
{inst_LUI   }:begin
    result           <=0;
    result_secondary <=0;
end
{inst_AUIPC }:begin
    result           <=pc_i + imm_i;
    result_secondary <=0;
     end
{inst_ECALL }:begin
    result           <=0;
    result_secondary <=0;
end
{inst_EBREAK}:begin
    result           <=0;
    result_secondary <=0;
end
{inst_FENCE }:begin
    result           <=0;
    result_secondary <=0;
end
{inst_FENCEI}:begin
    result           <=0;
    result_secondary <=0;
end
{inst_CSRRW }:begin
    result           <=0;
    result_secondary <=0;
end
{inst_CSRRS }:begin
    result           <=0;
    result_secondary <=0;
end
{inst_CSRRC }:begin
    result           <=0;
    result_secondary <=0;
end
{inst_CSRRWI}:begin
    result           <=0;
    result_secondary <=0;
end
{inst_CSRRSI}:begin
    result           <=0;
    result_secondary <=0;
end
{inst_CSRRCI}:begin
    result           <=0;
    result_secondary <=0;
end
default: begin 
    result           <=0;
    result_secondary <=0;
end
endcase
end





always @(negedge i_clk) begin 
case(Single_Instruction_i)

{inst_UNKNOWN   }:begin 
    $write("inst_UNKOWN   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));


end
{inst_ADD   }:begin 
    $write("inst_ADD   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SUB   }:begin 
    $write("inst_SUB   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_XOR   }:begin 
    $write("inst_XOR   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_OR    }:begin 
    $write("inst_OR    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end

{inst_AND    }:begin 
    $write("inst_AND    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SLL   }:begin 
    $write("inst_SLL   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SRL   }:begin 
    $write("inst_SRL   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SRA   }:begin 
    $write("inst_SRA   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end

{inst_SLT   }:begin 
    $write("inst_SLT   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SLTU  }:begin 
    $write("inst_SLTU  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_ADDI  }:begin 
    $write("inst_ADDI  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_XORI  }:begin 
    $write("inst_XORI  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end

{inst_ORI  }:begin 
    $write("inst_ORI  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_ANDI  }:begin 
    $write("inst_ANDI  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SLLI  }:begin 
    $write("inst_SLLI  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SRLI  }:begin 
    $write("inst_SRLI  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end

{inst_SRAI    }:begin 
    $write("inst_SRAI    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SLTI  }:begin 
    $write("inst_SLTI  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_SLTIU }:begin 
    $write("inst_SLTIU ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_LB    }:begin 
    $write("inst_LB    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end

{inst_LH    }:begin 
    $write("inst_LH    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_LW    }:begin 
    $write("inst_LW    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_LBU   }:begin 
    $write("inst_LBU   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
{inst_LHU   }:begin 
    $write("inst_LHU   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end

{inst_SB    }:begin
    $write("inst_SB    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_SH    }:begin
    $write("inst_SH    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_SW    }:begin
    $write("inst_SW    ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_BEQ   }:begin
    $write("inst_BEQ   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end

{inst_BNE   }:begin
    $write("inst_BNE   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_BLT   }:begin
    $write("inst_BLT   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_BGE   }:begin
    $write("inst_BGE   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_BLTU  }:begin
    $write("inst_BLTU  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end

{inst_BGEU  }:begin
    $write("inst_BGEU  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_JAL   }:begin
    $write("inst_JAL   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_JALR  }:begin
    $write("inst_JALR  ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_LUI   }:begin
    $write("inst_LUI   ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end

{inst_AUIPC }:begin
    $write("inst_AUIPC ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_ECALL }:begin
    $write("inst_ECALL ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_EBREAK}:begin
    $write("inst_EBREAK");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_FENCE }:begin
    $write("inst_FENCE ");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end

{inst_FENCEI}:begin
    $write("inst_FENCEI");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_CSRRW }:begin
    $write("inst_CSRRW");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_CSRRS }:begin
    $write("inst_CSRRS");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_CSRRC }:begin
    $write("inst_CSRRC");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end

{inst_CSRRWI}:begin
    $write("inst_CSRRWI");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_CSRRSI}:begin
    $write("inst_CSRRSI");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
{inst_CSRRCI}:begin
    $write("inst_CSRRCI");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

     end
default: begin 
    $write("not_encoded instruction");
    $write("rd_i_a %d rs1_a %d rs2_a %d  rs1_d %d rs2_d %d  result %d",rd_i,rs1_i,rs2_i,operand1_pi,operand2_pi,result);  $display(" imm_i %d", $signed(imm_i));

end
endcase
end




endmodule