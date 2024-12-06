module toggle_bit_wrapper (
    input wire clk,
    input wire rst,
    output reg toggle
);

    toggle_bit dut (
        .clk(clk),
        .rst(rst),
        .toggle(toggle)
    );
    initial begin
        $dumpfile(".\vcds\toggle_bit.vcd");
        $dumpvars(0, toggle_bit_wrapper);
    end
endmodule
