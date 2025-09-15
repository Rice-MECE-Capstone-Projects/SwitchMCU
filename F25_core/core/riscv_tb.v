`include "params.vh"

module riscv_tb;

    // Testbench signals
    reg clk;
    reg reset;
    
    // Core I/O (connect to your top-level module)
    wire [31:0] pc_o;
    wire [31:0] instruction_o;
    wire [31:0] alu_result;

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10ns clock period
    end

    // Reset generation
    initial begin
        reset = 1;
        #20;
        reset = 0;
    end

    // Instruction Memory and Program Loading
    reg [31:0] instruction_memory [0:1023];

    initial begin
        $readmemh("program.hex", instruction_memory);
    end

    // Instantiate the top-level core module
    // This assumes you have a riscv32i module that connects all the
    // simplified sub-modules together. You will need to create this module.
    riscv32i core (
        .clk(clk),
        .reset(reset)
    );

    // Initial and monitoring
    initial begin
        // The `$readmemh` above will load instructions from a file named "program.hex"
        $dumpfile("riscv_core.vcd");
        $dumpvars(0, riscv_tb);
        
        $monitor("Time: %t | PC: %h | Instruction: %h", 
                 $time, core.PC_unit.pc_o, core.IMEM.instruction_o);

        #100;
        $finish;
    end

    // Ecall instruction detection to automatically stop the simulation
    always @(posedge clk) begin
        if (core.IMEM.instruction_o == `I_Type_ECALL) begin
            $display("ECALL instruction detected. Simulation finished.");
            #10;
            $finish;
        end
    end

endmodule

