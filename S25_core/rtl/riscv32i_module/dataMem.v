
// `define SET_MEM_REQ(i_stallreq, i_state, i_mem_re, i_mem_we, i_mem_addr_o, i_mem_data_o) \
// 	stallreq   = i_stallreq; \
// 	state      = i_state; \
// 	mem_re     = i_mem_re; \
// 	mem_we     = i_mem_we; \
// 	mem_addr_o = i_mem_addr_o; \
// 	mem_data_o = i_mem_data_o;

module dataMem #(  
                  parameter mem_size = 4096, 
                  parameter mem_offset  = 32'h00000600
                   ) (
input wire clk,
input wire reset, 
  
input wire      [63:0] Single_Instruction,
input wire      [31:0] address_i,
input wire      [31:0] storeData, 
input wire      [31:0] pc_i,
output wire     [31:0] loadData_w,
output wire     stall_mem_not_avalible,
output wire load_into_reg

);
    
    wire [29:0] word_address;
    wire [ 1:0] byte_address;
    reg         stall_mem_not_avalible_reg;
    reg load_data_valid;
    wire stall_needed,store_wire,load_wire;
    wire [31:0] raw_word;
    reg [31:0] loadData;               // Data to be loaded
    reg  [3:0] loadData_byte;               // Data to be loaded
    reg [31:0] storeaddress;           // Data to be loaded
    wire [31:0] raw_bram_data_word;          

    reg [31:0] last_stored_data,last_stored_word_address,last_stored_address;
    reg [31:0] last_loaded_data,last_loaded_address;
    reg stored_happened,loaded_happened;

    wire [15:0] raw_data_byte_LHU;

    wire [31:0] address;
    // assign address = address_i - mem_offset;

    reg [31:0] cycles_request; 
    reg [31:0] retrive_cycles;
    wire rstb_busy;   
    initial begin 
        retrive_cycles <= 0;
        store_data <= 32'b0;

    end 

    assign load_into_reg = load_wire;
    assign stall_mem_not_avalible = stall_needed && ~load_data_valid;
    assign address = address_i;
    assign word_address = address[31:2];  
    assign byte_address = address[ 1:0];
    // assign raw_word = DMEM[word_address];
    assign loadData_w = loadData;




assign load_wire  =     ((Single_Instruction == inst_LB)  ||
                         (Single_Instruction == inst_LH)  ||
                         (Single_Instruction == inst_LW)  ||
                         (Single_Instruction == inst_LBU) ||
                         (Single_Instruction == inst_LHU));

assign stall_needed   = ((Single_Instruction == inst_LB)  ||
                        (Single_Instruction == inst_LH)  ||
                        (Single_Instruction == inst_LW)  ||
                        (Single_Instruction == inst_LBU) ||
                        (Single_Instruction == inst_LHU));
                    
assign store_wire    = ((Single_Instruction == inst_SB) ||
                        (Single_Instruction == inst_SH) ||
                        (Single_Instruction == inst_SW));
wire enb;
assign enb = store_wire | load_wire;

assign loadData_w =   loadData;

wire [ 7:0] raw_data_byte_LBU;

assign raw_data_byte_LBU = ((byte_address == 2'b00) ? raw_bram_data_word[7:0]   :
                            (byte_address == 2'b01) ? raw_bram_data_word[15:8]  :
                            (byte_address == 2'b10) ? raw_bram_data_word[23:16] :
                            (byte_address == 2'b11) ? raw_bram_data_word[31:24] : 8'b0 );
        
// reg [7:0] raw_data_byte_LBU;
// always @(*) begin
//     case (byte_address)
//         2'b00: raw_data_byte_LBU = raw_bram_data_word[7:0];
//         2'b01: raw_data_byte_LBU = raw_bram_data_word[15:8];
//         2'b10: raw_data_byte_LBU = raw_bram_data_word[23:16];
//         2'b11: raw_data_byte_LBU = raw_bram_data_word[31:24];
//         default: raw_data_byte_LBU = 8'b0; // Default case for safety
//     endcase
// end

assign raw_data_byte_LHU = ((byte_address == 2'b00) ? raw_bram_data_word[15:0]   : 
                            (byte_address == 2'b01) ? raw_bram_data_word[23:8]   : 
                            (byte_address == 2'b10) ? raw_bram_data_word[31:16]  : 
                            16'b0); 

always @(*) begin
  if (load_data_valid) begin  
    case(Single_Instruction)
        inst_LW :begin 
          loadData <= raw_bram_data_word;
        end
        inst_LB :begin  
          loadData <= { {24{raw_data_byte_LBU[7]}}, raw_data_byte_LBU };
        end
        inst_LH :begin  
          loadData <= { {16{raw_data_byte_LHU[15]}}, raw_data_byte_LHU };
        end     
        inst_LBU :begin  
          loadData <= {24'b0,raw_data_byte_LBU};
        end
        inst_LHU :begin  
          loadData <= {16'b0,raw_data_byte_LHU};
        end
        default: begin 
          loadData <= 32'b0;          
        end
    endcase 
  end else begin
          loadData       <=  32'b0;          
  end
end

always @(posedge clk) begin
  if (reset) begin
    cycles_request  <= 8'b0;
    load_data_valid <= 1'b0;
  end else if (load_wire) begin
    if (cycles_request >= retrive_cycles) begin
      if ( ~load_data_valid) begin
        load_data_valid         <= 1'b1;
      end else begin 
        load_data_valid         <= 1'b0;
      end end else begin
        load_data_valid         <= 1'b0;
      cycles_request <= cycles_request + 1'b1;
      end
    end else begin
      load_data_valid      <= 1'b0;
      cycles_request       <= 8'b0;
  end
end

reg [31:0] store_data;

integer i;
reg [3:0] web;
always @(*) begin
        if (store_wire) begin
        case(Single_Instruction) 
        {inst_SB    }:begin
          case(byte_address)
            2'b00:   begin web   <= 4'b0001; store_data <= {24'b0,storeData[7:0]};       end
            2'b01:   begin web   <= 4'b0010; store_data <= {16'b0,storeData[7:0], 8'b0}; end
            2'b10:   begin web   <= 4'b0100; store_data <= { 8'b0,storeData[7:0],16'b0}; end
            2'b11:   begin web   <= 4'b1000; store_data <= {      storeData[7:0],24'b0}; end
            default: begin web   <= 4'b0;    store_data <= 32'b0;                        end
          endcase// DMEM[word_address]   <= (DMEM[word_address] & ~(32'hFF << (byte_address * 8))) | ((storeData[7:0] & 8'hFF) << (byte_address * 8));
        end
        {inst_SH }:begin
          case(byte_address)
            2'b00,2'b01: begin web   <= 4'b0011; store_data <= {16'b0, storeData[15:0]      }; end 
            2'b10,2'b11: begin web   <= 4'b1100; store_data <= {       storeData[15:0],16'b0}; end
            default:     begin web   <= 4'b0;    store_data <= 32'b0;                          end
          endcase// DMEM[word_address]   <= (DMEM[word_address] & ~(32'hFFFF << (address[1] * 16))) | ((storeData[15:0] & 16'hFFFF) << (address[1] * 16));
        end
        {inst_SW }:begin
          web        <= 4'b1111; // DMEM[word_address]   <= storeData;
          store_data <= storeData;
        end
        endcase     
            end else begin
                web       <= 4'b0;
                store_data <= 32'b0;
            end end

      
bram_mem #(.MEM_DEPTH(mem_size) ) bram_mem (
  .clkb(clk),
  .addrb(address),
  .dinb(store_data),
  .doutb(raw_bram_data_word),
  .enb( enb),
  .rstb(1'b0),
  .web(web),
  .rstb_busy(rstb_busy) );

endmodule


module bram_mem #(  parameter MEM_DEPTH = 1096 ) (
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
    // First initialize memory to zero
    integer i;
    for (i = 0; i < MEM_DEPTH; i = i + 1) begin
      DMEM[i] = 32'h00000000;
    end
  end


  always @(posedge clkb) begin 
  if (rstb) begin
        for (i = 0; i < MEM_DEPTH; i = i + 1) begin
          DMEM[i] <= 32'h00000000;
        end 
        end
      
  end

reg [ 3:0] web_reg;  
reg        enb_reg;  
reg [31:0] addrb_reg; 
reg [31:0] data_in_reg;

  always @(posedge clkb) begin
    web_reg <= web;
    enb_reg <= enb;
    addrb_reg <= addrb;
    data_in_reg <= dinb;  

    if (rstb) begin
      doutb_reg <= 32'b0;
    end else if (enb) begin
      if (web != 4'b0000) begin
        if (web[0]) begin DMEM[word_address][ 7: 0]  <=  dinb[ 7: 0];   end 
        if (web[1]) begin DMEM[word_address][15: 8]  <=  dinb[15: 8];   end 
        if (web[2]) begin DMEM[word_address][23:16]  <=  dinb[23:16];   end 
        if (web[3]) begin DMEM[word_address][31:24]  <=  dinb[31:24];   end
      // end

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
  



integer M,n;
always @(negedge clkb) begin
      #120
      $write("\n\nDATA_MEM:  ");
      for (M=0; M < MEM_DEPTH; M=M+1) begin 
      if (DMEM[M] != 0) begin
    //   $write("   D%4d: %9h,", M, DMEM[M]);
      $write("   D%4h: %10h,", M*4, DMEM[M]);

      end

      end

      $write("\nDATA_MEM*: ");
      for (n=0; n < MEM_DEPTH; n=n+1) begin 
      if (DMEM[n] != 0) begin
      $write("   D%4h: %9d,", n*4, $signed(DMEM[n]));
      end
    end
    if (enb_reg) begin

    //   if (load_wire == 1 )begin
    //   $write("\nDATA LOADED:  D%4d: %9h",word_address,loadData);
    //   end

    //   if (stored_happened == 1 )begin
    //   $write("\nDATA STORED:  D%4d: %9h",last_stored_word_address,last_stored_data);
    //   end

    //   if ((load_wire == 1) && (load_data_valid==0) )begin
    //   // if ((load_wire == 1) && (load_data_valid==0) )begin
    // //   $write("\nDATA LOADED:  D%8h: %8d, word in Mem %d",address,loadData,word_address);
    //   $write("\nDATA LOAD REQUESTED, AVLIBLE NEXT CYCLE, SHOULD STALL AND BE LD data ZERO:  D%8h: %8h, word in Mem %d",address,loadData,word_address);
    //   end
     if ((web_reg == 0))begin
    //   $write("\nDATA LOADED:  D%8h: %8d, word in Mem %d",address,loadData,word_address);
      $write("\nDATA LOADED:  D%8h: %8h",addrb_reg,doutb_reg);
     end else begin

      // if (stored_happened == 1 )begin
    //   $write("\nDATA LOADED:  D%8h: %8h, word in Mem %d",address,loadData,word_address);

    //   $write("\nDATA STORED:  D%8h: %9d, word in Mem %d",last_stored_address,last_stored_data,last_stored_word_address);
      // $write("\nDATA STORED:  D%8h: %8h, word in Mem %d",addrb_reg,doutb_reg,last_stored_word_address);
      $write("\nDATA STORED:  D%8h: %8h",addrb_reg,doutb_reg);
      end
    $write("\n----------------------------------------------------------------------------------END\n");

    end
    end 


endmodule





