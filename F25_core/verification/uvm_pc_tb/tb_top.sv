

// tb_top.sv
`timescale 1ns/1ps
`include "uvm_macros.svh"
import uvm_pkg::*;


// ------------------------------------------------------------------
// Verilog top-level
// ------------------------------------------------------------------
module tb_top;

  // basic clock / reset
  logic clk   = 0;
  logic reset = 1;

  // clock period = 10 ns  (100 MHz)
  always #5 clk = ~clk;

  initial begin
    #20 reset = 0;          // de-assert reset after 20 ns
  end

  // instantiate the interface, driven by clk/reset
  pc_if if0 (clk, reset);

  // ----------------------------------------------------------------
  // DUT instantiation
  // ----------------------------------------------------------------
  pc dut (
    .clk_i            (clk),
    .reset_i          (reset),
    .stage_IF_ready   (if0.stage_IF_ready),
    .jump_inst_wire   (if0.jump_inst_wire),
    .branch_inst_wire (if0.branch_inst_wire),
    .branch_pred_wire (if0.branch_pred_wire),
    .branch_pred_old2 (if0.branch_pred_old2),
    .enable_design    (if0.enable_design),
    .targetPC_i       (if0.targetPC_i),
    .initial_pc_i     (if0.initial_pc_i),
    .pc_o             (if0.pc_o),
    .pc_valid         (if0.pc_valid)
  );

  // ----------------------------------------------------------------
  // Kick off UVM
  // ----------------------------------------------------------------
    initial begin
    // hand the interface to UVM so the driver can fetch it
    uvm_config_db#(virtual pc_if.drv_mp)::set(null, "*", "vif", if0);
    // start the UVM world
    run_test("pc_test");
  end


endmodule
