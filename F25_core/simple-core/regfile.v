module regfile(
    input  wire        clk,
    input  wire        reset,
    input  wire [4:0]  rs1_addr,
    input  wire [4:0]  rs2_addr,
    output wire [31:0] rs1_data,
    output wire [31:0] rs2_data,
    input  wire [4:0]  rd_addr,
    input  wire [31:0] rd_data,
    input  wire        we_i
);

    reg [31:0] register_file [0:31];

    // Read ports
    assign rs1_data = (rs1_addr != 0) ? register_file[rs1_addr] : 32'b0;
    assign rs2_data = (rs2_addr != 0) ? register_file[rs2_addr] : 32'b0;

    // Write port
    always @(posedge clk) begin
        if (reset) begin
            // On reset, clear register 1 to 31. Register 0 is hard-wired to zero.
            register_file[1] <= 32'b0;
            register_file[2] <= 32'b0;
            // ... and so on for all 31 registers. A full reset is handled by the testbench.
        end else if (we_i && (rd_addr != 0)) begin
            register_file[rd_addr] <= rd_data;
        end
    end
endmodule

