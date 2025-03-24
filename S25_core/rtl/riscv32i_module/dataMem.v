
// `define SET_MEM_REQ(i_stallreq, i_state, i_mem_re, i_mem_we, i_mem_addr_o, i_mem_data_o) \
// 	stallreq   = i_stallreq; \
// 	state      = i_state; \
// 	mem_re     = i_mem_re; \
// 	mem_we     = i_mem_we; \
// 	mem_addr_o = i_mem_addr_o; \
// 	mem_data_o = i_mem_data_o;

module dataMem (
input wire clk,
input wire reset, 
  
input wire      [63:0] Single_Instruction,
input wire      [31:0] address_i,
input wire      [31:0] storeData, 
input wire      [31:0] pc_i,
input wire      [31:0] memory_offset,
output wire     [31:0] loadData_w,
output wire     [31:0] final_value, // debug port not in actual FPGA
output wire     stall_mem_not_avalible,
output wire      load_into_reg,



/// BRAM PORTS
    output wire        data_mem_clkb,
    output wire        data_mem_enb,
    output wire        data_mem_rstb,
    output wire [3:0 ] data_mem_web,
    output wire [31:0] data_mem_addrb,
    output wire [31:0] data_mem_dinb,
    input  wire        data_mem_rstb_busy,
    input  wire [31:0] data_mem_doutb
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
    wire [31:0] raw_bram_data_word,raw_bram_data_word_end;          

    reg [31:0] last_stored_data,last_stored_word_address,last_stored_address;
    reg [31:0] last_loaded_data,last_loaded_address;
    reg stored_happened,loaded_happened;

    wire [15:0] raw_data_byte_LHU;

    wire [31:0] address;

    reg [31:0] cycles_request; 
    reg [31:0] retrive_cycles;
    wire rstb_busy;

    wire enb;
    reg [3:0] web;
    wire [ 7:0] raw_data_byte_LBU;
    reg [31:0] store_data;

    assign address = address_i - memory_offset;

    assign data_mem_clkb      =  clk;
    assign data_mem_addrb     = address;
    assign data_mem_dinb      = store_data;
    assign data_mem_enb       = enb;
    assign data_mem_rstb      = 1'b0;
    assign data_mem_web       = web;
    assign raw_bram_data_word = data_mem_doutb ;
    assign rstb_busy          = data_mem_rstb_busy;







    initial begin 
        retrive_cycles <= 0;
        store_data <= 32'b0;

    end 

    assign load_into_reg = load_wire;
    assign stall_mem_not_avalible = stall_needed && ~load_data_valid;
    // assign address = address_i;
    assign word_address = address[31:2];  
    assign byte_address = address[ 1:0];
    // assign raw_word = DMEM[word_address];
    assign loadData_w = loadData;




assign load_wire  =     ((Single_Instruction == `inst_LB)  ||
                         (Single_Instruction == `inst_LH)  ||
                         (Single_Instruction == `inst_LW)  ||
                         (Single_Instruction == `inst_LBU) ||
                         (Single_Instruction == `inst_LHU));

assign stall_needed   = ((Single_Instruction == `inst_LB)  ||
                        (Single_Instruction == `inst_LH)  ||
                        (Single_Instruction == `inst_LW)  ||
                        (Single_Instruction == `inst_LBU) ||
                        (Single_Instruction == `inst_LHU));
                    
assign store_wire    = ((Single_Instruction == `inst_SB) ||
                        (Single_Instruction == `inst_SH) ||
                        (Single_Instruction == `inst_SW));
assign enb = store_wire | load_wire;

assign loadData_w =   loadData;


assign raw_data_byte_LBU = ((byte_address == 2'b00) ? raw_bram_data_word[7:0]   :
                            (byte_address == 2'b01) ? raw_bram_data_word[15:8]  :
                            (byte_address == 2'b10) ? raw_bram_data_word[23:16] :
                            (byte_address == 2'b11) ? raw_bram_data_word[31:24] : 8'b0 );
        
assign raw_data_byte_LHU = ((byte_address == 2'b00) ? raw_bram_data_word[15:0]   : 
                            (byte_address == 2'b01) ? raw_bram_data_word[23:8]   : 
                            (byte_address == 2'b10) ? raw_bram_data_word[31:16]  : 
                            16'b0); 

always @(*) begin
  if (load_data_valid) begin  
    case(Single_Instruction)
        `inst_LW :begin 
          loadData <= raw_bram_data_word;
        end
        `inst_LB :begin  
          loadData <= { {24{raw_data_byte_LBU[7]}}, raw_data_byte_LBU };
        end
        `inst_LH :begin  
          loadData <= { {16{raw_data_byte_LHU[15]}}, raw_data_byte_LHU };
        end     
        `inst_LBU :begin  
          loadData <= {24'b0,raw_data_byte_LBU};
        end
        `inst_LHU :begin  
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


integer i;
always @(*) begin
        if (store_wire) begin
        case(Single_Instruction) 
        {`inst_SB    }:begin
          case(byte_address)
            2'b00:   begin web   <= 4'b0001; store_data <= {24'b0,storeData[7:0]};       end
            2'b01:   begin web   <= 4'b0010; store_data <= {16'b0,storeData[7:0], 8'b0}; end
            2'b10:   begin web   <= 4'b0100; store_data <= { 8'b0,storeData[7:0],16'b0}; end
            2'b11:   begin web   <= 4'b1000; store_data <= {      storeData[7:0],24'b0}; end
            default: begin web   <= 4'b0;    store_data <= 32'b0;                        end
          endcase// DMEM[word_address]   <= (DMEM[word_address] & ~(32'hFF << (byte_address * 8))) | ((storeData[7:0] & 8'hFF) << (byte_address * 8));
        end
        {`inst_SH }:begin
          case(byte_address)
            2'b00,2'b01: begin web   <= 4'b0011; store_data <= {16'b0, storeData[15:0]      }; end 
            2'b10,2'b11: begin web   <= 4'b1100; store_data <= {       storeData[15:0],16'b0}; end
            default:     begin web   <= 4'b0;    store_data <= 32'b0;                          end
          endcase// DMEM[word_address]   <= (DMEM[word_address] & ~(32'hFFFF << (address[1] * 16))) | ((storeData[15:0] & 16'hFFFF) << (address[1] * 16));
        end
        {`inst_SW }:begin
          web        <= 4'b1111; // DMEM[word_address]   <= storeData;
          store_data <= storeData;
        end
        endcase     
            end else begin
                web       <= 4'b0;
                store_data <= 32'b0;
            end end


// used for final endpoint      
end_write end_write (
  .final_value(final_value),// debug port not in actual FPGA
  .clkb(clk),
  .addrb(address),
  .dinb(store_data),
  .doutb(raw_bram_data_word_end),
  .enb( enb),
  .rstb(1'b0),
  .web(web),
  .rstb_busy(rstb_busy) );

endmodule




module end_write (
    input  wire        clkb,
    input  wire        enb,
    input  wire        rstb,
    input  wire [3:0 ] web,
    input  wire [31:0] addrb,
    input  wire [31:0] dinb,
    output wire        rstb_busy,
    output wire [31:0] doutb,
    output wire [31:0] final_value

);

  reg [31:0] DMEM;
  reg [31:0] doutb_reg;
  reg [29:0] addrb_word;
  wire [29:0] word_address;
  wire [ 1:0] byte_address;

  assign doutb = doutb_reg;
  assign rstb_busy = 0;
  assign word_address = addrb[31:2];  
  assign byte_address = addrb[ 1:0];
  initial begin
      DMEM <= 32'h00000000;
  end
  assign final_value           = DMEM;
  always @(posedge clkb) begin
    if (rstb) begin
      doutb_reg <= 32'b0;
      DMEM <= 32'h00000000;
    end else if ((enb==1'b1) &&( word_address == 29'b0)) begin
      if (web != 4'b0000) begin
        if (web[0]) begin DMEM[ 7: 0]  <=  dinb[ 7: 0];   end 
        if (web[1]) begin DMEM[15: 8]  <=  dinb[15: 8];   end 
        if (web[2]) begin DMEM[23:16]  <=  dinb[23:16];   end 
        if (web[3]) begin DMEM[31:24]  <=  dinb[31:24];   end 
       doutb_reg <= {
          (web[3] ? dinb[31:24] : DMEM[31:24]),
          (web[2] ? dinb[23:16] : DMEM[23:16]),
          (web[1] ? dinb[15: 8] : DMEM[15: 8]),
          (web[0] ? dinb[ 7: 0] : DMEM[ 7: 0])
        };
      end else begin
        doutb_reg <= DMEM;
      end
    end
  end

endmodule


