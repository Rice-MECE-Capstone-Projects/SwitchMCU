program uart_test(uart_intf vif);

   // Environment object to integrate UVM components
   uart_env env;

   // Initial block to initialize and execute the test
   initial begin
      // Instantiate the UART environment and connect the virtual interface
      env = new(vif);
      
      // Set the number of transactions to generate
      env.gen.repeat_count = 10; // Generate 10 transactions
      
      // Run the entire test sequence (pre-test, test, post-test)
      env.run();
   end

endprogram
