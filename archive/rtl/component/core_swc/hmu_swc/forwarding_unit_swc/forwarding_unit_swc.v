module forwarding_unit_swc(
    input [4:0] rs, rt,
    input [4:0] EX_WB_RegDst, MEM_WB_RegDst,
    input EX_WB_RegWrite, MEM_WB_RegWrite,
    output [1:0] forward_A, forward_B,
    output Stall
);
    
    // TODO: CHECK IF REGISTERS ARE ZERO
    // TODO: REPLACE 5'B0 WITH CORRECT ZERO REGISTER VALUE AND COUNT
	assign nonzero_EX_WB_RegDst = (EX_WB_RegDst != 5'b0)
	assign nonzero_MEM_WB_RegDst = (MEM_WB_RegDst != 5'b0)

    // Check if the destination register of the EX/MEM or MEM/WB pipeline registers is the same as the source register of the current instruction
	assign hazard_RS_EX_WB_RegDst = (EX_WB_RegDst == rs)
	assign hazard_RS_MEM_WB_RegDst = (MEM_WB_RegDst == rs)
	assign hazard_RT_EX_WB_RegDst = (EX_WB_RegDst == rt)
	assign hazard_RT_MEM_WB_RegDst = (MEM_WB_RegDst == rt)
	
	// Forward A
	always @(*) begin
	forward_A = 2'b00;
		casez ({EX_WB_RegWrite, nonzero_EX_WB_RegDst, hazard_RS_EX_WB_RegDst, 
	MEM_WB_RegWrite, nonzero_MEM_WB_RegDst, hazard_RS_MEM_WB_RegDst})
		6'b1_1_1_X_X_X: forward_A = 2'b10;
		6'b0_X_0_1_1_1: forward_A = 2'b01;
		6'b0_0_0_0_0_0: forward_A = 2'b00;
		endcase
	end
	
	// Forward B
	always @(*) begin
	forward_B = 2'b00;
		casez ({EX_WB_RegWrite, nonzero_EX_WB_RegDst, hazard_RT_EX_WB_RegDst, 
	MEM_WB_RegWrite, nonzero_MEM_WB_RegDst, hazard_RT_MEM_WB_RegDst})
		6'b1_1_1_X_X_X: forward_B = 2'b10;
		6'b0_X_0_1_1_1: forward_B = 2'b01;
		6'b0_0_0_0_0_0: forward_B = 2'b00;
		endcase
	end
	
    assign Stall = (forward_A == 2'b01) | (forward_B == 2'b01);
	
endmodule