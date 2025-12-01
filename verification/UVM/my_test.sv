`timescale 1ns/1ps
import uvm_pkg::*;
import pkg_tx::*; 
`include "uvm_macros.svh"
//`include "pkg_tx.sv"
`include "env.sv"

class my_test extends uvm_test;
  `uvm_component_utils(my_test) // MUST be present
  exec_env m_env;

  function new(string name="my_test", uvm_component parent=null);
    super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    m_env = exec_env::type_id::create("m_env", this);
  endfunction

  task run_phase(uvm_phase phase);
    pkg_tx::exec_seq seq;
    phase.raise_objection(this);
    seq = pkg_tx::exec_seq::type_id::create("seq");
    seq.start(m_env.agent.sequencer);
    phase.drop_objection(this);
  endtask
endclass : my_test
