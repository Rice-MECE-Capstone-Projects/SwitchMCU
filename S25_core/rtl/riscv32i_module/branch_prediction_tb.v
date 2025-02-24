module branch_prediction_tb;
    reg predict_trigger         ;
    reg clk                     ;
    reg [1:0] prediction_type   ;
    reg actual_branch           ;
    wire [31:0] imm              ;
    wire [31:0] pc               ;
    reg [31:0] temp_imm;
    reg [31:0] temp_pc;
    reg reset                   ;
    reg prediction              ;
    // reg [31:0] instruction_i    ;
    // wire prediction             ;
    // // wire [31:0] pc_o            ;
    // wire [31:0] instruction_o   ;


    branch_prediction branch_inst(
        .predict_trigger (predict_trigger),
        .clk    (clk),
        .prediction_type (prediction_type),
        .actual_branch (actual_branch),
        .imm (imm),
        .pc (pc),
        .reset (reset),
        .prediction (prediction)
        // .instruction_i (instruction_i),
        // .prediction (prediction),
        // // .pc_o (pc_o),
        // .instruction_o (instruction_o)
    );

    always #5 clk = !clk;
    always #10 predict_trigger = !predict_trigger;
    assign pc = temp_pc;
    assign imm = temp_imm;

    initial begin
        clk = 1'b1;
        predict_trigger = 1'b0;
        prediction_type = 2'b00; // Testing STATIC
        temp_pc = 32'h3F8;
        temp_imm = 32'h001;
        // instruction_i = 32'h003;
        actual_branch = 1;
        #15;
        actual_branch = 0;
        #15;
        prediction_type = 2'b01; // Testing ONE_BIT
        #20;
        actual_branch = 1;
        #10;
        actual_branch = 0;
        #5;
        actual_branch = 1;
        #20;
        prediction_type = 2'b10; // Testing TWO_BIT
        #20;
        actual_branch = 1;
        #50;
        actual_branch = 0;
        #10;
        actual_branch = 1;
        #20;
        actual_branch = 0;
        #50;
        
        $finish;
    end

    initial begin
        $dumpfile("branch_prediction_tb.vcd");
        $dumpvars(0, branch_prediction_tb);
    end

endmodule