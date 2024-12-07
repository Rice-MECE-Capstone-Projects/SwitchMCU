module uart(clk, rst, rx, tx_data_in, start, rx_data_out, tx, tx_active, done_tx);

// Define UART parameters
parameter clk_freq = 50000000; // Clock frequency in MHz
parameter baud_rate = 19200;   // Baud rate in bits per second
parameter clock_divide = (clk_freq / baud_rate); // Clock divider calculation

// Define module inputs and outputs
input clk, rst;                // Clock and reset signals
input rx;                      // Serial input for receiving data
input [7:0] tx_data_in;        // 8-bit input data for transmission
input start;                   // Start signal to initiate transmission
output tx;                     // Serial output for transmission
output [7:0] rx_data_out;      // 8-bit received data output
output tx_active;              // Signal indicating if transmission is active
output done_tx;                // Signal indicating transmission completion

// Instantiate UART receiver module
uart_rx 
       #(.clk_freq(clk_freq),           // Pass clock frequency parameter
         .baud_rate(baud_rate)          // Pass baud rate parameter
        )
       receiver
             (
              .clk(clk),                // Connect clock signal
              .rst(rst),                // Connect reset signal
              .rx(rx),                  // Connect serial input
              .rx_data_out(rx_data_out) // Connect received data output
             );

// Instantiate UART transmitter module
uart_tx 
       #(.clk_freq(clk_freq),           // Pass clock frequency parameter
         .baud_rate(baud_rate)          // Pass baud rate parameter
        )
       transmitter			 
             (               
              .clk(clk),                // Connect clock signal
              .rst(rst),                // Connect reset signal
              .start(start),            // Connect start signal for transmission
              .tx_data_in(tx_data_in),  // Connect data input for transmission
              .tx(tx),                  // Connect serial output
              .tx_active(tx_active),    // Connect transmission active signal
              .done_tx(done_tx)         // Connect transmission done signal
             );

endmodule
