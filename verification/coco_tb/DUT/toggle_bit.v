module toggle_bit (
    input wire clk,        // 时钟信号
    input wire rst,        // 复位信号
    output reg toggle      // 每三个时钟周期翻转的信号
);

    reg [1:0] counter;     // 2-bit 计数器，用于计数时钟周期

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            counter <= 2'b00;
            toggle <= 1'b0;
        end else begin
            if (counter == 2'b10) begin
                counter <= 2'b00;
                toggle <= ~toggle;  // 每三个时钟周期翻转toggle
            end else begin
                counter <= counter + 1;
            end
        end
    end

    initial begin
        $dumpfile("waves.vcd");  // 指定生成的波形文件名
        $dumpvars(0, toggle_bit); // 记录顶层模块的所有信号
    end
endmodule
