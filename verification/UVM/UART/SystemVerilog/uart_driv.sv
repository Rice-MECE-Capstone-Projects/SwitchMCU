class uart_driv;

  // Parameters for clock frequency and baud rate
  parameter clk_freq = 50000000; // Clock frequency in MHz
  parameter baud_rate = 19200;   // Baud rate in bits per second
  
  // Members
  uart_trans trans;                  // UART transaction object
  virtual uart_intf vif;             // Virtual interface to connect to the DUT
  mailbox gen2driv;                  // Mailbox to receive transactions from the generator
  int no_transactions;               // Counter for the number of transactions
  reg [7:0] data;                    // Data register to store random data for RX testing
  
  // Calculate clock divide value for baud rate timing
  localparam clock_divide = (clk_freq / baud_rate);
  
  // Constructor to initialize the driver
  function new(virtual uart_intf vif, mailbox gen2driv);
    this.vif = vif;                  // Connect the virtual interface
    this.gen2driv = gen2driv;        // Connect the mailbox for transaction communication
  endfunction
  
  // Task to reset the UART
  task reset;
    $display("RESET INITIATED, time in ns = %0d", $time);
    wait(vif.rst);                   // Wait until reset is asserted
    vif.rx <= 0;                     // Initialize RX line
    vif.tx_data_in <= 0;             // Clear TX data input
    vif.start <= 0;                  // Clear start signal
    wait(!vif.rst);                  // Wait until reset is de-asserted
    $display("RESET TERMINATED, time in ns = %0d", $time);
  endtask
  
  // Main task to execute UART transactions
  task main;
    forever begin
      gen2driv.get(trans);           // Get a transaction from the mailbox
      $display("---------------------------------------------");
      $display("\t Transaction no. = %0d", no_transactions);
      
      // **Test TX (Transmit)**
      vif.start <= 1;                // Set start signal
      @(posedge vif.clk);            // Wait for a clock edge
      vif.tx_data_in <= trans.tx_data_in; // Load TX data input
      @(posedge vif.clk);            // Wait for a clock edge
      wait(vif.done_tx == 1);        // Wait for transmission to complete
      if (vif.done_tx == 1) begin
        $display("\t start = %0b, \t tx_data_in = %0h, \t done_tx = %0b", vif.start, trans.tx_data_in, vif.done_tx);
        $display("[TRANSACTION]::TX PASS");
      end else begin
        $display("\t start = %0b, \t tx_data_in = %0h, \t done_tx = %0b", vif.start, trans.tx_data_in, vif.done_tx);
        $display("[TRANSACTION]::TX FAIL");
      end  
      repeat(100) @(posedge vif.clk); // Wait for some idle cycles
      
      // **Test RX (Receive)**
      @(posedge vif.clk);            // Wait for a clock edge
      data = $random;                // Generate random data for RX testing
      vif.rx <= 1'b0;                // Set start bit (low)
      repeat(clock_divide) @(posedge vif.clk); // Wait for the clock divide period
      for (int i = 0; i < 8; i++) begin
        vif.rx <= data[i];           // Send data bits serially
        repeat(clock_divide) @(posedge vif.clk); // Wait for clock divide period for each bit
      end
      vif.rx <= 1'b1;                // Set stop bit (high)
      repeat(clock_divide) @(posedge vif.clk); // Wait for the stop bit period
      repeat(100) @(posedge vif.clk); // Wait for some idle cycles
      
      // Check RX results
      $display("\t Expected data = %0h, \t Obtained data = %0h", data, vif.rx_data_out);
      if (vif.rx_data_out == data) begin
        $display("[TRANSACTION]::RX PASS");
      end else begin
        $display("[TRANSACTION]::RX FAIL");
      end
      $display("---------------------------------------------");
      
      no_transactions++;             // Increment the transaction counter
    end
  endtask

endclass
