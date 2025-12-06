interface core_if (input bit clk);

  // Control / status GPIO signals
  logic [31:0] GPIO0_R0_CH1; // control signals
  logic [31:0] GPIO0_R0_CH2; // memory_offset
  logic [31:0] GPIO0_R1_CH1; // initial_pc_i
  logic [31:0] GPIO0_R1_CH2; // success_code

  logic        STOP_sim;     // core stop flag

endinterface

