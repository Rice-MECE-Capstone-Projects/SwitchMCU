module branch_prediction_tb;
    reg predict_trigger         ;
    reg clk                     ;
    reg [1:0] prediction_type   ;
    reg actual_branch_trigger   ;
    wire curr_branch;
    reg curr_branch_temp;
    wire [31:0] imm              ;
    wire [31:0] pc               ;
    wire [31:0] pc_o;
    reg [31:0] temp_imm;
    reg [31:0] temp_pc_o;
    reg [31:0] temp_pc;
    reg reset                   ;
    reg prediction              ;
    reg [31:0] instruction_o   ;


    branch_prediction branch_inst(
        .predict_trigger (predict_trigger),
        .clk    (clk),
        .prediction_type (prediction_type),
        .actual_branch_trigger (actual_branch_trigger),
        .curr_branch (curr_branch),
        .imm (imm),
        .pc (pc),
        .pc_o (pc_o),
        .reset (reset),
        .prediction (prediction),
        .instruction_o (instruction_o)
    );

    always #5 clk = !clk;
    always #10 predict_trigger = !predict_trigger;
    always #10 actual_branch_trigger = !actual_branch_trigger;
    assign pc = temp_pc;
    assign imm = temp_imm;
    assign curr_branch = curr_branch_temp;

    initial begin
        clk = 1'b1;
        predict_trigger = 1'b0;
        prediction_type = 2'b00; // Testing STATIC
        temp_pc = 32'h3F8;
        temp_imm = 32'h001;
        curr_branch_temp = 1;
        #15;
        predict_trigger = 1'b1;
        #15;
        curr_branch_temp = 0;
        #15;
        prediction_type = 2'b01; // Testing ONE_BIT
        #20;
        curr_branch_temp = 1;
        #10;
        curr_branch_temp = 0;
        #5;
        #20;
        prediction_type = 2'b10; // Testing TWO_BIT
        #20;
        curr_branch_temp = 1;
        #50;
        #10;
        curr_branch_temp = 0;
        #20;
        #50;
        
        $finish;
    end

    initial begin
        $dumpfile("branch_prediction_tb.vcd");
        $dumpvars(0, branch_prediction_tb);
    end

endmodule