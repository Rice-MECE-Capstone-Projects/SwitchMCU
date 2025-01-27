`include "uart_cov.sv" 
// Include the UART coverage class for functional coverage collection

class uart_env;

   // Components of the environment
   uart_gen gen;        // Generator for creating UART transactions
   uart_driv driv;      // Driver for driving transactions to the DUT
   uart_cov cov;        // Coverage class for capturing functional coverage
   
   // Communication and synchronization
   mailbox gen2driv;    // Mailbox for passing transactions from generator to driver
   virtual uart_intf vif; // Virtual interface for connecting the environment to the DUT
   event ended;         // Event to signal the end of the test
   
   // Constructor to initialize the environment
   function new(virtual uart_intf vif);
      this.vif = vif;              // Connect the virtual interface
      gen2driv = new();            // Initialize the mailbox
      gen = new(gen2driv, ended);  // Instantiate the generator
      driv = new(vif, gen2driv);   // Instantiate the driver
      cov = new();                 // Instantiate the coverage object
   endfunction
   
   // Task for pre-test setup
   task pre_test;
      driv.reset();                // Perform reset through the driver
   endtask
   
   // Task for running the main test
   task test;
      fork
         gen.main();               // Start the generator's main task
         driv.main();              // Start the driver's main task
         cov.main();               // Start the coverage collection task
      join_any                     // Wait for any of the tasks to complete
   endtask
   
   // Task for post-test operations
   task post_test;
      wait(ended.triggered);       // Wait for the `ended` event to be triggered
      wait(gen.repeat_count == driv.no_transactions); 
      // Ensure the generator and driver have processed the same number of transactions
   endtask
   
   // Task to run the full test flow
   task run;
      pre_test();                  // Perform pre-test setup
      test();                      // Run the main test
      post_test();                 // Perform post-test operations
      $finish;                     // End the simulation
   endtask

endclass
