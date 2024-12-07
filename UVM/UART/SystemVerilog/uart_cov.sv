class uart_cov;
  
  // Create a transaction object to store UART signal states
  uart_trans trans = new();
  
  // Define a covergroup to capture functional coverage
  covergroup cov_inst;
    option.per_instance = 1; // Ensure per-instance coverage collection
    
    // Define individual coverpoints for key UART signals
    RX: coverpoint trans.rx {
      bins rx_c = {0, 1}; // Cover received bits (0 and 1)
    }
    
    TX_DIN: coverpoint trans.tx_data_in {
      bins tx_din_c = {[0:255]}; // Cover all possible 8-bit input values
    }
    
    START: coverpoint trans.start {
      bins str = {0, 1}; // Cover start signal values (0 and 1)
    }
    
    TX: coverpoint trans.tx {
      bins tx_c = {0, 1}; // Cover transmitted bits (0 and 1)
    }
    
    RX_DOUT: coverpoint trans.rx_data_out {
      bins rx_dout_c = {[0:255]}; // Cover all possible 8-bit output values
    }
    
    TX_ACT: coverpoint trans.tx_active {
      bins tx_act_c = {0, 1}; // Cover TX active signal values (0 and 1)
    }
    
    DONE: coverpoint trans.done_tx {
      bins dtx_c = {0, 1}; // Cover done signal values (0 and 1)
    }
    
    // Define cross-coverage to capture relationships between signals
    RXxRX_DOUT: cross RX, RX_DOUT; 
    // Cross coverage between received signal (RX) and received data output (RX_DOUT)

    TXxTX_DINxTX_ACTxDONE: cross TX, TX_DIN, TX_ACT, DONE;
    // Cross coverage between transmitted signal (TX), TX data input (TX_DIN),
    // TX active state (TX_ACT), and TX done signal (DONE)

    STARTxTX_DIN: cross START, TX_DIN; 
    // Cross coverage between start signal and TX data input
  endgroup

  // Constructor to initialize the covergroup
  function new();
    cov_inst = new;
  endfunction
  
  // Task to sample the coverage group
  task main;
    cov_inst.sample(); // Capture coverage for the current transaction state
  endtask

endclass
