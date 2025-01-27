class uart_trans;

   // Data members representing UART signals
   bit rx;                     // UART serial input (RX) signal
   rand bit [7:0] tx_data_in;  // Randomizable 8-bit data for transmission
   bit start;                  // Signal to initiate data transmission
   bit tx;                     // UART serial output (TX) signal
   bit [7:0] rx_data_out;      // 8-bit received data output
   bit tx_active;              // Indicates whether transmission is active
   bit done_tx;                // Indicates whether transmission is complete

endclass
