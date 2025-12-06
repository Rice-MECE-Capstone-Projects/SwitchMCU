    module bram_ins #(parameter MEM_DEPTH = 1096)(
        input  wire        clkb,
        input  wire        enb,
        input  wire        rstb,
        input  wire [3:0 ] web,
        input  wire [31:0] addrb,
        input  wire [31:0] dinb,
        output wire        rstb_busy,
        output wire [31:0] doutb
    );

        assign rstb_busy = 0;
        reg [31:0] DMEM [0:MEM_DEPTH-1];
        reg [31:0] doutb_reg;
        assign doutb = doutb_reg;

        initial begin
            integer i;
            for (i = 0; i < MEM_DEPTH; i++)
                DMEM[i] = 32'h00000013;

            $readmemh("program.hex", DMEM);
        end

        wire [29:0] word_address = addrb[31:2];

        always @(posedge clkb) begin
            if (enb) begin
                if (web != 0) begin
                    if (web[0]) DMEM[word_address][7:0]   <= dinb[7:0];
                    if (web[1]) DMEM[word_address][15:8]  <= dinb[15:8];
                    if (web[2]) DMEM[word_address][23:16] <= dinb[23:16];
                    if (web[3]) DMEM[word_address][31:24] <= dinb[31:24];
                    doutb_reg <= dinb;
                end else begin
                    doutb_reg <= DMEM[word_address];
                end
            end
        end
    endmodule
