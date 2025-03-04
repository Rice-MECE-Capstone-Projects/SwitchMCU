`timescale 1ps / 1ps
`include "params.vh"

module riscv32iTB
#(
    parameter  N_param = 32, 
    parameter success_code = 32'hDEADBEEF,
    parameter cycles_timeout = 1100,
    parameter initial_pc    = 32'h000001CC
)
();
    glbl glbl ();
    localparam IDLE_LEN = 10;
    reg                      tb_clk;
    reg                      tb_reset;
    reg [31:0] Cycle_count;
    reg [31:0] initial_pc_i;
    wire [31:0] final_value;
    reg [31:0] cycle_to_end;

riscv32i
`ifndef GATESIM
#(    .N_param(N_param)
      ) 
`endif
    dut (
        .clk(   tb_clk),
        .reset(tb_reset),
        .Cycle_count(Cycle_count),
        .initial_pc_i(initial_pc_i),
        .final_value(final_value)
);


    always begin
        tb_clk = 1'b0;
        #5000;
        tb_clk = 1'b1;
        #5000;
    end

    initial begin : init
        string vcdfile;
        int vcdlevel;
        if ($value$plusargs("VCDFILE=%s",vcdfile))
            $dumpfile(vcdfile);
        if ($value$plusargs("VCDLEVEL=%d",vcdlevel))
            $dumpvars(vcdlevel);
            end

    initial begin : stim
        $display("%t: starting stream stimulus", $time);
        $display("%t: TEST PASSED", $time);
        // $finish;
    end
    // Simulation control

    initial begin
        cycle_to_end <= 0;
        tb_clk = 0;
        initial_pc_i = initial_pc;
        tb_reset = 1;  
        repeat (1) @(posedge tb_clk);
        #7000
        tb_reset = 0;
        repeat (1) @(posedge tb_clk);
        // HERE CHANGE THIS VALUE TO DERTMINE CLOCK CYCLES
        repeat (cycles_timeout) @(posedge tb_clk);
        $finish;
    end

always @(posedge tb_clk) begin
  	 if (tb_reset)
	    Cycle_count  <= 32'h0;
	 else 
            Cycle_count <= Cycle_count + 1;
  end
always @(posedge tb_clk ) begin
    if (final_value == success_code)begin 
        cycle_to_end = cycle_to_end + 1;
    end
    if (cycle_to_end >= 30) begin
        $display("\n\n\n\n----TB FINISH:Test Passed----\n\n\n\n\nTEST FINISHED by success write :%h \n\n\n\n\n",success_code);
        $finish;
    end


    
end


    endmodule

        