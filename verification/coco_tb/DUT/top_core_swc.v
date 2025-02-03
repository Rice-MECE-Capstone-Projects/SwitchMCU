module pipeline_combined_wrapper (
    input wire hclk,
    input wire hrstn,
    // Inputs for IFU
    input wire itcm_hready, // Just keep high????
    input wire itcm_hresp, //USELESS
    input wire [31:0] itcm_hrdata, //THIS IS THE INSTRUCTION
    input wire itcm_ready, // Just keep low????
    input wire dtcm_hready, // Just keep high????
    input wire dtcm_hresp, // USELESS
    input wire [31:0] dtcm_hrdata, // Actual info to load/store
    input wire [3:0] cycle_cnt,
    output wire ifu_dec_stall,
    output wire pc_write,
    output wire [31:0] pc_wdata,
    // Outputs for EXU interactions
    output wire [4:0] exu_load_rd,
    output wire [31:0] exu_load_base_addr,
    output wire [31:0] exu_load_offset,
    output wire exu_load_sext,
    output wire [1:0] exu_load_size,
    output wire exu_load_en,
    output wire [31:0] exu_store_addr,
    output wire [31:0] exu_store_data,
    output wire [1:0] exu_store_size,
    output wire exu_store_en,
    output wire [4:0] reg_waddr,
    output wire [31:0] reg_wdata,
    output wire reg_wen,
    output wire [4:0] reg_raddr_1,
    output wire [31:0] reg_rdata_1,
    output wire reg_ren_1,
    output wire [4:0] reg_raddr_2,
    output wire [31:0] reg_rdata_2,
    output wire reg_ren_2,
    output wire pc_write_out,
    output wire [31:0] pc_wdata_out,
    // Outputs for MAU interactions
    output wire [31:0] mau_haddr,
    output wire mau_hwrite,
    output wire [31:0] mau_hwdata,
    output wire [2:0] mau_hsize,
    output wire [2:0] mau_hburst,
    output wire [6:0] mau_hprot,
    output wire [1:0] mau_htrans,
    output wire mau_hmastlock,
    output wire [4:0] mau_load_rd,
    output wire [31:0] mau_load_data,
    output wire mau_load_en
    // Outputs for WBU interactions
    output [4:0] reg_waddr,
    output reg_wen,
    output [31:0] reg_wdata
);
    // IFU output wires
    wire [31:0] ifu_haddr, ifu_hwdata, ifu_pc, ifu_inst_out;
    wire [2:0] ifu_hsize, ifu_hburst;
    wire [6:0] ifu_hprot;
    wire [1:0] ifu_htrans;
    wire ifu_hwrite, ifu_hmastlock, ifu_idle;

    // IFU instance
    ifu_swc u_ifu (
        .hclk(hclk),
        .hrstn(hrstn),
        .hready(itcm_hready),
        .hresp(itcm_hresp),
        .hrdata(itcm_hrdata),
        .itcm_ready(itcm_ready),
        .ifu_dec_stall(ifu_dec_stall),
        .cycle_cnt(cycle_cnt),
        .pc_write(pc_write),
        .pc_wdata(pc_wdata),
        .haddr(ifu_haddr),
        .hwrite(ifu_hwrite),
        .hwdata(ifu_hwdata),
        .hsize(ifu_hsize),
        .hburst(ifu_hburst),
        .hprot(ifu_hprot),
        .htrans(ifu_htrans),
        .hmastlock(ifu_hmastlock),
        .ifu_idle(ifu_idle),
        .pc(ifu_pc),
        .inst_out(ifu_inst_out)
    );

    // DEC module signals and instance
    wire [31:0] dec_inst_out;
    wire dec_lui, dec_auipc, dec_jal, dec_jalr, dec_beq, dec_bne, dec_blt, dec_bge, dec_bltu, dec_bgeu;
    wire dec_lb, dec_lh, dec_lw, dec_lbu, dec_lhu, dec_sb, dec_sh, dec_sw;
    wire dec_addi, dec_slti, dec_sltiu, dec_xori, dec_ori, dec_andi;
    wire dec_slli, dec_srli, dec_srai, dec_add, dec_sub, dec_sll, dec_slt, dec_sltu, dec_xor, dec_srl, dec_sra, dec_or, dec_and;
    wire dec_fence, dec_fence_i, dec_ecall, dec_ebreak, dec_csrrw, dec_csrrs, dec_csrrc, dec_csrrwi, dec_csrrsi, dec_csrrci;
    wire dec_upper_en, dec_imm_en, dec_reg_en, dec_jump_en, dec_branch_en, dec_load_en, dec_store_en;
    wire [4:0] dec_rs2, dec_rs1, dec_rd;
    wire [11:0] dec_imm_type_i, dec_imm_type_s;
    wire [12:0] dec_imm_type_b;
    wire [19:0] dec_imm_type_u;
    wire [20:0] dec_imm_type_j;

    dec_swc u_dec (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .ifu_dec_stall(ifu_dec_stall),
        .inst_in(ifu_inst_out),
        .inst_out(dec_inst_out),
        .dec_lui(dec_lui), .dec_auipc(dec_auipc), .dec_jal(dec_jal), .dec_jalr(dec_jalr),
        .dec_beq(dec_beq), .dec_bne(dec_bne), .dec_blt(dec_blt), .dec_bge(dec_bge),
        .dec_bltu(dec_bltu), .dec_bgeu(dec_bgeu), .dec_lb(dec_lb), .dec_lh(dec_lh),
        .dec_lw(dec_lw), .dec_lbu(dec_lbu), .dec_lhu(dec_lhu), .dec_sb(dec_sb),
        .dec_sh(dec_sh), .dec_sw(dec_sw), .dec_addi(dec_addi), .dec_slti(dec_slti),
        .dec_sltiu(dec_sltiu), .dec_xori(dec_xori), .dec_ori(dec_ori), .dec_andi(dec_andi),
        .dec_slli(dec_slli), .dec_srli(dec_srli), .dec_srai(dec_srai), .dec_add(dec_add),
        .dec_sub(dec_sub), .dec_sll(dec_sll), .dec_slt(dec_slt), .dec_sltu(dec_sltu),
        .dec_xor(dec_xor), .dec_srl(dec_srl), .dec_sra(dec_sra), .dec_or(dec_or), .dec_and(dec_and),
        .dec_fence(dec_fence), .dec_fence_i(dec_fence_i), .dec_ecall(dec_ecall), .dec_ebreak(dec_ebreak),
        .dec_csrrw(dec_csrrw), .dec_csrrs(dec_csrrs), .dec_csrrc(dec_csrrc),
        .dec_csrrwi(dec_csrrwi), .dec_csrrsi(dec_csrrsi), .dec_csrrci(dec_csrrci),
        .dec_upper_en(dec_upper_en), .dec_imm_en(dec_imm_en), .dec_reg_en(dec_reg_en),
        .dec_jump_en(dec_jump_en), .dec_branch_en(dec_branch_en), .dec_load_en(dec_load_en), .dec_store_en(dec_store_en),
        .dec_rs2(dec_rs2), .dec_rs1(dec_rs1), .dec_rd(dec_rd),
        .dec_imm_type_i(dec_imm_type_i), .dec_imm_type_s(dec_imm_type_s),
        .dec_imm_type_b(dec_imm_type_b), .dec_imm_type_u(dec_imm_type_u), .dec_imm_type_j(dec_imm_type_j)
    );

    // EXU instance and connections
    wire [31:0] exu_inst_out;
    exu_top_swc u_exu (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .ifu_dec_stall(ifu_dec_stall),
        .inst_in(dec_inst_out),
        .inst_out(exu_inst_out),
        .dec_lui(dec_lui), .dec_auipc(dec_auipc), .dec_jal(dec_jal), .dec_jalr(dec_jalr),
        .dec_beq(dec_beq), .dec_bne(dec_bne), .dec_blt(dec_blt), .dec_bge(dec_bge),
        .dec_bltu(dec_bltu), .dec_bgeu(dec_bgeu), .dec_lb(dec_lb), .dec_lh(dec_lh),
        .dec_lw(dec_lw), .dec_lbu(dec_lbu), .dec_lhu(dec_lhu), .dec_sb(dec_sb),
        .dec_sh(dec_sh), .dec_sw(dec_sw), .dec_addi(dec_addi), .dec_slti(dec_slti),
        .dec_sltiu(dec_sltiu), .dec_xori(dec_xori), .dec_ori(dec_ori), .dec_andi(dec_andi),
        .dec_slli(dec_slli), .dec_srli(dec_srli), .dec_srai(dec_srai), .dec_add(dec_add),
        .dec_sub(dec_sub), .dec_sll(dec_sll), .dec_slt(dec_slt), .dec_sltu(dec_sltu),
        .dec_xor(dec_xor), .dec_srl(dec_srl), .dec_sra(dec_sra), .dec_or(dec_or), .dec_and(dec_and),
        .dec_fence(dec_fence), .dec_fence_i(dec_fence_i), .dec_ecall(dec_ecall), .dec_ebreak(dec_ebreak),
        .dec_csrrw(dec_csrrw), .dec_csrrs(dec_csrrs), .dec_csrrc(dec_csrrc),
        .dec_csrrwi(dec_csrrwi), .dec_csrrsi(dec_csrrsi), .dec_csrrci(dec_csrrci),
        .dec_upper_en(dec_upper_en), .dec_imm_en(dec_imm_en), .dec_reg_en(dec_reg_en),
        .dec_jump_en(dec_jump_en), .dec_branch_en(dec_branch_en), .dec_load_en(dec_load_en), .dec_store_en(dec_store_en),
        .dec_rs2(dec_rs2), .dec_rs1(dec_rs1), .dec_rd(dec_rd),
        .dec_imm_type_i(dec_imm_type_i), .dec_imm_type_s(dec_imm_type_s),
        .dec_imm_type_b(dec_imm_type_b), .dec_imm_type_u(dec_imm_type_u), .dec_imm_type_j(dec_imm_type_j),
        .pc(ifu_pc), .pc_write(pc_write_out), .pc_wdata(pc_wdata_out),
        .exu_load_rd(exu_load_rd), .exu_load_base_addr(exu_load_base_addr),
        .exu_load_offset(exu_load_offset), .exu_load_sext(exu_load_sext),
        .exu_load_size(exu_load_size), .exu_load_en(exu_load_en),
        .exu_store_addr(exu_store_addr), .exu_store_data(exu_store_data),
        .exu_store_size(exu_store_size), .exu_store_en(exu_store_en),
        .reg_waddr(reg_waddr), .reg_wdata(reg_wdata), .reg_wen(reg_wen),
        .reg_raddr_1(reg_raddr_1), .reg_rdata_1(reg_rdata_1), .reg_ren_1(reg_ren_1),
        .reg_raddr_2(reg_raddr_2), .reg_rdata_2(reg_rdata_2), .reg_ren_2(reg_ren_2)
    );

    // MAU instance and connections
    mau_swc u_mau (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .hready(dtcm_hready),
        .hresp(hresp),
        .hrdata(hrdata),
        .exu_load_rd(exu_load_rd),
        .exu_load_base_addr(exu_load_base_addr),
        .exu_load_offset(exu_load_offset),
        .exu_load_sext(exu_load_sext),
        .exu_load_size(exu_load_size),
        .exu_load_en(exu_load_en),
        .exu_store_addr(exu_store_addr),
        .exu_store_data(exu_store_data),
        .exu_store_en(exu_store_en),
        .exu_store_size(exu_store_size),
        .haddr(mau_haddr),
        .hwrite(mau_hwrite),
        .hwdata(mau_hwdata),
        .hsize(mau_hsize),
        .hburst(mau_hburst),
        .hprot(mau_hprot),
        .htrans(mau_htrans),
        .hmastlock(mau_hmastlock),
        .mau_load_rd(mau_load_rd),
        .mau_load_data(mau_load_data),
        .mau_load_en(mau_load_en)
    );

    // WBU instance
    wbu_swc u_wbu (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .mau_load_rd(mau_load_rd),
        .mau_load_data(mau_load_data),
        .mau_load_en(mau_load_en),
        .reg_waddr(reg_waddr),
        .reg_wen(reg_wen),
        .reg_wdata(reg_wdata)
    );

    // Regfile instance
    regfile_swc u_regfile (
        .hclk(hclk),
        .hrstn(hrstn),
        .reg_waddr(reg_waddr),
        .reg_wdata(reg_wdata),
        .reg_wen(reg_wen),
        .reg_raddr_1(reg_raddr_1),
        .reg_ren_1(reg_ren_1),
        .reg_raddr_2(reg_raddr_2),
        .reg_ren_2(reg_ren_2),
        .reg_rdata_1(reg_rdata_1),
        .reg_rdata_2(reg_rdata_2)
    );

    // Dumping simulation data
    initial begin
        $dumpfile("pipeline_combined.vcd");
        $dumpvars(0, pipeline_combined_wrapper);
    end
endmodule
