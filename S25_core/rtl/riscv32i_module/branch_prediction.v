module branch_prediction
(
	input wire predict_trigger,
	input wire clk,
	input wire [1:0] prediction_type,
	input wire actual_branch_trigger,
	input wire curr_branch,
	input wire [31:0] imm,
	input wire [31:0] pc,
	output wire [31:0] pc_o,
	input wire reset,
	output wire prediction,
	output reg predict_trigger_prev
);

parameter STATIC = 2'b00;
parameter ONE_BIT = 2'b01;
parameter TWO_BIT = 2'b10;

parameter TAKEN = 1'b1;
parameter NOT_TAKEN = 1'b0;

reg old_branch;
// reg [31:0] instruction_mid;
// reg [31:0] pc_mid;
reg [31:0] pc_temp;
reg [31:0] pc_x;
reg prev_prediction;
reg temp_prev_prediction;
//reg predict_trigger_prev;
reg temp_predict_trigger_prev;
reg actual_branch;
reg temp_prediction;



// Predict whether or not we will branch
always @(posedge clk) begin
	pc_temp <= pc;
	if(actual_branch_trigger) begin
		actual_branch <= curr_branch;
	end
	if(reset) begin
		temp_prediction <= NOT_TAKEN;
		prev_prediction <= NOT_TAKEN;
		predict_trigger_prev <= 0;
		actual_branch <= 0;
	end
	else if (predict_trigger & !predict_trigger_prev) begin
		case(prediction_type)
			STATIC: begin
				temp_prediction <= TAKEN;
				prev_prediction <= TAKEN;
			end
			ONE_BIT: begin
				if (prev_prediction != actual_branch) begin
					temp_prediction <= !prev_prediction;
					prev_prediction <= !prev_prediction;
				end
				else begin
					temp_prediction <= prev_prediction;
				end
			end
			TWO_BIT: begin
				if (old_branch == actual_branch && actual_branch != prev_prediction) begin
					temp_prediction <= !prev_prediction;
					prev_prediction <= !prev_prediction;
				end
				else begin
					temp_prediction <= prev_prediction;
				end
			end
			default: temp_prediction <= prev_prediction;
		endcase
		old_branch <= actual_branch;
		predict_trigger_prev <= predict_trigger;
	end
	else begin
		predict_trigger_prev <= 0;
		//temp_prediction <= NOT_TAKEN;
	end
	
end

// ins_mem ins_mem(
// 	.clk(clk),
// 	.reset(reset),
// 	.pc_i(pc),
// 	.pc_o(pc_x),
// 	.instruction_o(instruction_o)
// );


always @(negedge clk) begin
	#110
	if (actual_branch_trigger) begin $write("\n Actual Branch value updated to %0d", curr_branch); end
	if (prediction) begin $write("\n branching to %8h based on imm %8h and pc %8h", pc_temp + imm -4, imm, pc_temp); end
end
assign prediction = (predict_trigger) ? temp_prediction : NOT_TAKEN;
//assign prediction = (predict_trigger & !predict_trigger_prev) ? temp_prediction : NOT_TAKEN;
assign pc_o = (prediction== TAKEN & !predict_trigger_prev) ? pc_temp + imm: (prediction == TAKEN) ? (pc_temp + imm -4): pc_temp;
//assign pc_o = (prediction== TAKEN) ? pc_temp + imm: pc_temp;


endmodule