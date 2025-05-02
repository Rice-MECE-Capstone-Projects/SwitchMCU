module pc_wrapper # (
    input wire clk_i,
    input wire reset_i,
    input wire halt_i,
    input wire jump_inst_wire,
    input wire branch_inst_wire,
    input wire [31:0] targetPC_i,
    output wire [31:0] pc_o
);

    pc dut (
        .clk_i(clk_i),
        .reset_i(reset_i),
        .halt_i(halt_i),
        .jump_inst_wire(jump_inst_wire),
        .branch_inst_wire(branch_inst_wire),
        .targetPC_i(targetPC_i),
        .pc_o(pc_o)
    );
    initial begin
        $dumpfile("./vcds/pc.vcd");
        $dumpvars(0, pc_wrapper);
    end
endmodule
