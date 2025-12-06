`timescale 1ns/1ps

// =============================================================
// Data Memory BRAM
// =============================================================
module bram_mem #(parameter MEM_DEPTH = 4096) (
    input  wire        clkb,
    input  wire        enb,
    input  wire        rstb,
    input  wire [3:0]  web,
    input  wire [31:0] addrb,
    input  wire [31:0] dinb,
    output wire        rstb_busy,
    output reg [31:0]  doutb
);

    reg [31:0] DMEM [0:MEM_DEPTH-1];
    integer i;

    assign rstb_busy = 1'b0;

    initial begin
        for (i = 0; i < MEM_DEPTH; i++)
            DMEM[i] = 32'h0;
    end

    always @(posedge clkb) begin
        if (rstb) begin
            for (i = 0; i < MEM_DEPTH; i++)
                DMEM[i] <= 32'h0;
            doutb <= 32'h0;
        end else if (enb) begin
            if (web != 4'b0000) begin
                if (web[0]) DMEM[addrb[31:2]][ 7: 0] <= dinb[ 7: 0];
                if (web[1]) DMEM[addrb[31:2]][15: 8] <= dinb[15: 8];
                if (web[2]) DMEM[addrb[31:2]][23:16] <= dinb[23:16];
                if (web[3]) DMEM[addrb[31:2]][31:24] <= dinb[31:24];
            end
            doutb <= DMEM[addrb[31:2]];
        end
    end
endmodule