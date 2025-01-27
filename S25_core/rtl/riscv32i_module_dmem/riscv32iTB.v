// This is a basic testbench for StreamingHistogram assignment.

`timescale 1ps / 1ps
`include "params.vh"

// module riscv32iTB
// #(
//     parameter   N_param = 32 
// )
// ();
//     glbl glbl ();
//     localparam IDLE_LEN = 10;

//     reg                      tb_clk;
//     reg                      tb_reset;
//     wire                     m_axis_aresetn;

//     wire i_clk;
//     wire i_en;
//     wire [N_param-1:0]  instruction;
//     wire  [4:0] rd_o;
//     wire  [4:0] rs1_o;
//     wire  [4:0] rs2_o;
//     wire  [2:0] fun3_o;
//     wire  [6:0] fun7_o;
//     wire [31:0] imm_o;
//     wire [6:0] INST_typ_o;





//     riscv32i
// `ifndef GATESIM
// #(    .N_param(N_param)
//       ) 
// `endif
//     dut (
//         .clk(   tb_clk),
//         .reset(tb_reset)
// );


//     always begin
//         tb_clk = 1'b0;
//         #5000;
//         tb_clk = 1'b1;
//         #5000;
//     end

//     initial begin : init
//         //logic [32*8-1:0] vcdfile;
//         string vcdfile;
//         int vcdlevel;
//         if ($value$plusargs("VCDFILE=%s",vcdfile))
//             $dumpfile(vcdfile);
//         if ($value$plusargs("VCDLEVEL=%d",vcdlevel))
//             $dumpvars(vcdlevel);
//             end


//     initial begin : stim
//         $display("%t: starting stream stimulus", $time);
//         $display("%t: TEST PASSED", $time);
//         // $finish;
//     end



//     // Clock generation
//     // initial begin
//     //     clk = 0;
//     //     forever #5 clk = ~clk;  // Generate a clock with a period of 10 units
//     // end

//     // Simulation control
//     initial begin
//         tb_reset = 1;  // Start with reset asserted
//         repeat (5) @(posedge tb_clk);
//         tb_reset = 0;  // Release reset after 10 time units
//         repeat (50) @(posedge tb_clk);

//         $finish;
//     end

// //  always @(negedge tb_clk) begin : checker
// //             $display("%t:      fun3_o:{%h}, fun7_o:{%h}          ",
// //             $time,        fun3_o,     fun7_o            
// //             );
// //  end

// //     always @(negedge tb_clk) begin : checker
// //         if (transfer_active) begin 
// //             $display("%t:                 m_tdata:{%h},  s_tlast: {%b}, s_tready: {%b} , m_tvalid: {%b}           ",
// //             $time,        m_axis_tdata,         s_axis_tlast,       s_axis_tready,        m_axis_tvalid         
// //             );
// //             if (s_axis_tready && s_axis_tvalid) begin 
// //             $display("%t:       Contoler to RTL, sent    {%h} ", 
// //             $time,           s_axis_tdata_recived
// //             );
// //             end
// //             if (m_axis_tready && m_axis_tvalid) begin 
// //             $display("%t:      RTL to FIFO sent, recived {%h} ",
// //             $time,      m_axis_tdata_recived,     
// //             );
// //             end
// //         $display("__________________________________________________________________________________________________________________");
// //         end
// //     end

// // task send_data____spacer();
// // begin
// //     @(posedge tb_clk);
// //     #1000

    
// //     s_axis_tvalid <= 0;
// //     s_axis_tdata <= 0;
// //     s_axis_tlast <= 0;
// //     tb_reset <= 1'b1;
// //     s_axis_tkeep   <= {TDATA_BYTES{1'b1}};
// //     m_axis_tready  <= 0;
// //     $display("%t: SD Req, ____SPACER data: -- ,      last: -- ",
// //                 $time);
    
// // end
// // endtask





//     endmodule

    

`timescale 1ns/1ps

module riscv32iTB//;
#(
    parameter   N_param = 32 
)
();
    glbl glbl ();
    // Parameters
    parameter mem_size = 4096;

    // Testbench signals
    reg clk;
    reg reset;
    reg [63:0] Single_Instruction;
    reg [31:0] address;
    reg [31:0] storeData;
    wire [31:0] loadData_w;

    // // Instruction definitions (encoded as example opcodes)
    // localparam [63:0] inst_LB  = 64'b00000000000000000000000000000001; // Example opcode for LB
    // localparam [63:0] inst_LH  = 64'b00000000000000000000000000000010; // Example opcode for LH
    // localparam [63:0] inst_LW  = 64'b00000000000000000000000000000100; // Example opcode for LW
    // localparam [63:0] inst_LBU = 64'b00000000000000000000000000001000; // Example opcode for LBU
    // localparam [63:0] inst_LHU = 64'b00000000000000000000000000010000; // Example opcode for LHU
    // localparam [63:0] inst_SB  = 64'b00000000000000000000000000100000; // Example opcode for SB
    // localparam [63:0] inst_SH  = 64'b00000000000000000000000001000000; // Example opcode for SH
    // localparam [63:0] inst_SW  = 64'b00000000000000000000000010000000; // Example opcode for SW

    // DUT instantiation

//     riscv32i
// `ifndef GATESIM
// #(    .N_param(N_param)
//       ) 
// `endif
//     dut (
//         .clk(   tb_clk),
//         .reset(tb_reset)
// );


dataMem
`ifndef GATESIM
#(    .mem_size(mem_size)
      ) 
`endif
    dut (
    // dataMem #(mem_size) dut (
        .clk(clk),
        .reset(reset),
        .Single_Instruction(Single_Instruction),
        .address(address),
        .storeData(storeData),
        .loadData_w(loadData_w)
    );

    // Clock generation
    always #5 clk = ~clk; // 100 MHz clock

    // Test procedure
    initial begin
        // Initialize signals
        clk = 0;
        reset = 1;
        Single_Instruction = 0;
        address = 0;
        storeData = 0;

        // Reset the DUT
        repeat (2) @(posedge clk);
        reset = 0;
        repeat (1) @(posedge clk);

        // Test LB (Load Byte)
        Single_Instruction = inst_LB;
        address = 32'h00000004; // Address of the 2nd word, byte 0
        repeat (1) @(posedge clk);
        $display("LB: Address=0x%h, LoadData=0x%h", address, loadData_w);

        // Test LH (Load Halfword)
        repeat (1) @(posedge clk);

        Single_Instruction = inst_LH;
        address = 32'h00000006*4; // Address of the 2nd word, halfword 1
        repeat (1) @(posedge clk);
        $display("LH: Address=0x%h, LoadData=0x%h", address, loadData_w);

        Single_Instruction = inst_LW;
        address = 32'h00000008; // Address of the 3rd word
        repeat (1) @(posedge clk); 
        $display("LW: Address=0x%h, LoadData=0x%h", address, loadData_w);

        // Test LBU (Load Byte Unsigned)
        
repeat (1) @(posedge clk);
Single_Instruction = inst_LBU;
        address = 32'h00000004; // Address of the 2nd word, byte 0
        
repeat (1) @(posedge clk);
$display("LBU: Address=0x%h, LoadData=0x%h", address, loadData_w);

        // Test LHU (Load Halfword Unsigned)
        
repeat (1) @(posedge clk);
Single_Instruction = inst_LHU;
        address = 32'h00000006; // Address of the 2nd word, halfword 1
        
repeat (1) @(posedge clk);
$display("LHU: Address=0x%h, LoadData=0x%h", address, loadData_w);

        // Test SB (Store Byte)
        
repeat (1) @(posedge clk);
Single_Instruction = inst_SB;
        address = 32'h00000004; // Address of the 2nd word, byte 0
        storeData = 32'hAA; // Store byte value
        
repeat (1) @(posedge clk);
$display("SB: Address=0x%h, StoredData=0x%h", address, storeData);

        // Test SH (Store Halfword)
        
repeat (1) @(posedge clk);
Single_Instruction = inst_SH;
        address = 32'h00000006; // Address of the 2nd word, halfword 1
        storeData = 32'hBBCC; // Store halfword value
        
repeat (1) @(posedge clk);
$display("SH: Address=0x%h, StoredData=0x%h", address, storeData);

        // Test SW (Store Word)
        
repeat (1) @(posedge clk);

        Single_Instruction = inst_SW;
        address = 32'h00000008; // Address of the 3rd word
        storeData = 32'hDEADBEEF; // Store word value
        repeat (1) @(posedge clk);
        
        $display("SW: Address=0x%h, StoredData=0x%h", address, storeData);

        // Finish simulation
        
        repeat (1) @(posedge clk);
        $writememh("memory_dump.hex", dut.DMEM);

        $finish;
    end
endmodule

