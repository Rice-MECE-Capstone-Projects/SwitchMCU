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

// Different methods of branch prediction
parameter STATIC = 2'b00;
parameter ONE_BIT = 2'b01;
parameter TWO_BIT = 2'b10;

// Taken is high, not taken is low
parameter TAKEN = 1'b1;
parameter NOT_TAKEN = 1'b0;

// Declare internal registers
reg old_branch;
reg [31:0] pc_temp;
reg [31:0] pc_x;
reg actual_branch;
reg temp_prediction;
reg [31:0] pc_o_prev;

integer total_preds;
integer false_preds;
reg false_preds_update_trigger;


// Update values on posedge of clock
always @(posedge clk) begin
	pc_temp <= pc;
	if(actual_branch_trigger) begin // update our internal value for the result of the prev branch when triggered
		actual_branch <= curr_branch;
		if(curr_branch != temp_prediction) begin
			false_preds = false_preds + 1;
		end
	end
	if(reset) begin // On reset set all values to 0
		temp_prediction <= TAKEN;
		predict_trigger_prev <= 0;
		actual_branch <= 0;
		pc_o_prev <= 0;
		total_preds <= 0;
		false_preds <= 0;
		false_preds_update_trigger <= 0;
	end
	if (predict_trigger) begin 
		predict_trigger_prev <= 1; // let us know if predict trigger has been running for multiple cycles
		pc_o_prev <= pc_o; // update pc_o_prev so we do not continue to increment pc_o if predict is held
	end else begin
		predict_trigger_prev <= 0;
	end 
end

always @(posedge predict_trigger) begin
	if(!predict_trigger_prev) begin // only do this for the first cycle that predict_trigger is active
		case(prediction_type)
			STATIC: begin // for static prediction, always predict taken
				temp_prediction <= TAKEN;
			end
			ONE_BIT: begin // for one bit prediction, change prediction if incorrect 1 time
				if (temp_prediction != actual_branch) begin
					temp_prediction <= !temp_prediction;
				end
				else begin
					temp_prediction <= temp_prediction;
				end
			end
			TWO_BIT: begin // for two bit prediction, change prediction if incorrect twice in a row
				if (old_branch == actual_branch && actual_branch != temp_prediction) begin
					temp_prediction <= !temp_prediction;
				end
				else begin
					temp_prediction <= temp_prediction;
				end
			end
			default: temp_prediction <= temp_prediction;
		endcase
		old_branch <= actual_branch; // update the old branch value
		total_preds <= total_preds + 1;
	end
end

// always @(negedge predict_trigger_prev) begin

// end


always @(negedge clk) begin
	#110
	if (actual_branch_trigger) begin $write("\n Actual Branch value updated to %0d", curr_branch); end
	if (prediction) begin $write("\n branching to %8h based on imm %8h and pc %8h", pc_temp + imm -4, imm, pc_temp); end
	// this only prints when false is updated, so total may not be accurate
	if (actual_branch_trigger) begin $write("\n Branch prediction accuracy: %8d false out of %8d total", false_preds + (curr_branch != temp_prediction), total_preds); end
end
assign prediction = (predict_trigger) ? temp_prediction : NOT_TAKEN;
//assign pc_o = (prediction== TAKEN & !predict_trigger_prev) ? pc_temp + imm: (prediction == TAKEN) ? (pc_temp + imm -4): pc_temp;
assign pc_o = (prediction== TAKEN & !predict_trigger_prev) ? pc_temp + imm: (prediction == TAKEN) ? pc_o_prev : pc_temp;


endmodule