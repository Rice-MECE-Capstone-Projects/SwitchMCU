`default_nettype none
`include "params.vh"
`timescale 1ns/1ps
// ============================================================
// Top-level RISC-V core wrapper
module riscv32i
   #(
    parameter N_param = 32
   )(
    input  wire         clk,
    input  wire [31:0]  GPIO0_R0_CH1, // control signals
    input  wire [31:0]  GPIO0_R0_CH2, // memory_offset
    input  wire [31:0]  GPIO0_R1_CH1, // initial_pc_i
    input  wire [31:0]  GPIO0_R1_CH2, // success_code

    output wire         STOP_sim,

    // BRAM ports for Data Mem
    output wire         data_mem_clkb,
    output wire         data_mem_enb,
    output wire         data_mem_rstb,
    output wire [3:0]   data_mem_web,
    output wire [31:0]  data_mem_addrb,
    output wire [31:0]  data_mem_dinb,
    input  wire         data_mem_rstb_busy,
    input  wire [31:0]  data_mem_doutb,

    // BRAM ports for Ins Mem
    output wire         ins_mem_clkb,
    output wire         ins_mem_enb,
    output wire         ins_mem_rstb,
    output wire [3:0]   ins_mem_web,
    output wire [31:0]  ins_mem_addrb,
    output wire [31:0]  ins_mem_dinb,
    input  wire         ins_mem_rstb_busy,
    input  wire [31:0]  ins_mem_doutb
);

    // --------------------------------------------------------
    // Control & status
    // --------------------------------------------------------
    reg        enable_design_reg;
    reg        stop_design;
    wire       enable_design;
    wire       start_design;
    wire       reset;

    reg [31:0] cycle_to_end;
    reg [31:0] Cycle_count;

    wire [31:0] control_signals_in;
    wire [31:0] memory_offset;
    wire [31:0] initial_pc_i;
    wire [31:0] success_code;
    wire [31:0] final_value;

    // Instruction memory interface (core-side)
    wire        ins_data_req_o;
    wire [31:0] ins_data_addr_o;
    wire        ins_data_we_o;
    wire [ 3:0] ins_data_be_o;
    wire [31:0] ins_data_wdata_o;
    wire [31:0] ins_data_rdata_i;
    wire        ins_data_rvalid_i;
    wire        ins_data_gnt_i;

    // Edge-detect / pulse generator for GPIO control
    pulse_generator u_pulse_gen (
        .clk(clk),
        .in (GPIO0_R0_CH1),
        .out(control_signals_in)
    );

    assign STOP_sim      = stop_design;
    assign memory_offset = GPIO0_R0_CH2;
    assign initial_pc_i  = GPIO0_R1_CH1;
    assign success_code  = GPIO0_R1_CH2;

    assign start_design  = control_signals_in[0];
    assign reset         = control_signals_in[1];

    assign enable_design = enable_design_reg & ~stop_design;

    // --------------------------------------------------------
    // Simple run/stop controller
    // --------------------------------------------------------
    always @(posedge clk) begin
        if (reset) begin
            cycle_to_end      <= 32'h0;
            Cycle_count       <= 32'h0;
            enable_design_reg <= 1'b0;
            stop_design       <= 1'b0;
        end
        else begin
            if (start_design) begin
                Cycle_count       <= 32'h0;
                enable_design_reg <= 1'b1;
            end
            else if (enable_design_reg) begin
                Cycle_count       <= Cycle_count + 1;
                enable_design_reg <= enable_design_reg;
            end

            if (final_value == success_code) begin
                cycle_to_end <= cycle_to_end + 1;
                stop_design  <= 1'b0;
            end

            if (cycle_to_end >= 32'd30) begin
                stop_design <= 1'b1;

                // MARKER AUTOMATED HERE START
                $display("\n\n\n\n----TB FINISH: Test Passed----\n");
                $display("TEST FINISHED by success write : %h\n\n\n\n\n", success_code);
                // MARKER AUTOMATED HERE END
            end
        end
    end

    // --------------------------------------------------------
    // Core main instance
    // --------------------------------------------------------
    riscv32i_main #(
        .N_param(N_param)
    ) u_riscv32i_main (
        .clk          (clk),
        .reset        (reset),
        .enable_design(enable_design),

        .Cycle_count  (Cycle_count),
        .memory_offset(memory_offset),
        .initial_pc_i (initial_pc_i),
        .final_value  (final_value),

        // Data BRAM
        .data_mem_clkb     (data_mem_clkb),
        .data_mem_enb      (data_mem_enb),
        .data_mem_rstb     (data_mem_rstb),
        .data_mem_web      (data_mem_web),
        .data_mem_addrb    (data_mem_addrb),
        .data_mem_dinb     (data_mem_dinb),
        .data_mem_rstb_busy(data_mem_rstb_busy),
        .data_mem_doutb    (data_mem_doutb),

        // Instruction-side AXI-like interface
        .ins_data_req_o  (ins_data_req_o),
        .ins_data_addr_o (ins_data_addr_o),
        .ins_data_we_o   (ins_data_we_o),
        .ins_data_be_o   (ins_data_be_o),
        .ins_data_wdata_o(ins_data_wdata_o),
        .ins_data_rdata_i(ins_data_rdata_i),
        .ins_data_rvalid_i(ins_data_rvalid_i),
        .ins_data_gnt_i  (ins_data_gnt_i)
    );

    // --------------------------------------------------------
    // Instruction memory BRAM wrapper
    // --------------------------------------------------------
    inst_mem_bram_wrapper u_inst_mem_bram_wrapper (
        .clk             (clk),
        .reset           (reset),

        // core-side
        .ins_data_req_o  (ins_data_req_o),
        .ins_data_addr_o (ins_data_addr_o),
        .ins_data_we_o   (ins_data_we_o),
        .ins_data_be_o   (ins_data_be_o),
        .ins_data_wdata_o(ins_data_wdata_o),
        .ins_data_rdata_i(ins_data_rdata_i),
        .ins_data_rvalid_i(ins_data_rvalid_i),
        .ins_data_gnt_i  (ins_data_gnt_i),

        // BRAM-side
        .ins_mem_clkb    (ins_mem_clkb),
        .ins_mem_enb     (ins_mem_enb),
        .ins_mem_rstb    (ins_mem_rstb),
        .ins_mem_web     (ins_mem_web),
        .ins_mem_addrb   (ins_mem_addrb),
        .ins_mem_dinb    (ins_mem_dinb),
        .ins_mem_rstb_busy(ins_mem_rstb_busy),
        .ins_mem_doutb   (ins_mem_doutb)
    );

endmodule

// ============================================================
// Core datapath / pipeline
// ============================================================
module riscv32i_main
   #(
    parameter N_param = 32
   )(
    input  wire         clk,
    input  wire         reset,
    input  wire         enable_design,

    input  wire [31:0]  Cycle_count,
    input  wire [31:0]  memory_offset,
    input  wire [31:0]  initial_pc_i,
    output wire [31:0]  final_value,

    // BRAM ports for Data Mem
    output wire         data_mem_clkb,
    output wire         data_mem_enb,
    output wire         data_mem_rstb,
    output wire [3:0]   data_mem_web,
    output wire [31:0]  data_mem_addrb,
    output wire [31:0]  data_mem_dinb,
    input  wire         data_mem_rstb_busy,
    input  wire [31:0]  data_mem_doutb,

    // Instruction-side memory interface
    output wire         ins_data_req_o,
    output wire [31:0]  ins_data_addr_o,
    output wire         ins_data_we_o,
    output wire [3:0]   ins_data_be_o,
    output wire [31:0]  ins_data_wdata_o,
    input  wire [31:0]  ins_data_rdata_i,
    input  wire         ins_data_rvalid_i,
    input  wire         ins_data_gnt_i
);

    // --------------------------------------------------------
    // Instruction and decode-related signals
    // --------------------------------------------------------
    wire [N_param-1:0] instruction;
    wire [4:0]         rd_o;
    wire [4:0]         rs1_o;
    wire [4:0]         rs2_o;
    wire [2:0]         fun3_o;
    wire [6:0]         fun7_o;
    wire [31:0]        imm_o;
    wire [6:0]         INST_typ_o;
    wire [6:0]         opcode_o;
    wire [63:0]        Single_Instruction_o;
    wire               i_en;

    reg                halt_i;

    reg [64:0]         pipeReg0;
    reg [512:0]        pipeReg1;
    reg [512:0]        pipeReg2;
    reg [512:0]        pipeReg3;

    wire [64:0]        pipeReg0_wire;
    wire [512:0]       pipeReg1_wire;
    wire [512:0]       pipeReg2_wire;
    wire [512:0]       pipeReg3_wire;

    wire               pc_valid;
    wire [31:0]        target_pc;
    wire [31:0]        pc_i;

    initial begin
        halt_i <= 1'b0;
    end

    // --------------------------------------------------------
    // Program counter
    // --------------------------------------------------------
    wire stage_IF_ready;
    wire branch_inst_wire_stage2;
    wire jump_inst_wire_stage2;
    wire branch_predicted;
    wire branch_predicted_stage1;

    pc u_pc (
        .clk_i          (clk),
        .reset_i        (reset),
        .stage_IF_ready (stage_IF_ready),
        .jump_inst_wire (jump_inst_wire_stage2),
        .branch_inst_wire(branch_inst_wire_stage2),
        .branch_pred_wire(branch_predicted),
        .branch_pred_old2(branch_predicted_stage1),
        .targetPC_i     (target_pc),
        .enable_design  (enable_design),
        .pc_o           (pc_i),
        .initial_pc_i   (initial_pc_i),
        .pc_valid       (pc_valid)
    );

    // --------------------------------------------------------
    // Instruction memory front-end
    // --------------------------------------------------------
    wire STALL_IF_not_ready_w;
    wire STALL_ID_not_ready_w;
    wire stage_EXEC_ready;
    wire stage0_IF_valid;

    wire exec_stall = ~stage_EXEC_ready;
    wire        delete_reg1_reg2;

    ins_mem u_ins_mem (
        .clk                  (clk),
        .reset                (reset),
        .pc_i                 (pc_i),
        .pc_i_valid           (pc_valid),
        .STALL_IF_not_ready_w (STALL_IF_not_ready_w),
        .STALL_ID_not_ready_w (STALL_ID_not_ready_w),
        .instruction_o_w      (instruction),
        .stall_i_EXEC         (exec_stall),
        .abort_rvalid         (delete_reg1_reg2),

        // Memory interface signals
        .data_req_o_w         (ins_data_req_o),
        .data_addr_o_w        (ins_data_addr_o),
        .data_we_o_w          (ins_data_we_o),
        .data_be_o_w          (ins_data_be_o),
        .data_wdata_o_w       (ins_data_wdata_o),
        .data_rdata_i         (ins_data_rdata_i),
        .data_rvalid_i        (ins_data_rvalid_i),
        .data_gnt_i           (ins_data_gnt_i)
    );

    // --------------------------------------------------------
    // Pipeline stage wiring
    // --------------------------------------------------------

    // Pre Stage 0
    wire [31:0] pc_stage_0;
    wire [31:0] instruction_stage_0;
    wire [31:0] pc_out_branch;
    wire [31:0] writeData_pi;
    wire [31:0] operand1_po;
    wire [31:0] operand2_po;
    wire        branch_predicted_stage0;

    // Stage 1
    wire [31:0] pc_stage_1;
    wire [31:0] instruction_stage_1;
    wire [4:0]  rd_stage1;
    wire [2:0]  fun3_stage1;
    wire [6:0]  fun7_stage1;
    wire [6:0]  INST_typ_stage1;
    wire [6:0]  opcode_stage1;
    wire [4:0]  rs1_stage1;
    wire [4:0]  rs2_stage1;
    wire [31:0] operand1_stage1;
    wire [31:0] operand2_stage1;
    wire [31:0] imm_stage1;
    wire [63:0] Single_Instruction_stage1;
    wire [31:0] alu_result_1;
    wire [31:0] alu_result_2;

    // Stage 2
    wire [31:0] pc_stage_2;
    wire [31:0] instruction_stage_2;
    wire [4:0]  rd_stage2;
    wire [2:0]  fun3_stage2;
    wire [6:0]  fun7_stage2;
    wire [6:0]  INST_typ_stage2;
    wire [6:0]  opcode_stage2;
    wire [4:0]  rs1_stage2;
    wire [4:0]  rs2_stage2;
    wire [31:0] operand1_stage2;
    wire [31:0] operand2_stage2;
    wire [31:0] imm_stage2;
    wire [63:0] Single_Instruction_stage2;
    wire [31:0] alu_result_1_stage2;
    wire [31:0] alu_result_2_stage2;
    wire        branch_predicted_stage2;

    // Stage 3
    wire [31:0] pc_stage_3;
    wire [31:0] instruction_stage_3;
    wire [4:0]  rd_stage3;
    wire [2:0]  fun3_stage3;
    wire [6:0]  fun7_stage3;
    wire [6:0]  INST_typ_stage3;
    wire [6:0]  opcode_stage3;
    wire [4:0]  rs1_stage3;
    wire [4:0]  rs2_stage3;
    wire [31:0] operand1_stage3;
    wire [31:0] operand2_stage3;
    wire [31:0] imm_stage3;
    wire [63:0] Single_Instruction_stage3;
    wire [31:0] alu_result_1_stage3;
    wire [31:0] alu_result_2_stage3;
    wire        write_reg_file_wire_stage3;
    wire        load_into_reg_stage3;
    wire [31:0] loaded_data_stage3;
    wire        branch_predicted_stage3;

    // Data Mem wires
    wire [31:0] loaded_data;
    wire        load_into_reg;
    wire        stall_mem_not_avalible;

    // exec
    wire [31:0] operand1_into_exec;
    wire [31:0] operand2_into_exec;
    wire [31:0] result_secondary;
    wire        jump_inst_wire;
    wire        branch_inst_wire;

    // Hazard
    wire        write_reg_file_wire_stage2;
    wire [31:0] rd_result_stage2;

    reg         delete_reg1_reg2_reg;

    // Control signals
    // wire        delete_reg1_reg2;
    wire        write_reg_stage3;
    wire        write_reg_file_wire;

    // Pipeline control handshake
    wire stage_WB_ready;
    wire stage_MEM_done;
    wire stage3_MEM_valid;

    wire stage_MEM_ready;
    wire stage_EXEC_done;
    wire stage2_EXEC_valid;

    wire stage_DECO_done;
    wire stage1_DECO_valid;

    wire stage_DECO_ready;
    wire stage_IF_done;
    wire stage0_IF_valid_local;

    // alias to avoid confusion
    assign stage0_IF_valid = stage0_IF_valid_local;

    // --------------------------------------------------------
    // Writeback / hazard / control logic
    // --------------------------------------------------------
    assign write_reg_stage3 = write_reg_file_wire_stage3 | load_into_reg_stage3;

    assign delete_reg1_reg2 =
        ((branch_inst_wire_stage2 | jump_inst_wire_stage2) & ~branch_predicted_stage1) |
        (branch_predicted_stage1 == 1'b1 && branch_inst_wire_stage2 == 1'b0);

    assign writeData_pi     = load_into_reg_stage3 ? loaded_data_stage3 : alu_result_1_stage3;
    assign rd_result_stage2 = load_into_reg ? loaded_data : alu_result_1_stage2;

    // Decode for debug / branch prediction
    decode #(.N_param(N_param)) u_decode_debug (
        .i_clk              (clk),
        .i_en               (i_en),
        .instruction        (instruction_stage_0),
        .rd_o               (rd_o),
        .rs1_o              (rs1_o),
        .rs2_o              (rs2_o),
        .fun3_o             (fun3_o),
        .fun7_o             (fun7_o),
        .imm_o              (imm_o),
        .INST_typ_o         (INST_typ_o),
        .opcode_o           (opcode_o),
        .Single_Instruction_o(Single_Instruction_o)
    );

    reg_file u_reg_file (
        .clk        (clk),
        .reset      (reset),
        .reg1_pi    (rs1_o),
        .reg2_pi    (rs2_o),
        .destReg_pi (rd_stage3),
        .we_pi      (write_reg_file_wire_stage3),
        .writeData_pi(writeData_pi),
        .operand1_po(operand1_po),
        .operand2_po(operand2_po)
    );

    localparam [1:0] prediction_type = 2'b01;
    wire             predict_trigger = (INST_typ_o == 7'b0001000);

    branch_prediction u_branch_prediction (
        .predict_trigger      (predict_trigger),
        .clk                  (clk),
        .prediction_type      (prediction_type),
        .actual_branch_trigger(branch_predicted_stage1 | branch_inst_wire_stage2),
        .curr_branch          (branch_inst_wire_stage2),
        .imm                  (imm_o),
        .pc                   (pc_i),
        .pc_o                 (pc_out_branch),
        .reset                (reset),
        .prediction           (branch_predicted)
    );

    assign target_pc =
        (branch_predicted == 1'b1)                                     ? pc_out_branch :
        ((branch_predicted_stage1 == 1'b1) && (branch_inst_wire_stage2 == 1'b0)) ? (pc_stage_2 + 4) :
        alu_result_2_stage2;

    execute #(.N_param(32)) u_execute (
        .i_clk             (clk),
        .Single_Instruction_i(Single_Instruction_stage1),
        .operand1_pi      (operand1_into_exec),
        .operand2_pi      (operand2_into_exec),
        .instruction      (instruction_stage_1),
        .pc_i             (pc_stage_1),
        .rd_i             (rd_stage1),
        .rs1_i            (rs1_stage1),
        .rs2_i            (rs2_stage1),
        .imm_i            (imm_stage1),
        .alu_result_1     (alu_result_1),
        .alu_result_2     (alu_result_2),
        .branch_inst_wire (branch_inst_wire),
        .jump_inst_wire   (jump_inst_wire),
        .write_reg_file_wire(write_reg_file_wire)
    );

    dataMem u_dataMem (
        .final_value       (final_value),
        .clk               (clk),
        .reset             (reset),
        .Single_Instruction(Single_Instruction_stage2),
        .address_i         (alu_result_1_stage2),
        .storeData         (operand2_stage2),
        .pc_i              (pc_stage_2),
        .loadData_w        (loaded_data),
        .memory_offset     (memory_offset),
        .stall_mem_not_avalible(stall_mem_not_avalible),
        .load_into_reg     (load_into_reg),

        // BRAM
        .data_mem_clkb     (data_mem_clkb),
        .data_mem_addrb    (data_mem_addrb),
        .data_mem_dinb     (data_mem_dinb),
        .data_mem_enb      (data_mem_enb),
        .data_mem_rstb     (data_mem_rstb),
        .data_mem_web      (data_mem_web),
        .data_mem_doutb    (data_mem_doutb),
        .data_mem_rstb_busy(data_mem_rstb_busy)
    );

    hazard u_hazard (
        .clk                (clk),
        .rs1_stage1         (rs1_stage1),
        .rs2_stage1         (rs2_stage1),
        .destination_reg_stage2(rd_stage2),
        .write_reg_stage2   (write_reg_file_wire_stage2),
        .destination_reg_stage3(rd_stage3),
        .write_reg_stage3   (write_reg_stage3),
        .PC_stage1          (pc_stage_1),
        .PC_stage2          (pc_stage_2),
        .PC_stage3          (pc_stage_3),
        .rd_result_stage2   (rd_result_stage2),
        .writeData_pi       (writeData_pi),
        .operand1_stage1    (operand1_stage1),
        .operand1_into_exec (operand1_into_exec),
        .operand2_into_exec (operand2_into_exec),
        .operand2_stage1    (operand2_stage1)
    );

    // --------------------------------------------------------
    // PipeReg field extraction
    // --------------------------------------------------------
    assign pc_stage_0              = pipeReg0[`PC_reg];
    assign instruction_stage_0     = delete_reg1_reg2_reg ? 32'h0000_0013 : instruction;
    assign branch_predicted_stage0 = pipeReg0[`branch_predicted_0];

    assign pc_stage_1              = pipeReg1[`PC_reg];
    assign instruction_stage_1     = pipeReg1[`instruct];
    assign rd_stage1               = pipeReg1[`rd];
    assign rs1_stage1              = pipeReg1[`opRs1_reg];
    assign rs2_stage1              = pipeReg1[`opRs2_reg];
    assign operand1_stage1         = pipeReg1[`op1_reg];
    assign operand2_stage1         = pipeReg1[`op2_reg];
    assign imm_stage1              = pipeReg1[`immediate];
    assign Single_Instruction_stage1 = pipeReg1[`Single_Instruction];
    assign branch_predicted_stage1 = pipeReg1[`branch_predicted];

    assign pc_stage_2              = pipeReg2[`PC_reg];
    assign instruction_stage_2     = pipeReg2[`instruct];
    assign rd_stage2               = pipeReg2[`rd];
    assign rs1_stage2              = pipeReg2[`opRs1_reg];
    assign rs2_stage2              = pipeReg2[`opRs2_reg];
    assign operand1_stage2         = pipeReg2[`op1_reg];
    assign operand2_stage2         = pipeReg2[`op2_reg];
    assign imm_stage2              = pipeReg2[`immediate];
    assign Single_Instruction_stage2 = pipeReg2[`Single_Instruction];
    assign alu_result_1_stage2     = pipeReg2[`alu_res1];
    assign alu_result_2_stage2     = pipeReg2[`alu_res2];
    assign jump_inst_wire_stage2   = pipeReg2[`jump_en];
    assign branch_inst_wire_stage2 = pipeReg2[`branch_en];
    assign write_reg_file_wire_stage2 = pipeReg2[`reg_write_en];
    assign branch_predicted_stage2 = pipeReg2[`branch_predicted];

    assign pc_stage_3              = pipeReg3[`PC_reg];
    assign instruction_stage_3     = pipeReg3[`instruct];
    assign rd_stage3               = pipeReg3[`rd];
    assign rs1_stage3              = pipeReg3[`opRs1_reg];
    assign rs2_stage3              = pipeReg3[`opRs2_reg];
    assign operand1_stage3         = pipeReg3[`op1_reg];
    assign operand2_stage3         = pipeReg3[`op2_reg];
    assign imm_stage3              = pipeReg3[`immediate];
    assign Single_Instruction_stage3 = pipeReg3[`Single_Instruction];
    assign alu_result_1_stage3     = pipeReg3[`alu_res1];
    assign alu_result_2_stage3     = pipeReg3[`alu_res2];
    assign write_reg_file_wire_stage3 = pipeReg3[`reg_write_en];
    assign load_into_reg_stage3    = pipeReg3[`load_reg];
    assign loaded_data_stage3      = pipeReg3[`data_mem_loaded];
    assign branch_predicted_stage3 = pipeReg3[`branch_predicted];

    // --------------------------------------------------------
    // PipeReg packing
    // --------------------------------------------------------
    assign pipeReg0_wire[`PC_reg]             = pc_i;
    assign pipeReg0_wire[`instruct]           = instruction;
    assign pipeReg0_wire[`branch_predicted_0] = branch_predicted;

    assign pipeReg1_wire[`PC_reg]             = pc_stage_0;
    assign pipeReg1_wire[`instruct]           = instruction_stage_0;
    assign pipeReg1_wire[`alu_res1]           = 32'd0;
    assign pipeReg1_wire[`load_reg]           = 1'b0;
    assign pipeReg1_wire[`jump_en]            = 1'b0;
    assign pipeReg1_wire[`branch_en]          = 1'b0;
    assign pipeReg1_wire[`reg_write_en]       = 1'b0;
    assign pipeReg1_wire[`LD_ready]           = 1'b0;
    assign pipeReg1_wire[`SD_ready]           = 1'b0;
    assign pipeReg1_wire[`rd]                 = rd_o;
    assign pipeReg1_wire[`operand_amt]        = 32'd0;
    assign pipeReg1_wire[`opRs1_reg]          = rs1_o;
    assign pipeReg1_wire[`opRs2_reg]          = rs2_o;
    assign pipeReg1_wire[`op1_reg]            = operand1_po;
    assign pipeReg1_wire[`op2_reg]            = operand2_po;
    assign pipeReg1_wire[`immediate]          = imm_o;
    assign pipeReg1_wire[`alu_res2]           = 32'd0;
    assign pipeReg1_wire[`rd_data]            = 32'd0;
    assign pipeReg1_wire[`Single_Instruction] = Single_Instruction_o;
    assign pipeReg1_wire[`data_mem_loaded]    = 32'd0;
    assign pipeReg1_wire[`branch_predicted]   = branch_predicted_stage0;

    assign pipeReg2_wire[`PC_reg]             = pc_stage_1;
    assign pipeReg2_wire[`instruct]           = instruction_stage_1;
    assign pipeReg2_wire[`alu_res1]           = alu_result_1;
    assign pipeReg2_wire[`load_reg]           = 1'b0;
    assign pipeReg2_wire[`jump_en]            = jump_inst_wire;
    assign pipeReg2_wire[`branch_en]          = branch_inst_wire;
    assign pipeReg2_wire[`reg_write_en]       = write_reg_file_wire;
    assign pipeReg2_wire[`LD_ready]           = 1'b0;
    assign pipeReg2_wire[`SD_ready]           = 1'b0;
    assign pipeReg2_wire[`rd]                 = rd_stage1;
    assign pipeReg2_wire[`operand_amt]        = 32'd0;
    assign pipeReg2_wire[`opRs1_reg]          = rs1_stage1;
    assign pipeReg2_wire[`opRs2_reg]          = rs2_stage1;
    assign pipeReg2_wire[`op1_reg]            = operand1_into_exec;
    assign pipeReg2_wire[`op2_reg]            = operand2_into_exec;
    assign pipeReg2_wire[`immediate]          = imm_stage1;
    assign pipeReg2_wire[`alu_res2]           = alu_result_2;
    assign pipeReg2_wire[`rd_data]            = 32'd0;
    assign pipeReg2_wire[`Single_Instruction] = Single_Instruction_stage1;
    assign pipeReg2_wire[`data_mem_loaded]    = 32'd0;
    assign pipeReg2_wire[`branch_predicted]   = branch_predicted_stage1;

    assign pipeReg3_wire[`PC_reg]             = pc_stage_2;
    assign pipeReg3_wire[`instruct]           = instruction_stage_2;
    assign pipeReg3_wire[`alu_res1]           = alu_result_1_stage2;
    assign pipeReg3_wire[`load_reg]           = load_into_reg;
    assign pipeReg3_wire[`jump_en]            = 1'b0;
    assign pipeReg3_wire[`branch_en]          = 1'b0;
    assign pipeReg3_wire[`reg_write_en]       = write_reg_file_wire_stage2;
    assign pipeReg3_wire[`LD_ready]           = 1'b0;
    assign pipeReg3_wire[`SD_ready]           = 1'b0;
    assign pipeReg3_wire[`rd]                 = rd_stage2;
    assign pipeReg3_wire[`operand_amt]        = 32'd0;
    assign pipeReg3_wire[`opRs1_reg]          = rs1_stage2;
    assign pipeReg3_wire[`opRs2_reg]          = rs2_stage2;
    assign pipeReg3_wire[`op1_reg]            = operand1_stage2;
    assign pipeReg3_wire[`op2_reg]            = operand2_stage2;
    assign pipeReg3_wire[`immediate]          = imm_stage2;
    assign pipeReg3_wire[`alu_res2]           = alu_result_2_stage2;
    assign pipeReg3_wire[`rd_data]            = 32'd0;
    assign pipeReg3_wire[`Single_Instruction] = Single_Instruction_stage2;
    assign pipeReg3_wire[`data_mem_loaded]    = loaded_data;
    assign pipeReg3_wire[`branch_predicted]   = branch_predicted_stage2;

    // --------------------------------------------------------
    // Stage valid / ready logic
    // --------------------------------------------------------
    assign stage_MEM_done    = ~stall_mem_not_avalible;
    assign stage_WB_ready    = 1'b1;
    assign stage3_MEM_valid  = stage_WB_ready & stage_MEM_done;

    assign stage_EXEC_done   = 1'b1;
    assign stage_MEM_ready   = stage3_MEM_valid;
    assign stage2_EXEC_valid = stage_MEM_ready & stage_EXEC_done;

    assign stage_DECO_done   = ~STALL_ID_not_ready_w;
    assign stage_EXEC_ready  = stage2_EXEC_valid;
    assign stage1_DECO_valid = stage_EXEC_ready & stage_DECO_done;

    assign stage_IF_done     = ~STALL_IF_not_ready_w;
    assign stage_DECO_ready  = stage1_DECO_valid;
    assign stage0_IF_valid_local = stage_DECO_ready & stage_IF_done;

    assign stage_IF_ready    = stage0_IF_valid_local;

    // --------------------------------------------------------
    // PipeReg update
    // --------------------------------------------------------
    always @(posedge clk) begin
        if (reset) begin
            pipeReg0            <= 65'd0;
            pipeReg1            <= 513'd0;
            pipeReg2            <= 513'd0;
            pipeReg3            <= 513'd0;
            delete_reg1_reg2_reg <= 1'b0;
        end
        else if (enable_design) begin
            delete_reg1_reg2_reg <= delete_reg1_reg2;

            if (delete_reg1_reg2) begin
                pipeReg0 <= 65'd0;
                pipeReg1 <= 513'd0;
                pipeReg2 <= 513'd0;

                if (stage3_MEM_valid) begin
                    pipeReg3 <= pipeReg3_wire;
                end
            end
            else begin
                // Stage 0
                if (stage0_IF_valid_local) begin
                    if (branch_predicted) begin
                        pipeReg0 <= 65'd0;
                        pipeReg0[64] <= 1'b1; // mark branch predicted
                    end
                    else begin
                        pipeReg0 <= pipeReg0_wire;
                    end
                end

                // Stage 1
                if (stage1_DECO_valid) begin
                    if (branch_predicted_stage0) begin
                        pipeReg1 <= 513'd0;
                        pipeReg1[384] <= 1'b1; // mark branch predicted
                    end
                    else begin
                        pipeReg1 <= pipeReg1_wire;
                    end
                end
                else if (stage2_EXEC_valid) begin
                    pipeReg1 <= 513'd0;
                end

                // Stage 2
                if (stage2_EXEC_valid) begin
                    pipeReg2 <= pipeReg2_wire;
                end

                // Stage 3
                if (stage3_MEM_valid) begin
                    pipeReg3 <= pipeReg3_wire;
                end
            end
        end
    end

endmodule

// ============================================================
// Simple one-cycle edge pulse generator for GPIO bits
// ============================================================
module pulse_generator(
    input  wire       clk,
    input  wire [31:0] in,
    output wire [31:0] out
);
    reg [31:0] out_r;
    reg [31:0] prev_in;
    integer    i;

    assign out = out_r;

    always @(posedge clk) begin
        for (i = 0; i < 32; i = i + 1) begin
            out_r[i]   <= in[i] & ~prev_in[i];
            prev_in[i] <= in[i];
        end
    end
endmodule

// ============================================================
// Instruction BRAM wrapper
// ============================================================
module inst_mem_bram_wrapper #(
    parameter MEM_DEPTH = 1096
)(
    input  wire         clk,
    input  wire         reset,

    // BRAM interface Signals
    output wire         ins_mem_clkb,
    output wire         ins_mem_enb,
    output wire         ins_mem_rstb,
    output wire [3:0]   ins_mem_web,
    output wire [31:0]  ins_mem_addrb,
    output wire [31:0]  ins_mem_dinb,
    input  wire         ins_mem_rstb_busy,
    input  wire [31:0]  ins_mem_doutb,

    // core Memory interface
    input  wire         ins_data_req_o,
    input  wire [31:0]  ins_data_addr_o,
    input  wire         ins_data_we_o,
    input  wire [3:0]   ins_data_be_o,
    input  wire [31:0]  ins_data_wdata_o,
    output wire [31:0]  ins_data_rdata_i,
    output wire         ins_data_rvalid_i,
    output wire         ins_data_gnt_i
);
    reg  rvalid_reg;
    reg  rvalid_reg_1, rvalid_reg_2, rvalid_reg_3;
    reg  rvalid_reg_4, rvalid_reg_5, rvalid_reg_6, rvalid_reg_7;

    assign ins_data_gnt_i    = ins_data_req_o;
    assign ins_data_rvalid_i = rvalid_reg;

    assign ins_mem_clkb  = clk;
    assign ins_mem_enb   = ins_data_req_o;
    assign ins_mem_rstb  = 1'b0;
    assign ins_mem_web   = 4'b0000;
    assign ins_mem_addrb = ins_data_addr_o;
    assign ins_mem_dinb  = 32'd0;

    assign ins_data_rdata_i = ins_mem_doutb;

    reg [31:0] cycle_taken;

    initial begin
        cycle_taken  <= 32'd0;
        rvalid_reg   <= 1'b0;
        rvalid_reg_1 <= 1'b0;
        rvalid_reg_2 <= 1'b0;
        rvalid_reg_3 <= 1'b0;
        rvalid_reg_4 <= 1'b0;
        rvalid_reg_5 <= 1'b0;
        rvalid_reg_6 <= 1'b0;
        rvalid_reg_7 <= 1'b0;
    end

    always @(posedge clk) begin
        if (reset) begin
            rvalid_reg   <= 1'b0;
            rvalid_reg_1 <= 1'b0;
            rvalid_reg_2 <= 1'b0;
            rvalid_reg_3 <= 1'b0;
            rvalid_reg_4 <= 1'b0;
            rvalid_reg_5 <= 1'b0;
            rvalid_reg_6 <= 1'b0;
            rvalid_reg_7 <= 1'b0;
        end
        else begin
            rvalid_reg   <= ins_data_req_o;
            rvalid_reg_1 <= rvalid_reg;
            rvalid_reg_2 <= rvalid_reg_1;
            rvalid_reg_3 <= rvalid_reg_2;
            rvalid_reg_4 <= rvalid_reg_3;
            rvalid_reg_5 <= rvalid_reg_4;
            rvalid_reg_6 <= rvalid_reg_5;
            rvalid_reg_7 <= rvalid_reg_6;
        end
    end

endmodule

// ============================================================
// Timed pulse helper (currently unused by top-level, but valid)
// ============================================================
module timed_pulse #(
  parameter N = 2, // Number of cycles to capture ins_data_req_o
  parameter L = 3  // Number of cycles to wait after capture
)(
    input wire  clk,
    input wire  reset,
    input wire  ins_data_req_o,
    output reg  value_o,
    output wire grant,
    output wire req_done,
    output wire bram_en
);
    reg [31:0] counter;
    reg [31:0] counter_L;
    reg        capture_done;
    reg        delay_done;
    reg        pulse_out;
    reg        bram_read;

    wire       grant_w;
    wire       req_done_w;

    assign grant    = grant_w;
    assign grant_w  = (counter   == (N - 1)) && ins_data_req_o;

    assign req_done   = req_done_w;
    assign req_done_w = (counter_L == (L - 1));

    assign bram_en = bram_read;

    initial begin
        bram_read    <= 1'b0;
        counter      <= 32'd0;
        counter_L    <= 32'd0;
        capture_done <= 1'b0;
        delay_done   <= 1'b0;
        value_o      <= 1'b0;
        pulse_out    <= 1'b0;
    end

    // Simple 1-cycle pulse on bram_en when grant is asserted
    always @(posedge clk) begin
        if (reset) begin
            bram_read <= 1'b0;
        end
        else if (grant) begin
            bram_read <= 1'b1;
        end
        else if (bram_read) begin
            bram_read <= 1'b0;
        end
    end

    always @(posedge clk) begin
        if (reset) begin
            counter      <= 32'd0;
            counter_L    <= 32'd0;
            capture_done <= 1'b0;
            delay_done   <= 1'b0;
            value_o      <= 1'b0;
            pulse_out    <= 1'b0;
        end
        else begin
            if (!capture_done) begin
                pulse_out <= 1'b0;
                if (ins_data_req_o) begin
                    if (counter < (N - 1)) begin
                        counter <= counter + 1;
                    end
                    else begin
                        capture_done <= 1'b1;
                        counter      <= 32'd0;
                    end
                end
            end
            else begin
                if (counter_L < (L - 1)) begin
                    counter_L <= counter_L + 1;
                end
                else begin
                    counter_L    <= 32'd0;
                    capture_done <= 1'b0;
                    pulse_out    <= 1'b1;
                end
            end
        end
    end

    always @(posedge clk) begin
        if (reset) begin
            value_o <= 1'b0;
        end
        else begin
            value_o <= pulse_out;
        end
    end

endmodule
