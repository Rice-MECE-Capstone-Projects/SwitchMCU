module testbench;

  // Parameters (Adjust as needed)
  parameter CLK_PERIOD = 10; // Clock period in ns

  // Signals
  reg clk;
  reg reset;
  reg [31:0] mem_address;
  reg mem_write_enable;
  reg [31:0] mem_write_data;
  reg mem_read_enable;
  wire [31:0] mem_read_data;

  // Instantiate your RISC-V core (Replace with your actual module name)
  riscv_core u_riscv_core (
    .clk(clk),
    .reset(reset),
    .mem_address(mem_address),
    .mem_write_enable(mem_write_enable),
    .mem_write_data(mem_write_data),
    .mem_read_enable(mem_read_enable),
    .mem_read_data(mem_read_data)
  );

  // Clock Generation
  initial begin
    clk = 0;
    forever #(CLK_PERIOD / 2) clk = ~clk;
  end

  // Reset Generation
  initial begin
    reset = 1;
    # (CLK_PERIOD * 2); // Assert reset for 2 clock cycles
    reset = 0;
    # (CLK_PERIOD * 10); // Run for 10 clock cycles before checking
  end

  // Address Tracing
  always @(posedge clk) begin
    if (mem_write_enable) begin
      $display("Time: %0t, Memory Write: Address = %h, Data = %h", $time, mem_address, mem_write_data);
    end
    if (mem_read_enable) begin
      $display("Time: %0t, Memory Read: Address = %h", $time, mem_address);
    end
  end

  // Memory Model (Replace with your actual memory implementation)
  reg [31:0] memory [0:4095]; // Example memory (4KB)

  // Memory Write
  always @(posedge clk) begin
    if (mem_write_enable) begin
      memory[mem_address / 4] <= mem_write_data; // Assuming 4-byte words
    end
  end

  // Memory Read
  assign mem_read_data = (mem_read_enable) ? memory[mem_address / 4] : 32'hxxxxxxxx;

  // Load Program into Memory (Replace with your .hex file loading)
  initial begin
    $readmemh("program.hex", memory); // Load the program from the hex file
    # (CLK_PERIOD * 5); // Wait some time for the program to load
  end

  // Simulation Termination
  initial begin
    # (CLK_PERIOD * 1000); // Run for a longer time
    $finish;
  end

endmodule
