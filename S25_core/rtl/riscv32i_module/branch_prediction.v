module branch_prediction
(
	input wire clk,
	input wire [1:0] prediction_type,
	input wire actual_branch,
	output reg prediction
);

parameter STATIC = 2'b00;
parameter ONE_BIT = 2'b01;
parameter TWO_BIT = 2'b10;

parameter TAKEN = 1'b0;
parameter NOT_TAKEN = 1'b1;

reg old_branch;

always @(posedge clk) begin
	case(prediction_type)
		STATIC: prediction <= NOT_TAKEN;
		ONE_BIT: begin
			if (prediction != actual_branch)
				prediction <= !prediction;
		end
		TWO_BIT: begin
			if (old_branch == actual_branch && actual_branch != prediction) 
				prediction <= !prediction;
		end
		default: prediction <= prediction;
	endcase
	old_branch <= actual_branch;
end



endmodule
