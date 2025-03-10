module debug # (
    parameter Param_delay = 1,
    parameter regCount    = 1,
    parameter pc_en       = 0
    ) (
input wire           i_clk,
input wire [ 31:0]    pc_o,
input wire [ 31:0]    Cycle_count,
input wire [511:0] pipeReg
);


// pipeReg[`PC_reg             ]
// pipeReg[`instruct           ]
// pipeReg[`alu_res1           ]
// pipeReg[`load_reg           ]
// pipeReg[`jump_en            ]
// pipeReg[`branch_en          ]
// pipeReg[`reg_write_en       ]
// pipeReg[`LD_ready           ]
// pipeReg[`SD_ready           ]
// pipeReg[`rd                 ]
// pipeReg[`operand_amt        ]
// pipeReg[`opRs1_reg          ]
// pipeReg[`opRs2_reg          ]
// pipeReg[`op1_reg            ]
// pipeReg[`op2_reg            ]
// pipeReg[`immediate          ]
// pipeReg[`alu_res2           ]
// pipeReg[`rd_data            ]
// pipeReg[`Single_Instruction ]
// pipeReg[`data_mem_loaded    ]
 

always @(negedge i_clk) begin 
# Param_delay

if (pc_en == 1) begin 
    $write("\n\n----------------------------------------------------------------------------------START\n ");
    // $write("\npc_o  %10h, Cycle_count %d",pc_o,Cycle_count);
    $write("\nCycle_count %5d,\n        pc_o  %8h,",Cycle_count,pc_o);
end
// if (regCount == 3 )begin
//     $write("\n----------------------------------------------------------------------------------\n ");
// end

    $write("\nPipeReg%0d  PC: %h: I:{%h}    ",regCount,pipeReg[`PC_reg             ],  pipeReg[`instruct           ]   );

case(pipeReg[`Single_Instruction ]) 

{`inst_UNKNOWN   }:begin 
    $write("inst_UNKOWN ");
    // $write("inst_AUIPC  ");
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
    $write("inst_SLTIU  ");

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
    $write("inst_ECALL  ");

     end
{`inst_EBREAK}:begin 
    $write("inst_EBREAK ");

     end
{`inst_FENCE }:begin 
    $write("inst_FENCE  ");

     end

{`inst_FENCEI}:begin 
    $write("inst_FENCEI ");

     end
{`inst_CSRRW }:begin 
    $write("inst_CSRRW ");

     end
{`inst_CSRRS }:begin 
    $write("inst_CSRRS ");

     end
{`inst_CSRRC }:begin 
    $write("inst_CSRRC ");

     end

{`inst_CSRRWI}:begin 
    $write("inst_CSRRWI ");

     end
{`inst_CSRRSI}:begin 
    $write("inst_CSRRSI ");

     end
{`inst_CSRRCI}:begin 
    $write("inst_CSRRCI ");

     end
default: begin 
    $write("not_encoded  ");

end
endcase

    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %8h rs2_d %8h  result {%4h}",
    pipeReg[`rd],pipeReg[`opRs1_reg],pipeReg[`opRs2_reg],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $write(" imm_i %8h", $signed(pipeReg[`immediate          ]));
    $write(" branch_en  %4d, ",  pipeReg[`branch_en          ]);
    $write(" reg_write  %4d, ",  pipeReg[`reg_write_en       ]);
    // $write(" LD_ready   %4d, ",  pipeReg[`LD_ready           ]);
    // $write(" SD_ready   %4d, ",  pipeReg[`SD_ready           ]);
    $write(" operand_a  %4d, ",  pipeReg[`operand_amt        ]);
    $write(" alu_res2   %4d, ",  pipeReg[`alu_res2           ]);
    $write(" rd_data    %4d, ",  pipeReg[`rd_data            ]);
    $write(" data_mem_  %4d, ",  pipeReg[`data_mem_loaded    ]);



end

endmodule   

// pipeReg[`branch_en          ]
// pipeReg[`reg_write_en       ]
// pipeReg[`LD_ready           ]
// pipeReg[`SD_ready           ]
// pipeReg[`operand_amt        ]
// pipeReg[`alu_res2           ]
// pipeReg[`rd_data            ]
// pipeReg[`data_mem_loaded    ]












