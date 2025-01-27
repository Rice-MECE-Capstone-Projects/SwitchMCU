

module add_upper_lower_half_clk #(
    parameter N = 8 // Width of the input signal, must be an even number
)(
    input  wire clk,             // Clock input
    input  wire rst,             // Synchronous reset
    input  wire [N-1:0] in_signal,  // N-bit input signal
    // output wire  [N-1:0] out_signal  // N-bit output signal
    output reg  [N-1:0] out_signal  // N-bit output signal
);

    // reg    [N/2:0] sum_half; 
    wire    [N/2:0] sum_half; 
    wire [N/2-1:0] lower_half;
    wire [N/2-1:0] upper_half;
    assign lower_half = in_signal[N/2-1:0];
    assign upper_half = in_signal[N-1:N/2];
    assign sum_half = upper_half + lower_half;
    // assign out_signal = { {(N/2){sum_half[N/2]}}, sum_half[N/2-1:0] }; 

    initial begin 
            out_signal <= 0; 
    end

    always @(posedge clk) begin
        if (rst) begin
            out_signal <= {N{1'b0}}; // Reset output to zero
        end else begin
            // sum_half <= upper_half + lower_half;  // Add the upper and lower halves
            out_signal <= { {(N/2){sum_half[N/2]}}, sum_half[N/2-1:0] }; 
        end
    end

endmodule
