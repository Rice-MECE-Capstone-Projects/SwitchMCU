module exu_flush_swc_wrapper (
    input hclk,
    input hrstn,
    input [3:0] cycle_cnt,
    input [1:0] flush,
    output reg flush_stall
);

    exu_flush_swc dut (
        .hclk(hclk),
        .hrstn(hrstn),
        .cycle_cnt(cycle_cnt),
        .flush(flush),
        .flush_stall(flush_stall)
    );
    initial begin
        $dumpfile("./vcds/exu_flush_swc.vcd");
        $dumpvars(0, exu_flush_swc_wrapper);
    end
endmodule
