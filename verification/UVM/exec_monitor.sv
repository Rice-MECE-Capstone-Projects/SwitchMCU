// exec_monitor.sv
`timescale 1ns/1ps
import uvm_pkg::*;
import pkg_tx::*; 
`include "uvm_macros.svh"
//`include "pkg_tx.sv"
`include "params.sv"

class exec_monitor extends uvm_component;
  `uvm_component_utils(exec_monitor)

  virtual execute_if vif;

  // publish observed transactions (to scoreboard)
  uvm_analysis_port#(pkg_tx::exec_tx) observed_ap;

  function new(string name, uvm_component parent);
    super.new(name, parent);
    observed_ap = new("observed_ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(virtual execute_if)::get(this, "", "vif", vif)) begin
      `uvm_error("MON", "virtual interface not found in config_db")
    end
  endfunction

  task run_phase(uvm_phase phase);
    pkg_tx::exec_tx obs;
    forever begin
      // sample at clock edge (after driver drove inputs and combinational settled)
      @(posedge vif.clk);
      #1;
      obs = pkg_tx::exec_tx::type_id::create("obs");
      // we do not have sequence's id on the interface, so scoreboard will match in-order
      obs.observed_alu1 = vif.alu_result_1;
      obs.observed_alu2 = vif.alu_result_2;
      obs.observed_branch = vif.branch_inst_wire;
      obs.observed_jump = vif.jump_inst_wire;
      obs.observed_write = vif.write_reg_file_wire;
      obs.is_expected = 0;
      observed_ap.write(obs);
    end
  endtask
endclass : exec_monitor
