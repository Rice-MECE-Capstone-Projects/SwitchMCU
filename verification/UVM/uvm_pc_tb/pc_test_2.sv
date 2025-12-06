// pc_unit_tb.sv  – directed, self-checking testbench for the pc module
`timescale 1ns/1ps

module pc_unit_tb;

  // 1. Clock / reset generation
  logic clk   = 0;
  logic reset = 1;
  always #5 clk = ~clk;          // 10-ns period

  // 2. DUT inputs / outputs
  logic stage_IF_ready;
  logic jump_inst_wire;
  logic branch_inst_wire;
  logic branch_pred_wire;
  logic branch_pred_old2;
  logic enable_design;
  logic [31:0] targetPC_i;
  logic [31:0] initial_pc_i;

  logic [31:0] pc_o;
  logic        pc_valid;

  // 3. DUT instance
  pc dut (
    .clk_i            (clk),
    .reset_i          (reset),
    .stage_IF_ready   (stage_IF_ready),
    .jump_inst_wire   (jump_inst_wire),
    .branch_inst_wire (branch_inst_wire),
    .branch_pred_wire (branch_pred_wire),
    .branch_pred_old2 (branch_pred_old2),
    .enable_design    (enable_design),
    .targetPC_i       (targetPC_i),
    .initial_pc_i     (initial_pc_i),
    .pc_o             (pc_o),
    .pc_valid         (pc_valid)
  );

  // 4. Reference model for expected PC
  logic [31:0] exp_pc;
  logic        exp_valid;

  // Simple combinational model for next PC
  function [31:0] calc_next(input [31:0] cur);
    logic change;
    change = (jump_inst_wire | branch_inst_wire | branch_pred_wire)
             ^ branch_pred_old2;
    return change ? targetPC_i : (cur + 32'd4);
  endfunction

  // 5. Scoreboard – update expected every posedge clk
  always_ff @(posedge clk) begin
    if (reset) begin
      exp_pc    <= initial_pc_i;
      exp_valid <= 1;
    end
    else if (enable_design) begin
      if (stage_IF_ready | ((jump_inst_wire|branch_inst_wire|branch_pred_wire)
                             ^ branch_pred_old2) )
        exp_pc <= calc_next(exp_pc);
      exp_valid <= stage_IF_ready | ((jump_inst_wire|branch_inst_wire
                     |branch_pred_wire)^branch_pred_old2);
    end
  end

  // 6. Assertions
  always_ff @(posedge clk) begin
    if (!reset && enable_design) begin
      assert (pc_o == exp_pc)
        else $error("PC mismatch: got %h exp %h at %0t", pc_o, exp_pc, $time);

      assert (pc_valid == enable_design)
        else $error("pc_valid mismatch at %0t", $time);
    end
  end

  // 7. Directed stimulus tasks
  task clear_inputs();
    stage_IF_ready     = 0;
    jump_inst_wire     = 0;
    branch_inst_wire   = 0;
    branch_pred_wire   = 0;
    branch_pred_old2   = 0;
    enable_design      = 1;
    targetPC_i         = '0;
  endtask

  // 8. Test sequence
  initial begin
    $display("\n PC UNIT TEST START ");

    // PC-R1 : reset sets PC
    initial_pc_i = 32'h100;
    clear_inputs();
    reset = 1;
    repeat (2) @(posedge clk);
    reset = 0;                    // de-assert reset
    @(posedge clk);               // let PC update
    $display("R1 done\n");

    // PC-R2 : two sequential increments
    stage_IF_ready = 1;
    repeat (2) @(posedge clk);
    stage_IF_ready = 0;
    $display("R2 done\n");

    // PC-J1 : jump taken 
    jump_inst_wire = 1;
    targetPC_i     = 32'h200;
    @(posedge clk);
    jump_inst_wire = 0;
    $display("J1 done\n");

    // PC-B1 : branch taken
    branch_inst_wire = 1;
    targetPC_i       = 32'h300;
    @(posedge clk);
    branch_inst_wire = 0;
    $display("B1 done\n");

    // PC-BP1 : branch-pred flush
    branch_pred_old2 = 1;
    branch_pred_wire = 0;         // mis-predict
    targetPC_i       = 32'h400;
    @(posedge clk);
    branch_pred_old2 = 0;
    $display("BP1 done\n");

    // PC-S1 : stall 
    stage_IF_ready = 0;
    @(posedge clk);
    $display("S1 done\n");

    // PC-DIS : design disabled 
    enable_design = 0;
    @(posedge clk);
    $display("DIS done\n");

    $display("\n--- PC UNIT TEST COMPLETE ---");
    #10 $finish;
  end

endmodule

