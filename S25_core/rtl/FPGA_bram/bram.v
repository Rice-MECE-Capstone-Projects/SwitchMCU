//   bram_portb #(.MEM_DEPTH(16)) bram_portb (
//     .clkb  (clkb),
//     .enb   (enb),
//     .rstb  (rstb),
//     .web   (web),
//     .addrb (addrb),
//     .dinb  (dinb),
//     .doutb (doutb),
//     .rstb_busy(rstb_busy)



module bram #(  parameter MEM_DEPTH = 1096 ) (
    input  wire        clkb,
    input  wire        enb,
    input  wire        rstb,
    input  wire [3:0 ] web,
    input  wire [31:0] addrb,
    input  wire [31:0] dinb,
    output wire        rstb_busy,
    output wire [31:0] doutb
);

  assign doutb = doutb_reg;
  assign rstb_busy = 0;
  reg [31:0] DMEM [0:MEM_DEPTH-1];
  reg [31:0] doutb_reg;
  reg [29:0] addrb_word;
  wire [29:0] word_address;
  wire [ 1:0] byte_address;

  assign word_address = addrb[31:2];  
  assign byte_address = addrb[ 1:0];

  integer i;

  initial begin        
    // $readmemh("sanity.hex", memory);  // Load the program into memory
      $readmemh("program.hex", DMEM);  
  end


  always @(posedge clkb) begin 
  if (rstb) begin
        for (i = 0; i < MEM_DEPTH; i = i + 1) begin
          DMEM[i] <= 32'b0;
        end 
        end
      
  end


  always @(posedge clkb) begin
    if (rstb) begin
      doutb_reg <= 32'b0;
    end else if (enb) begin
      if (web != 4'b0000) begin
        if (web[0]) begin DMEM[word_address][ 7: 0]  <=  dinb[ 7: 0];   end 
        if (web[1]) begin DMEM[word_address][15: 8]  <=  dinb[15: 8];   end 
        if (web[2]) begin DMEM[word_address][23:16]  <=  dinb[23:16];   end 
        if (web[3]) begin DMEM[word_address][31:24]  <=  dinb[31:24];   end 
       doutb_reg <= {
          (web[3] ? dinb[31:24] : DMEM[word_address][31:24]),
          (web[2] ? dinb[23:16] : DMEM[word_address][23:16]),
          (web[1] ? dinb[15: 8] : DMEM[word_address][15: 8]),
          (web[0] ? dinb[ 7: 0] : DMEM[word_address][ 7: 0])
        };
      end else begin
        doutb_reg <= DMEM[word_address];
      end
    end
  end

endmodule
