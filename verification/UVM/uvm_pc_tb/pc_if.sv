// pc_if.sv

interface pc_if (input logic clk, input logic reset);

  // DUT inputs
  logic stage_IF_ready;
  logic jump_inst_wire;
  logic branch_inst_wire;
  logic branch_pred_wire;
  logic branch_pred_old2;
  logic enable_design;
  logic [31:0] targetPC_i;
  logic [31:0] initial_pc_i;

  // DUT outputs
  logic [31:0] pc_o;
  logic        pc_valid;

  // Modport for driver (what it can drive/see)
  modport drv_mp (
    output stage_IF_ready,
    output jump_inst_wire,
    output branch_inst_wire,
    output branch_pred_wire,
    output branch_pred_old2,
    output enable_design,
    output targetPC_i,
    output initial_pc_i,
    input  pc_o,
    input  pc_valid
  );

endinterface
