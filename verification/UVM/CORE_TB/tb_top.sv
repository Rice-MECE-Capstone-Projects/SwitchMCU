`timescale 1ns/1ps

import uvm_pkg::*;
`include "uvm_macros.svh"

`include "core_if.sv"
import core_smoke_test_pkg::*;

module tb_top;

  // Clock
  bit clk;

  // Instantiate interface, connect clock
  core_if core_vif(clk);

  // Clock generation: 10 ns period (100 MHz)
  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  // DUT instance
  riscv32i #(
    .N_param(32)
  ) dut (
    .clk           (clk),
    .GPIO0_R0_CH1  (core_vif.GPIO0_R0_CH1),
    .GPIO0_R0_CH2  (core_vif.GPIO0_R0_CH2),
    .GPIO0_R1_CH1  (core_vif.GPIO0_R1_CH1),
    .GPIO0_R1_CH2  (core_vif.GPIO0_R1_CH2),
    .STOP_sim      (core_vif.STOP_sim),

    // TODO: connect dataMem / ins_mem ports here.
    // If riscv32i expects external memory ports, you must
    // instantiate dataMem and ins_mem and wire them up.
    // If it instantiates them internally, you can leave these off.
    // For now, I'm assuming riscv32i includes the memory internally.
  );

  // UVM run
  initial begin
    // Make the virtual interface visible to UVM
    uvm_config_db#(virtual core_if)::set(null, "*", "vif", core_vif);

    // Start UVM. You can also use $test$plusargs here if you want.
    run_test("core_smoke_test");
  end

endmodule

