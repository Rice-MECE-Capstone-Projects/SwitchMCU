class uart_gen;

   // Random transaction object
   rand uart_trans trans;
   
   // Mailbox for communication with the driver
   mailbox gen2driv;
   
   // Number of transactions to generate
   int repeat_count;
   
   // Event to signal the end of transaction generation
   event ended;
   
   // Constructor to initialize the generator
   function new(mailbox gen2driv, event ended);
      this.gen2driv = gen2driv;    // Connect the mailbox to communicate with the driver
      this.ended = ended;          // Connect the event to signal the end of generation
   endfunction
   
   // Main task to generate and send transactions
   task main;
      repeat (repeat_count) begin   // Loop for the specified number of transactions
         trans = new();             // Create a new transaction
         if (!trans.randomize())    // Randomize transaction fields
            $fatal("Randomization failed"); // Exit simulation if randomization fails
         gen2driv.put(trans);       // Send the randomized transaction to the driver via mailbox
      end
      -> ended;                     // Trigger the event to signal the end of generation
   endtask

endclass
