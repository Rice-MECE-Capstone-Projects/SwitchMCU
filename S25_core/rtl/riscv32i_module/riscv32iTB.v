`timescale 1ps / 1ps
`include "params.vh"

module riscv32iTB
#(
    parameter   N_param = 32 
)
();
    glbl glbl ();
    localparam IDLE_LEN = 10;
    reg                      tb_clk;
    reg                      tb_reset;
    reg [31:0] Cycle_count;

riscv32i
`ifndef GATESIM
#(    .N_param(N_param)
      ) 
`endif
    dut (
        .clk(   tb_clk),
        .reset(tb_reset),
        .Cycle_count(Cycle_count)
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
        tb_reset = 1;  // Start with reset asserted
        repeat (1) @(posedge tb_clk);
        #7000
        tb_reset = 0;
        // HERE CHANGE THIS VALUE TO DERTMINE CLOCK CYCLES
        repeat (1150) @(posedge tb_clk);
        $finish;
    end

always @(posedge tb_clk) begin
  	 if (tb_reset)
	    Cycle_count  <= 32'h0;
	 else 
            Cycle_count <= Cycle_count + 1;
  end



    endmodule

        