module testbench;
    reg clk;
    reg reset;

    // Instantiate the RISC-V Command Streamer
    riscv_command_streamer streamer(
        .clk(clk),
        .reset(reset)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // Generate a clock with a period of 10 units
    end

    // Simulation control
    initial begin
        reset = 1;  // Start with reset asserted
        #10 reset = 0;  // Release reset after 10 time units

        // Run the simulation for 200 time units
        #200 $finish;
    end
endmodule
