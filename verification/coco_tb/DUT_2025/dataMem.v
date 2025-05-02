
// `define SET_MEM_REQ(i_stallreq, i_state, i_mem_re, i_mem_we, i_mem_addr_o, i_mem_data_o) \
// 	stallreq   = i_stallreq; \
// 	state      = i_state; \
// 	mem_re     = i_mem_re; \
// 	mem_we     = i_mem_we; \
// 	mem_addr_o = i_mem_addr_o; \
// 	mem_data_o = i_mem_data_o;

`include "./DUT_2025/params.vh"


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
output wire     load_into_reg,


    // Memory interface
    output wire           data_clk,
    output wire           data_req_o,
    output wire  [31:0]   data_addr_o,
    output wire           data_we_o,
    output wire  [3:0]    data_be_o,
    output wire  [31:0]   data_wdata_o,
    input  wire [31:0]    data_rdata_i,
    input  wire           data_rvalid_i,
    input  wire           data_gnt_i
);
    assign data_clk = clk;
    wire [29:0] word_address;
    wire [ 1:0] byte_address;
    reg         stall_mem_not_avalible_reg;
    wire load_data_valid;
    wire store_wire,load_wire;
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

    reg [31:0] cycles_request; 
    reg [31:0] retrive_cycles;
    wire rstb_busy;

    wire enb;
    reg [3:0] web;
    wire [ 7:0] raw_data_byte_LBU;
    reg [31:0] store_data;


    initial begin 
        retrive_cycles <= 2; // number of stall cycles
        store_data    <= 32'b0;
    end 


  // inputs assigned to logic
    assign raw_bram_data_word = data_rdata_i;
    // assign rstb_busy          = data_mem_rstb_busy;

  //Outputs
    assign load_into_reg      = load_wire;
    assign stall_mem_not_avalible = fsm_mem_stall;

assign    data_req_o   = data_req_o_internal;
assign    data_addr_o  = address;
assign    data_we_o    = data_we_o_internal;
assign    data_be_o    = data_be_o_internal;
assign    data_wdata_o = store_data;





//--|control data|--\\\
    assign address = address_i - memory_offset;
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
assign store_wire    = ((Single_Instruction == `inst_SB) ||
                        (Single_Instruction == `inst_SH) ||
                        (Single_Instruction == `inst_SW));

// assign enb = store_wire | load_wire;

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
            end 
end


// Memory interface
reg           data_req_o_internal;
reg [31:0]    data_addr_o_internal;
wire          data_we_o_internal;
reg [3:0]     data_be_o_internal;
reg [31:0]    data_wdata_o_internal;
reg [31:0]    data_rdata_i_internal;
reg           data_rvalid_i_internal;
reg           data_gnt_i_internal;


assign data_we_o_internal = store_wire & data_req_o_internal;
reg [3:0] data_out; // Output should be reg type inside always block
wire [1:0] select;

assign select = data_req_o_internal ? {store_wire, load_wire} : 2'b00;

always @(*) begin
  case (select)
    2'b00:   data_be_o_internal =      4'b0;
    2'b01:   data_be_o_internal =   4'b1111; // load
    2'b10:   data_be_o_internal =       web; //store
    2'b11:   data_be_o_internal =   4'bZZZZ; // ERROR??? should never reach
    default: data_be_o_internal =      4'b0; // Optional default case
  endcase
end
// FSM for memory request
// NOTE that the FSM will not accept two request at the same time
    localparam [1:0] S_IDLE         = 2'b00, // Accepts new requests from EXEC
                     S_WAIT_GNT     = 2'b01, // Waiting for request to be taken by memory (recognized by mem), no new request from EXC 
                     S_WAIT_RVALID  = 2'b10; // waiting for request to be satsisfied, if satsitisfied can accept new request from EXEC
                    //  S_ABORT_RVALID = 2'b11; No Abort, only reset
    reg [1:0] current_state, next_state;
    reg [31:0] pc_decode;
    reg [31:0] current_PC_wating_rvalid, instruction_o_backup;
    reg [31:0] PC_requested;
    reg fsm_mem_stall;
    wire accept_new_req;

    assign load_data_valid = (current_state == S_WAIT_RVALID) && data_rvalid_i;

    assign accept_new_req = (load_wire || store_wire) && ~load_data_valid;

    always @(*) begin

        case (current_state)
        S_IDLE: begin
            if (accept_new_req) begin
                data_req_o_internal   = 1'b1;
                data_addr_o_internal  = address;
                fsm_mem_stall   = 1; // stall for load or store (because of store you need rvalid in next or upcoming cycles)
                  if (data_gnt_i) begin
                      next_state      = S_WAIT_RVALID;
                  end else begin      
                      next_state      = S_WAIT_GNT;
                  end                 
            end else begin            
                data_req_o_internal   = 1'b0;
                fsm_mem_stall         = 0; 
                data_addr_o_internal  = 0;
                next_state            = S_IDLE;
            end
        end

        S_WAIT_GNT: begin
              data_req_o_internal     = 1'b1;
              data_addr_o_internal    = address;
              fsm_mem_stall           = 1; // Stall because next cycle you need to wait for rvalid 
              if (data_gnt_i) begin   
                next_state            = S_WAIT_RVALID;
              end else begin          
                next_state            = S_WAIT_GNT;
              end
        end    

        S_WAIT_RVALID: begin
            data_req_o_internal         = 1'b0; 
            data_addr_o_internal        = 32'h0;
            if (data_rvalid_i) begin  // if grant satisfied
              fsm_mem_stall             = 0; 
              next_state                = S_IDLE;
            end else begin // else rvalid, wait 
              fsm_mem_stall             = 1; 
              next_state                = S_WAIT_RVALID;
            end
        end

        default: begin
            next_state = S_IDLE;
        end
  
    endcase

    end
    




always @(posedge clk) begin 
        if (reset) begin
            current_state        <= S_IDLE;
        end else begin 
            current_state <= next_state; // Update the state
        //     case(current_state)
        //     S_WAIT_RVALID: begin
        //         if (pc_i_valid && stall_i_EXEC && ~abort_rvalid) begin 
        //         instruction_o_backup         <= data_rdata_i; // Store the requested PC   
        //         saved_instruction_from_stall <= 1'b1; // Store the requested PC   
        //         end 
        //     end
        // endcase
  end 
end


// used for final endpoint      
end_write end_write (
    .clkb(clk),
    .rstb(reset),
    .data_req_o(data_req_o),
    .data_addr_o(data_addr_o_internal),
    .data_we_o(data_we_o_internal),
    .data_be_o(data_be_o_internal),
    .data_wdata_o(data_wdata_o),
    .data_gnt_i(data_gnt_i),
    .final_value(final_value)
      );

endmodule



module end_write (

    input  wire            clkb,
    input  wire            rstb,

    input wire             data_req_o,
    input wire  [31:0]     data_addr_o,
    input wire             data_we_o,
    input wire  [3:0]      data_be_o,
    input wire  [31:0]     data_wdata_o,
    input  wire            data_gnt_i,
    
    output wire [31:0]     final_value
);

  wire        enb;
  // wire        rstb;
  wire [3:0 ] web;
  // wire [31:0] final_value;

  reg [31:0] DMEM;
  reg [31:0] doutb_reg;
  wire [29:0] word_address;

  assign word_address = data_addr_o[31:2];  
  initial begin
      DMEM <= 32'h00000000;
  end

  assign enb = data_req_o && data_gnt_i;
  assign web = data_we_o ? data_be_o: 4'b0;
  assign final_value = DMEM;

  always @(posedge clkb) begin
    if (rstb) begin
      doutb_reg <= 32'b0;
      DMEM <= 32'h00000000;
    end else if ((enb==1'b1) &&( word_address == 29'b0)) begin
      if (web != 4'b0000) begin
        if (web[0]) begin DMEM[ 7: 0]  <=  data_wdata_o[ 7: 0];   end 
        if (web[1]) begin DMEM[15: 8]  <=  data_wdata_o[15: 8];   end 
        if (web[2]) begin DMEM[23:16]  <=  data_wdata_o[23:16];   end 
        if (web[3]) begin DMEM[31:24]  <=  data_wdata_o[31:24];   end 
       doutb_reg <= {
          (web[3] ? data_wdata_o[31:24] : DMEM[31:24]),
          (web[2] ? data_wdata_o[23:16] : DMEM[23:16]),
          (web[1] ? data_wdata_o[15: 8] : DMEM[15: 8]),
          (web[0] ? data_wdata_o[ 7: 0] : DMEM[ 7: 0])
        };
      end else begin
        doutb_reg <= DMEM;
      end
    end
  end

endmodule
