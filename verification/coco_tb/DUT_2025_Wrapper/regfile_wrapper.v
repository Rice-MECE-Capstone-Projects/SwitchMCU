module regfile_wrapper # (
    input wire clk,
    input wire reset,
    input wire [4:0] reg1_pi,
    input wire [4:0] reg2_pi,
    input wire [4:0] destReg_pi,
    input wire we_i,
    input wire [31:0] writeData_pi,
    output wire [31:0] operand1_po,
    output wire [31:0] operand2_po
);

    regfile dut (
        .clk(clk),
        .reset(reset),
        .reg1_pi(reg1_pi),
        .reg2_pi(reg2_pi),
        .destReg_pi(destReg_pi),
        .we_i(we_i),
        .writeData_pi(writeData_pi),
        .operand1_po(operand1_po),
        .operand2_po(operand2_po)
    );
    initial begin
        $dumpfile("./vcds/regfile.vcd");
        $dumpvars(0, regfile_wrapper);
    end
endmodule
