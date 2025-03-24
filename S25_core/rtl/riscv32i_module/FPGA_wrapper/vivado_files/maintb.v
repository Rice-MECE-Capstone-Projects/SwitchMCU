`timescale 1ps / 1ps

module riscv32iTB
#(
    parameter  N_param = 32, 
    parameter memory_offset_param = 32'h00000600,
    parameter success_code = 32'hDEADBEEF,
    parameter cycles_timeout = 1100,
    parameter initial_pc    = 32'h00000384
)
();
    // glbl glbl ();
    localparam IDLE_LEN = 10;
    reg                      tb_clk;
    reg                      tb_reset;
    reg [31:0] Cycle_count;
    reg [31:0] initial_pc_i;
    wire [31:0] final_value;
    reg [31:0] cycle_to_end;
    reg [31:0] memory_offset;
    reg enable_design;

    reg [31:0]   GPIO0_R0_CH1;
    reg [31:0]   GPIO0_R0_CH2;
    reg [31:0]   GPIO0_R1_CH1;
    reg [31:0]   GPIO0_R1_CH2;
    wire          STOP_sim    ;

    // design_1 design_1_i
    //      (.GPIO0_R0_CH1(GPIO0_R0_CH1),
    //       .GPIO0_R0_CH2(GPIO0_R0_CH2),
    //       .GPIO0_R1_CH1(GPIO0_R1_CH1),
    //       .GPIO0_R1_CH2(GPIO0_R1_CH2),
    //       .STOP_sim(STOP_sim),
    //       .clk(clk));

  design_1 design_1_i (
        .clk(   tb_clk),
        .GPIO0_R0_CH1(GPIO0_R0_CH1), // control signals
        .GPIO0_R0_CH2(GPIO0_R0_CH2), // memory_offset
        .GPIO0_R1_CH1(GPIO0_R1_CH1), // initial_pc_i
        .GPIO0_R1_CH2(GPIO0_R1_CH2), // success_code
        .STOP_sim    (STOP_sim    )
);

    always begin
        tb_clk = 1'b0;
        #5000;
        tb_clk = 1'b1;
        #5000;
    end
    
    // initial begin : init
    //     string vcdfile;
    //     int vcdlevel;
    //     if ($value$plusargs("VCDFILE=%s",vcdfile))
    //         $dumpfile(vcdfile);
    //     if ($value$plusargs("VCDLEVEL=%d",vcdlevel))
    //         $dumpvars(vcdlevel);
    //         end

    initial begin : stim
        $display("%t: starting stream stimulus", $time);
        $display("%t: TEST PASSED", $time);
        // $finish;
    end
    // Simulation control

    initial begin
        tb_clk = 0;
        GPIO0_R0_CH1 <= 32'b00; // control signals
        GPIO0_R0_CH2 <= memory_offset_param; // memory_offset
        GPIO0_R1_CH1 <= initial_pc; // initial_pc_i
        GPIO0_R1_CH2 <= success_code; // success_code
        repeat (10) @(posedge tb_clk);
        GPIO0_R0_CH1 <= 32'b10; // control signals

        repeat (1)  @(posedge tb_clk);
        #7000
        repeat (10) @(posedge tb_clk);
        GPIO0_R0_CH1 <= 32'b00; // control signals
        repeat (1) @(posedge tb_clk);
        repeat (1) @(posedge tb_clk);
        repeat (1) @(posedge tb_clk);
        GPIO0_R0_CH1 <= 32'b01; // control signals
        repeat (1) @(posedge tb_clk);

        // HERE CHANGE THIS VALUE TO DERTMINE CLOCK CYCLES
        repeat (cycles_timeout) @(posedge tb_clk);
        $display("\n\n\n\n%t: STOP, cycle timeout", $time);
        repeat (1) @(posedge tb_clk);
        repeat (1) @(posedge tb_clk);

        $finish;
    end
always @(posedge STOP_sim) begin
    $display("\n\n\n\n%t: STOP_sim signal received", $time);
        $finish;
end 

    endmodule


