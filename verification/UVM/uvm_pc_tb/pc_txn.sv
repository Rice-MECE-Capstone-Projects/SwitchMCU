
// pc_txn.sv
`include "uvm_macros.svh"
import uvm_pkg::*;

class pc_txn extends uvm_sequence_item;

  // DUT inputs (randomizable)
  rand bit stage_IF_ready;
  rand bit jump_inst_wire;
  rand bit branch_inst_wire;
  rand bit branch_pred_wire;
  rand bit branch_pred_old2;
  rand bit enable_design;
  rand bit [31:0] targetPC_i;
  rand bit [31:0] initial_pc_i;

  // Register fields with UVM factory for automation
  `uvm_object_utils_begin(pc_txn)
    `uvm_field_int(stage_IF_ready, UVM_ALL_ON)
    `uvm_field_int(jump_inst_wire, UVM_ALL_ON)
    `uvm_field_int(branch_inst_wire, UVM_ALL_ON)
    `uvm_field_int(branch_pred_wire, UVM_ALL_ON)
    `uvm_field_int(branch_pred_old2, UVM_ALL_ON)
    `uvm_field_int(enable_design, UVM_ALL_ON)
    `uvm_field_int(targetPC_i, UVM_ALL_ON)
    `uvm_field_int(initial_pc_i, UVM_ALL_ON)
  `uvm_object_utils_end

  function new(string name="pc_txn");
    super.new(name);
  endfunction

endclass
