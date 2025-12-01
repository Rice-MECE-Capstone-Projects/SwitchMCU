`timescale 1ns/1ps

import uvm_pkg::*;
`include "uvm_macros.svh"
`include "core_if.sv"
import core_smoke_test_pkg::*;

module tb_top;

  // Clock
  bit clk;
  core_if core_vif(clk);

  // Clock generation
  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  //------------------------------------------
  // Instruction memory interface signals
  //------------------------------------------
  logic        ins_mem_clkb;
  logic        ins_mem_enb;
  logic        ins_mem_rstb;
  logic [3:0]  ins_mem_web;
  logic [31:0] ins_mem_addrb;
  logic [31:0] ins_mem_dinb;
  logic        ins_mem_rstb_busy;
  logic [31:0] ins_mem_doutb;

  //------------------------------------------
  // Instruction Memory Model
  //------------------------------------------
  logic [31:0] imem_data;

  // Core (via inst_mem_bram_wrapper inside riscv32i) drives:
  //   ins_mem_clkb, ins_mem_enb, ins_mem_web, ins_mem_addrb, ins_mem_dinb
  // Testbench drives:
  //   ins_mem_doutb (data back into core)
  //   ins_mem_rstb_busy (status, held low)
  ins_mem_model imem (
    .clk  (ins_mem_clkb),   // use the BRAM clock from core
    .addr (ins_mem_addrb),  // address from core
    .data (imem_data)       // data out of model
  );

  // Feed data back into the core
  assign ins_mem_doutb     = imem_data;
  // No reset-busy behavior in this simple model
  assign ins_mem_rstb_busy = 1'b0;

  //------------------------------------------
  // DUT
  //------------------------------------------
  riscv32i #(.N_param(32)) dut (
    .clk           (clk),
    .GPIO0_R0_CH1  (core_vif.GPIO0_R0_CH1),
    .GPIO0_R0_CH2  (core_vif.GPIO0_R0_CH2),
    .GPIO0_R1_CH1  (core_vif.GPIO0_R1_CH1),
    .GPIO0_R1_CH2  (core_vif.GPIO0_R1_CH2),
    .STOP_sim      (core_vif.STOP_sim),

    // DATA MEM completely disconnected for now
    .data_mem_clkb     (),
    .data_mem_enb      (),
    .data_mem_rstb     (),
    .data_mem_web      (),
    .data_mem_addrb    (),
    .data_mem_dinb     (),
    .data_mem_rstb_busy(),
    .data_mem_doutb    (),

    // INSTRUCTION MEM: connected to BRAM-style interface
    .ins_mem_clkb      (ins_mem_clkb),
    .ins_mem_enb       (ins_mem_enb),
    .ins_mem_rstb      (ins_mem_rstb),
    .ins_mem_web       (ins_mem_web),
    .ins_mem_addrb     (ins_mem_addrb),
    .ins_mem_dinb      (ins_mem_dinb),
    .ins_mem_rstb_busy (ins_mem_rstb_busy),
    .ins_mem_doutb     (ins_mem_doutb)
  );

  //------------------------------------------
  // Start UVM
  //------------------------------------------
  initial begin
    uvm_config_db#(virtual core_if)::set(null, "*", "vif", core_vif);
    run_test("core_smoke_test");
  end

endmodule

