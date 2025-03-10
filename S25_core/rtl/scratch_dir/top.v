module pulse_generator(
    input         clk,
    input  [31:0] in,
    output reg [31:0] out
);
reg [31:0] prev_in;
integer i;
  always @(posedge clk) begin
    for (i = 0; i < 32; i = i + 1) begin
        out[i]     <= in[i] & ~prev_in[i];
        prev_in[i] <= in[i];

    end
  end
endmodule
