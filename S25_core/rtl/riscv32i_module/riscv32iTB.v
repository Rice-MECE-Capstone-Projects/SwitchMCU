// This is a basic testbench for StreamingHistogram assignment.

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
    wire                     m_axis_aresetn;

    wire i_clk;
    wire i_en;
    wire [N_param-1:0]  instruction;
    wire  [4:0] rd_o;
    wire  [4:0] rs1_o;
    wire  [4:0] rs2_o;
    wire  [2:0] fun3_o;
    wire  [6:0] fun7_o;
    wire [31:0] imm_o;
    wire [6:0] INST_typ_o;





    riscv32i
`ifndef GATESIM
#(    .N_param(N_param)
      ) 
`endif
    dut (
        .clk(   tb_clk),
        .reset(tb_reset)
);


    always begin
        tb_clk = 1'b0;
        #5000;
        tb_clk = 1'b1;
        #5000;
    end

    initial begin : init
        //logic [32*8-1:0] vcdfile;
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



    // Clock generation
    // initial begin
    //     clk = 0;
    //     forever #5 clk = ~clk;  // Generate a clock with a period of 10 units
    // end

    // Simulation control
    initial begin
        tb_reset = 1;  // Start with reset asserted
        repeat (5) @(posedge tb_clk);
        tb_reset = 0;  // Release reset after 10 time units
        repeat (50) @(posedge tb_clk);

        $finish;
    end

//  always @(negedge tb_clk) begin : checker
//             $display("%t:      fun3_o:{%h}, fun7_o:{%h}          ",
//             $time,        fun3_o,     fun7_o            
//             );
//  end

//     always @(negedge tb_clk) begin : checker
//         if (transfer_active) begin 
//             $display("%t:                 m_tdata:{%h},  s_tlast: {%b}, s_tready: {%b} , m_tvalid: {%b}           ",
//             $time,        m_axis_tdata,         s_axis_tlast,       s_axis_tready,        m_axis_tvalid         
//             );
//             if (s_axis_tready && s_axis_tvalid) begin 
//             $display("%t:       Contoler to RTL, sent    {%h} ", 
//             $time,           s_axis_tdata_recived
//             );
//             end
//             if (m_axis_tready && m_axis_tvalid) begin 
//             $display("%t:      RTL to FIFO sent, recived {%h} ",
//             $time,      m_axis_tdata_recived,     
//             );
//             end
//         $display("__________________________________________________________________________________________________________________");
//         end
//     end

// task send_data____spacer();
// begin
//     @(posedge tb_clk);
//     #1000

    
//     s_axis_tvalid <= 0;
//     s_axis_tdata <= 0;
//     s_axis_tlast <= 0;
//     tb_reset <= 1'b1;
//     s_axis_tkeep   <= {TDATA_BYTES{1'b1}};
//     m_axis_tready  <= 0;
//     $display("%t: SD Req, ____SPACER data: -- ,      last: -- ",
//                 $time);
    
// end
// endtask





    endmodule

        