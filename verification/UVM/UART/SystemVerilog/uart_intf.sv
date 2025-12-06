interface uart_intf(input logic clk, rst);

   // UART signals
   logic rx;                  // UART serial input for data reception
   logic [7:0] tx_data_in;    // 8-bit data input for transmission
   logic start;               // Signal to initiate data transmission
   logic tx;                  // UART serial output for data transmission
   logic [7:0] rx_data_out;   // 8-bit parallel data output from received data
   logic tx_active;           // Indicates that transmission is currently active
   logic done_tx;             // Indicates that the transmission is complete

   // Clocking block for driver
   clocking driver_cb @(posedge clk);
      default input #1 output #1; // Add a delay of 1 unit for input and output signals
      output rx;                 // Output signal to set the RX line (from driver to DUT)
      output tx_data_in;         // Output 8-bit data input for transmission
      output start;              // Output signal to start transmission
      input tx;                  // Input signal for the serial TX line (from DUT to driver)
      input rx_data_out;         // Input 8-bit parallel data received
      input tx_active;           // Input signal indicating TX activity
      input done_tx;             // Input signal indicating TX completion
   endclocking

   // Modport for the driver
   modport DRIVER (
      clocking driver_cb,        // Connect the clocking block for signal synchronization
      input clk, rst             // Provide clock and reset inputs
   );

endinterface
