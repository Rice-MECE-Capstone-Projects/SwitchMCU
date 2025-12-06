
`include "uvm_macros.svh"
import uvm_pkg::*;
`include "pc_driver.sv"

class pc_env extends uvm_env;
  `uvm_component_utils(pc_env)

  pc_driver drv;
  uvm_sequencer #(pc_txn) seqr;

  function new(string name="pc_env", uvm_component parent=null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    drv  = pc_driver::type_id::create("drv", this);
    seqr = uvm_sequencer#(pc_txn)::type_id::create("seqr", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    drv.seq_item_port.connect(seqr.seq_item_export);
  endfunction
endclass