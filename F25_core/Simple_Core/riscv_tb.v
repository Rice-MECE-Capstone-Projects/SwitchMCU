`include "params.vh"

module riscv_tb;

    // Testbench ????
    reg clk;
    reg reset_sim;
    
    // ???? riscv32i ?????
    wire [1:0] sw_sim;
    wire [3:0] led_sim;
    
    // **FIX: ?? dbg_pc_sim ? dbg_alu_sim wires,???????????????**
    // wire [31:0] dbg_pc_sim; 
    // wire [31:0] dbg_alu_sim; 

    // 1. ???? (10ns ??,100 MHz)
    initial begin
        clk = 0;
        forever #5 clk = ~clk; 
    end

    // 2. ???? (??? riscv32i ? sw[0])
    assign sw_sim[0] = reset_sim;
    // sw[0] = reset
    assign sw_sim[1] = 1'b0;
    // sw[1] ??

    initial begin
        reset_sim = 1;
        #20;
        // ???? 20ns (2?????)
        reset_sim = 0;
    end

    // ?????????
    riscv32i core (
        .sysclk(clk),         // ?? testbench clk ? riscv32i ? sysclk
        .sw(sw_sim),          // ?? sw ??
        .led(led_sim)         // ?? LED ??
        // **FIX: ?? dbg_pc ? dbg_alu ?????**
        // .dbg_pc(dbg_pc_sim), 
        // .dbg_alu(dbg_alu_sim) 
    ); 

    // 3. ?????
    initial begin
        // ??????
        $dumpfile("riscv_core.vcd");
        $dumpvars(0, riscv_tb);
        
        // ??????? Console
        // **FIX: ???????????**
        $monitor("Time: %t | PC: %h | Inst: %h | ALU_Result: %h", 
                 $time, core.if_pc, core.IMEM.instruction_o, core.ex_mem_alu_result);
        #250; // ?? 250ns
        $finish;
    end

endmodule