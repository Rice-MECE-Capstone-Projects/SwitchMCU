module branchPC_wrapper # (
    input wire [31:0] currentPC_pi,
    input wire branchCondTrue_pi,
    input wire isBranch_or_jump,
    input wire [31:0] branchOffset_pi,
    output wire isTakenBranch_po,
    output wire [31:0] targetPC_po
);

    branchPC dut (
        .currentPC_pi(currentPC_pi),
        .branchCondTrue_pi(branchCondTrue_pi),
        .isBranch_or_jump(isBranch_or_jump),
        .branchOffset_pi(branchOffset_pi),
        .isTakenBranch_po(isTakenBranch_po),
        .targetPC_po(targetPC_po)
    );
    initial begin
        $dumpfile("./vcds/branchPC.vcd");
        $dumpvars(0, branchPC_wrapper);
    end
endmodule
