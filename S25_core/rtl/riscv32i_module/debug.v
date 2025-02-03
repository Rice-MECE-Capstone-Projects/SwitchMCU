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
    $write("\npc_o  %10h, Cycle_count %d",pc_o,Cycle_count);
end
// if (regCount == 3 )begin
//     $write("\n----------------------------------------------------------------------------------\n ");
// end


case(pipeReg[`Single_Instruction ])

{inst_UNKNOWN   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_UNKOWN ");
    // $write("inst_AUIPC  ");

    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));


end
{inst_ADD   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_ADD    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SUB   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SUB    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_XOR   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_XOR    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_OR    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_OR     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end

{inst_AND    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_AND     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SLL   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SLL    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SRL   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SRL    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SRA   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SRA    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end

{inst_SLT   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SLT    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SLTU  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SLTU   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_ADDI  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_ADDI   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_XORI  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_XORI   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end

{inst_ORI  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_ORI   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_ANDI  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_ANDI   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SLLI  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SLLI   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SRLI  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SRLI   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end

{inst_SRAI    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SRAI     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SLTI  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SLTI   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_SLTIU }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SLTIU  ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_LB    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_LB     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end

{inst_LH    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_LH     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_LW    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_LW     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_LBU   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_LBU    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
{inst_LHU   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_LHU    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end

{inst_SB    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SB     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_SH    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SH     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_SW    }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_SW     ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_BEQ   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_BEQ    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end

{inst_BNE   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_BNE    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_BLT   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_BLT    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_BGE   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_BGE    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_BLTU  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_BLTU   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end

{inst_BGEU  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_BGEU   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_JAL   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_JAL    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_JALR  }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_JALR   ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_LUI   }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_LUI    ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end

{inst_AUIPC }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_AUIPC  ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_ECALL }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_ECALL  ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_EBREAK}:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_EBREAK ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_FENCE }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_FENCE  ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end

{inst_FENCEI}:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_FENCEI ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_CSRRW }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_CSRRW ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_CSRRS }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_CSRRS ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_CSRRC }:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_CSRRC ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end

{inst_CSRRWI}:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_CSRRWI ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_CSRRSI}:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_CSRRSI ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
{inst_CSRRCI}:begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("inst_CSRRCI ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

     end
default: begin 
    $write("\nPipeReg%d  PC: %h: E:%b I:{%h}    ",regCount,pipeReg[`PC_reg             ],~ (|pipeReg[`Single_Instruction ]),  pipeReg[`instruct           ]   );
    $write("not_encoded  ");
    $write("rd_i_a %4d rs1_a %4d rs2_a %4d  rs1_d %10d rs2_d %10d  result %10d",pipeReg[`rd                 ],pipeReg[`opRs1_reg          ],pipeReg[`opRs2_reg          ],pipeReg[`op1_reg],pipeReg[`op2_reg],pipeReg[`alu_res1]);  $display(" imm_i %d", $signed(pipeReg[`immediate          ]));

end
endcase

// if (regCount == 3 )begin
//     $write("\n----------------------------------------------------------------------------------\n ");
// end


end

endmodule   