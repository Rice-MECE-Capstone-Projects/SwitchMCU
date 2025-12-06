// tb_uvm.sv
`timescale 1ns/1ps
`include "params.sv"
`include "my_test.sv"
 import uvm_pkg::*;

module tb_top;
  bit clk = 0;
  always #5 clk = ~clk;

  // instantiate interface
  execute_if dut_if(.clk(clk));

  // instantiate DUT
  execute dut0 (
    //.i_clk(dut_if.clk),
    .i_en(dut_if.i_en),
    .rd_i(dut_if.rd_i),
    .rs1_i(dut_if.rs1_i),
    .rs2_i(dut_if.rs2_i),
    .instruction(dut_if.instruction),
    .operand1_pi(dut_if.operand1_pi),
    .operand2_pi(dut_if.operand2_pi),
    .imm_i(dut_if.imm_i),
    .pc_i(dut_if.pc_i),
    .Noop(dut_if.Noop),
    .alu_result_1(dut_if.alu_result_1),
    .alu_result_2(dut_if.alu_result_2),
    .branch_inst_wire(dut_if.branch_inst_wire),
    .jump_inst_wire(dut_if.jump_inst_wire),
    .write_reg_file_wire(dut_if.write_reg_file_wire),
    .Single_Instruction_i(dut_if.Single_Instruction_i)
  );

  // run UVM
  initial begin
    // publish virtual interface so driver/monitor can get it
    uvm_config_db#(virtual execute_if)::set(null, "*", "vif", dut_if);

    // optional: set seed/verbosity via plusargs
    $display("Starting UVM run_test at time %0t", $time);
    run_test("my_test");
  end
endmodule
