`timescale 1ps / 1ps
`include "params.vh"

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
    reg [31:0] Cycle_count;

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
        .loadData_w(loadData_w),
        .stall_mem_not_avalible(stall_mem_not_avalible),
        .load_into_reg(load_into_reg),
        .Cycle_count(Cycle_count)
    );
        // wire [31:0] Cycle_count;
        wire stall_mem_not_avalible, load_into_reg;

    // Clock generation
    always #5000 clk = ~clk; // 100 MHz clock

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
        store_operation(inst_SB, 32'h00000004, 32'hAA);
        store_operation(inst_SB, 32'h00000008, 32'hAA);
        store_operation(inst_SB, 32'h0000000C, 32'hAA);
        load_operation(inst_LH,  32'h00000004);

//         // Test LB (Load Byte)
//         Single_Instruction = inst_LB;
//         address = 32'h00000004; // Address of the 2nd word, byte 0
//         repeat (1) @(posedge clk);
//         $display("LB: Address=0x%h, LoadData=0x%h", address, loadData_w);

//         // Test LH (Load Halfword)
//         repeat (1) @(posedge clk);

//         Single_Instruction = inst_LH;
//         address = 32'h00000006*4; // Address of the 2nd word, halfword 1
//         repeat (1) @(posedge clk);
//         $display("LH: Address=0x%h, LoadData=0x%h", address, loadData_w);

//         Single_Instruction = inst_LW;
//         address = 32'h00000008; // Address of the 3rd word
//         repeat (1) @(posedge clk); 
//         $display("LW: Address=0x%h, LoadData=0x%h", address, loadData_w);

//         // Test LBU (Load Byte Unsigned)
        
// repeat (1) @(posedge clk);
// Single_Instruction = inst_LBU;
//         address = 32'h00000004; // Address of the 2nd word, byte 0
        
// repeat (1) @(posedge clk);
// $display("LBU: Address=0x%h, LoadData=0x%h", address, loadData_w);

//         // Test LHU (Load Halfword Unsigned)
        
// repeat (1) @(posedge clk);
// Single_Instruction = inst_LHU;
//         address = 32'h00000006; // Address of the 2nd word, halfword 1
        
// repeat (1) @(posedge clk);
// $display("LHU: Address=0x%h, LoadData=0x%h", address, loadData_w);

//         // Test SB (Store Byte)
        
// repeat (1) @(posedge clk);
// Single_Instruction = inst_SB;
//         address = 32'h00000004; // Address of the 2nd word, byte 0
//         storeData = 32'hAA; // Store byte value
        
// repeat (1) @(posedge clk);
// $display("SB: Address=0x%h, StoredData=0x%h", address, storeData);

//         // Test SH (Store Halfword)
        
// repeat (1) @(posedge clk);
// Single_Instruction = inst_SH;
//         address = 32'h00000006; // Address of the 2nd word, halfword 1
//         storeData = 32'hBBCC; // Store halfword value
        
// repeat (1) @(posedge clk);
// $display("SH: Address=0x%h, StoredData=0x%h", address, storeData);

//         // Test SW (Store Word)
        
// repeat (1) @(posedge clk);

//         Single_Instruction = inst_SW;
//         address = 32'h00000008; // Address of the 3rd word
//         storeData = 32'hDEADBEEF; // Store word value
//         repeat (1) @(posedge clk);
        
//         $display("SW: Address=0x%h, StoredData=0x%h", address, storeData);

//         // Finish simulation
        
        repeat (1) @(posedge clk);
        // $writememh("memory_dump.hex", dut.DMEM);

        $finish;
    end

    task store_operation;
        input [63:0] instruction;
        input [31:0] addr;
        input [31:0] data;
        begin
            Single_Instruction = instruction;
            address = addr;
            storeData = data;
                @(posedge clk);
            #30

            $display("STORE: Instruction=0x%h, Address=0x%h, StoredData=0x%h", instruction, addr, data);
        end
    endtask

    // Load operation task
    task load_operation;
        input [63:0] instruction;
        input [31:0] addr;
        begin
            Single_Instruction = instruction;
            address = addr;
             @(posedge clk);
            #30
            $display("LOAD: Instruction=0x%h, Address=0x%h, LoadData=0x%h", instruction, addr, loadData_w);
        end
    endtask
always @(posedge         clk) begin
        #1
        if (Cycle_count > 0) begin 
    $display("\n----------------------------------------------------------------------------------START\n");

                $display("Cycle: %d",Cycle_count);// Instruction: %h, Address: %h, LoadData: %h", Cycle_count, Single_Instruction, address, loadData_w);
        end
// 242 198
end
always @(posedge clk) begin
  	 if (reset)
	    Cycle_count  <= 32'h0;
	 else 
            Cycle_count <= Cycle_count + 1;
  end



endmodule

