// pkg_tx.sv (safe minimal version)
`timescale 1ns/1ps
package pkg_tx;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  `include "params.sv"

  // Transaction type
  class exec_tx extends uvm_sequence_item;
    `uvm_object_utils(exec_tx)

    rand bit                 i_en;
    rand bit [4:0]           rd_i;
    rand bit [4:0]           rs1_i;
    rand bit [4:0]           rs2_i;
    rand logic [31:0]        instruction;
    rand logic [31:0]        operand1_pi, operand2_pi, imm_i, pc_i;
    rand bit                 Noop;
    rand logic [63:0]        Single_Instruction_i;

    int unsigned             id;

    // expected outputs
    logic [31:0] expected_alu1;
    logic [31:0] expected_alu2;
    bit          expected_branch;
    bit          expected_jump;
    bit          expected_write;

    // observed outputs
    logic [31:0] observed_alu1;
    logic [31:0] observed_alu2;
    bit          observed_branch;
    bit          observed_jump;
    bit          observed_write;

    bit is_expected;

    function new(string name = "exec_tx");
      super.new(name);
    endfunction

    // NOTE: uvm_field macros removed to avoid parser/macro issues.
    // You can re-add selective uvm_field_* registrations later after this compiles.
  endclass : exec_tx

  // Simple randomized sequence
  class exec_seq extends uvm_sequence#(exec_tx);
    `uvm_object_utils(exec_seq)
    function new(string name = "exec_seq");
      super.new(name);
    endfunction

    task body();
      exec_tx tx;
      repeat (50) begin
        tx = exec_tx::type_id::create("tx");
        if (!tx.randomize() with {
          operand1_pi inside {[0:255]};
          operand2_pi inside {[0:255]};
          pc_i inside {[0:65535]};
          imm_i inside {[0:255]};
          Single_Instruction_i dist { `inst_ADD := 40, `inst_SUB := 30, `inst_BEQ := 20, `inst_JAL := 10 };
        }) `uvm_warning("SEQ","randomize failed");
        tx.id = $urandom();
        start_item(tx);
        finish_item(tx);
      end
    endtask
  endclass : exec_seq

  // Minimal golden model
  function void golden_execute(exec_tx tx,
                               output logic [31:0] g1,
                               output logic [31:0] g2,
                               output bit gb, output bit gj, output bit gw);
    g1 = 32'd0; g2 = 32'd0; gb = 0; gj = 0; gw = 0;
    unique case (tx.Single_Instruction_i)
      `inst_ADD: begin g1 = tx.operand1_pi + tx.operand2_pi; gw = 1; end
      `inst_SUB: begin g1 = tx.operand1_pi - tx.operand2_pi; gw = 1; end
      `inst_BEQ: begin g1 = {31'b0,(tx.operand1_pi == tx.operand2_pi)}; g2 = tx.pc_i + tx.imm_i; gb = 1; end
      `inst_JAL: begin g1 = tx.pc_i + 4; g2 = tx.pc_i + tx.imm_i; gj = 1; gw = 1; end
      default: begin end
    endcase
  endfunction

endpackage : pkg_tx
