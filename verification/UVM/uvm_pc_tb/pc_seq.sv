
// pc_seq.sv
`include "uvm_macros.svh"
import uvm_pkg::*;
// `include "pc_txn.sv"

class pc_seq extends uvm_sequence #(pc_txn);
  `uvm_object_utils(pc_seq)

  function new(string name="pc_seq");
    super.new(name);
  endfunction

  task body();
    pc_txn tr;
    repeat (5) begin
      tr = pc_txn::type_id::create("tr");
      assert(tr.randomize() with {
        enable_design == 1;
        initial_pc_i == 32'h100;
      });
      start_item(tr);
      finish_item(tr);
    end
  endtask
endclass
