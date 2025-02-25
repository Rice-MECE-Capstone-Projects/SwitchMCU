module pc(
input wire clk_i,
input wire reset_i,
input wire stage_IF_ready,
input wire jump_inst_wire, 
input wire branch_inst_wire, 
input wire [31:0] targetPC_i,
output wire[31:0] pc_o
);

reg  [31:0] PC;
wire [31:0] nextPC;
wire change_PC_condition_for_jump_or_branch;
assign change_PC_condition_for_jump_or_branch = jump_inst_wire | branch_inst_wire;
assign nextPC = change_PC_condition_for_jump_or_branch ?  targetPC_i  : PC + 4;

assign pc_o = PC;

always @(posedge clk_i) begin
//     $display("Time: %3d\thalt: %d\tisTakenBranch: %d\tnextPC: %d\tpc_po: %d",$time, halt_pi, isTakenBranch_pi, PC, pc_po);
  	 if (reset_i)
	    PC  <= 32'h150;
      //Starting memory address, this logic must be changed later
	 else 
 	    if (stage_IF_ready)  begin
            PC <= nextPC;
		end 
  end


//MARKER AUTOMATED HERE START

always @(negedge clk_i) begin
	#30
	if (jump_inst_wire)    begin $write("\nPC_module: JUMP!   Next cycle, New PC: %8h, Destroyed PC %8h", targetPC_i,PC + 4);end
	if (branch_inst_wire ) begin $write("\nPC_module: BRANCH! Next cycle, New PC: %8h, Destroyed PC %8h", targetPC_i,PC + 4);end

end

//MARKER AUTOMATED HERE END


   
endmodule
