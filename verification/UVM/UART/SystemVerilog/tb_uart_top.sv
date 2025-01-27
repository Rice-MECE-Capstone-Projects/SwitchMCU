module tb_uart_top;

// Define simulation parameters
parameter clk_freq = 50000000; // Clock frequency in MHz
parameter baud_rate = 19200;   // Baud rate in bits per second

// Declare clock and reset signals
bit clk;                       // Simulation clock signal
bit rst;                       // Simulation reset signal

// Instantiate the UART interface
uart_intf vif(clk, rst);
// Creates an interface object (vif) to connect the DUT and testbench.

// Instantiate the UART test
uart_test t1(vif);
// Connects the testbench environment (t1) to the UART interface.

// Instantiate the UART Design Under Test (DUT)
uart #(.clk_freq(clk_freq), .baud_rate(baud_rate)) // Parameterized instantiation
    dut(
        .clk(vif.clk),           // Connect clock signal to interface clock
        .rst(vif.rst),           // Connect reset signal to interface reset
        .rx(vif.rx),             // Connect RX line to the interface
        .tx_data_in(vif.tx_data_in), // Transmit data input
        .start(vif.start),       // Start transmission signal
        .rx_data_out(vif.rx_data_out), // Received data output
        .tx(vif.tx),             // Transmit output
        .tx_active(vif.tx_active), // Transmit active status
        .done_tx(vif.done_tx)    // Transmission done signal
    );

// Generate clock signal
always #50 clk = ~clk;
// Toggles the clock signal every 50 time units (100 time units per period, 10 MHz).

// Initialize reset signal
initial begin
    rst = 1;                     // Assert reset
    repeat(2) @(posedge clk);    // Wait for two clock edges
    rst = 0;                     // Deassert reset
end

endmodule
