module tb_pulse_generator;

  reg clk;
  reg [31:0] in;
  wire [31:0] out;

  // Instantiate the pulse generator module.
  pulse_generator uut (
    .clk(clk),
    .in(in),
    .out(out)
  );

  // Clock generation: This uses a small delay to toggle the clock,
  // but note that all test bench actions use @(posedge clk) for synchronization.
  initial begin
    clk = 0;
    forever #5 clk = ~clk; // Toggle clk every 5 time units.
  end

    // initial begin : init

  initial begin
    $dumpfile("pulse_generator.vcd"); // Specify the dump file name.
    $dumpvars(2, tb_pulse_generator);   // Dump all variables in tb_pulse_generator scope.
  end
        // string vcdfile;
        // int vcdlevel;
        // if ($value$plusargs("VCDFILE=%s",vcdfile))
            // $dumpfile("sim.vcd");
        // if ($value$plusargs("VCDLEVEL=%d",vcdlevel))
            // $dumpvars(vcdlevel);
            // end

  // Test sequence using @(posedge clk)
  initial begin
    // Initialize input to all zeros.
    in = 32'h00000000;
    
    // Wait for two clock cycles.
    @(posedge clk);
    @(posedge clk);

    // Test case 1: Set the lower 4 bits high.
    #1
    in = 32'h000000011;
    repeat (10) @(posedge clk); // Pulse should appear for bits that changed from 0 to 1.

    // Test case 2: Hold the same input for one clock cycle.
    // (No new pulses should be generated since the bits remain high.)
    // Test case 3: Change input so that one bit goes low (e.g., bit[2] from 1 to 0)
    #1
    
    in = 32'h00000010;  // Only bits 0 and 2 are 1 now (assuming bit 2 is low relative to previous value)

    @(posedge clk);
    #1

    // Test case 4: Set the input back to 0xF, so the bit that went low produces a new pulse.
    in = 32'h00000011;
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);
    @(posedge clk);

    // End simulation.
    $finish;
  end

endmodule
