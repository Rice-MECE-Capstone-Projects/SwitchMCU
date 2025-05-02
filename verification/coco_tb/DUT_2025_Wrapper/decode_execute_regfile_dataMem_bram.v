module decode_execute_regfile_dataMem_bram (
    input [31:0] pc_i,
    input clk,
    input reset,
    input en,
    input [31:0] instruction,

    output [4:0] rd_o,
    output [4:0] rs1_o,
    output [4:0] rs2_o,
    output [2:0] fun3_o,
    output [6:0] fun7_o,
    output [31:0] imm_o,
    output [63:0] Single_Instruction_o,
    output [6:0] INST_typ_o,
    output [6:0] opcode_o,
    output [3:0] operand_amt_o,
    output [31:0] alu_result_1,
    output [31:0] alu_result_2,
    output branch_inst_wire,
    output jump_inst_wire,
    output [31:0] operand1_po,
    output [31:0] operand2_po
);

    wire [4:0] inter_rd;
    wire [4:0] inter_rs1;
    wire [4:0] inter_rs2;
    wire [31:0] inter_imm, inter_operand1, inter_operand2, writeRegData, loadData_w, final_value;
    wire [63:0] inter_Single_Instruction;
    wire inter_write_reg_file, LD_memory_avalible, SD_memory_avalible, load_into_reg, stall_mem_not_avalible, write_reg_file_valid;
    wire data_mem_clkb, data_mem_enb, data_mem_rstb, data_mem_rstb_busy;
    wire [3:0 ] data_mem_web;
    wire [31:0] data_mem_addrb, data_mem_dinb, data_mem_doutb, memory_offset;
    wire data_clk, data_req_o, data_we_o, data_rvalid_i, data_gnt_i;
    wire [31:0] data_addr_o, data_wdata_o, data_rdata_i;
    wire [3:0] data_be_o;

    assign writeRegData = load_into_reg ? loadData_w : alu_result_1;
    assign write_reg_file_valid = inter_write_reg_file & (~stall_mem_not_avalible);

    decode decode_inst (
        .i_clk(clk),
        .i_en(en),
        .instruction(instruction),
        .rd_o(inter_rd),
        .rs1_o(inter_rs1),
        .rs2_o(inter_rs2),
        .fun3_o(fun3_o),
        .fun7_o(fun7_o),
        .imm_o(inter_imm),
        .Single_Instruction_o(inter_Single_Instruction),
        .INST_typ_o(INST_typ_o),
        .opcode_o(opcode_o),
        .operand_amt_o(operand_amt_o)
    );

    execute execute_inst (
        .i_clk(clk),
        .i_en(en),
        .rd_i(inter_rd),
        .rs1_i(inter_rs1),
        .rs2_i(inter_rs2),
        .instruction(instruction),
        .operand1_pi(inter_operand1),
        .operand2_pi(inter_operand2),
        .imm_i(inter_imm),
        .pc_i(pc_i),
        .Single_Instruction_i(inter_Single_Instruction),
        .alu_result_1(alu_result_1),
        .alu_result_2(alu_result_2),
        .branch_inst_wire(branch_inst_wire),
        .jump_inst_wire(jump_inst_wire),
        .write_reg_file_wire(inter_write_reg_file)
    );

    regfile regfile_inst (
        .clk(clk),
        .reset(reset),
        .reg1_pi(inter_rs1),
        .reg2_pi(inter_rs2),
        .destReg_pi(inter_rd),
        .we_pi(write_reg_file_valid),
        .writeData_pi(writeRegData),
        .operand1_po(inter_operand1),
        .operand2_po(inter_operand2)
    );

    // dataMem dataMem_inst (
    //     .clk(clk),
    //     .reset(reset), 
    //     .Single_Instruction(inter_Single_Instruction),
    //     .address(alu_result_1),
    //     .storeData(inter_operand2), 
    //     .loadData_w(loadData_w),
    //     .LD_memory_avalible(LD_memory_avalible),
    //     .SD_memory_avalible(SD_memory_avalible),
    //     .load_into_reg(load_into_reg)
    // );

    dataMem dataMem_inst (
        .clk(clk),
        .reset(reset), 
        .Single_Instruction(inter_Single_Instruction),
        .address_i(alu_result_1),
        .storeData(inter_operand2), 
        .pc_i(pc_i),
        .memory_offset(0),
        .loadData_w(loadData_w),
        .final_value(final_value), // debug port not in actual FPGA
        .stall_mem_not_avalible(stall_mem_not_avalible),
        .load_into_reg(load_into_reg),
        /// BRAM PORTS
        // .data_mem_clkb(data_mem_clkb),
        // .data_mem_enb(data_mem_enb),
        // .data_mem_rstb(data_mem_rstb),
        // .data_mem_web(data_mem_web),
        // .data_mem_addrb(data_mem_addrb),
        // .data_mem_dinb(data_mem_dinb),
        // .data_mem_rstb_busy(data_mem_rstb_busy),
        // .data_mem_doutb(data_mem_doutb)
        .data_clk(data_clk),
        .data_req_o(data_req_o),
        .data_addr_o(data_addr_o),
        .data_we_o(data_we_o),
        .data_be_o(data_be_o),
        .data_wdata_o(data_wdata_o),
        .data_rdata_i(data_rdata_i),
        .data_rvalid_i(data_rvalid_i),
        .data_gnt_i(data_gnt_i)
    );

    data_mem_bram_wrapper data_mem_bram_wrapper_inst (
        .clk(clk),
        .reset(reset),
        // BRAM interface Signals
        .ins_mem_clkb(data_mem_clkb),
        .ins_mem_enb(data_mem_enb),
        .ins_mem_rstb(data_mem_rstb),
        .ins_mem_web(data_mem_web),
        .ins_mem_addrb(data_mem_addrb),
        .ins_mem_dinb(data_mem_dinb),
        .ins_mem_rstb_busy(data_mem_rstb_busy),
        .ins_mem_doutb(data_mem_doutb),
        // core Memory interface
        .ins_data_req_o(data_req_o),     
        .ins_data_addr_o(data_addr_o),    
        .ins_data_we_o(data_we_o),      
        .ins_data_be_o(data_be_o),      
        .ins_data_wdata_o(data_wdata_o),
        .ins_data_rdata_i(data_rdata_i),   
        .ins_data_rvalid_i(data_rvalid_i),  
        .ins_data_gnt_i(data_gnt_i)   
    );

    bram bram_inst (
        .clkb(data_mem_clkb),
        .enb(data_mem_enb),
        .rstb(data_mem_rstb),
        .web(data_mem_web),
        .addrb(data_mem_addrb),
        .dinb(data_mem_dinb),
        .rstb_busy(data_mem_rstb_busy),
        .doutb(data_mem_doutb)
    );

    initial begin
        $dumpfile("./vcds/decode_execute_regfile_dataMem_bram.vcd");
        $dumpvars(0, decode_execute_regfile_dataMem_bram);
    end
endmodule