// `define SET_MEM_REQ(i_stallreq, i_state, i_mem_re, i_mem_we, i_mem_addr_o, i_mem_data_o) \
// 	stallreq   = i_stallreq; \
// 	state      = i_state; \
// 	mem_re     = i_mem_re; \
// 	mem_we     = i_mem_we; \
// 	mem_addr_o = i_mem_addr_o; \
// 	mem_data_o = i_mem_data_o;

module dataMem #(  parameter mem_size = 4096 ) (
input wire clk,
input wire reset, 
  
input wire      [63:0] Single_Instruction,
input wire      [31:0] address,
input wire      [31:0] storeData, 
input wire      [31:0] pc_i,
output wire     [31:0] loadData_w,
output wire     stall_mem_not_avalible,
output wire load_into_reg

);
    
    assign load_into_reg = load_wire;
    reg  [31:0] DMEM [0:mem_size-1];
    wire [29:0] word_address;
    wire [ 1:0] byte_address;
    // reg         load_wire;
    // reg         store_wire;
    reg         stall_mem_not_avalible_reg;
    reg load_data_valid;

    wire stall_needed,store_wire,load_wire;
    // reg load_data_valid, stall_needed;


    assign stall_mem_not_avalible = stall_needed && ~load_data_valid;

    wire [31:0] raw_word;
    reg [31:0] loadData;               // Data to be loaded
    reg [31:0] storeaddress;           // Data to be loaded

    reg [31:0] last_stored_data,last_stored_word_address,last_stored_address;
    reg [31:0] last_loaded_data,last_loaded_address;
    reg stored_happened,loaded_happened;

    assign word_address = address[31:2];  
    assign byte_address = address[ 1:0];
    assign raw_word = DMEM[word_address];
    assign loadData_w = loadData;
    



assign load_wire  = ((Single_Instruction == inst_LB)  ||
                    (Single_Instruction == inst_LH)  ||
                    (Single_Instruction == inst_LW)  ||
                    (Single_Instruction == inst_LBU) ||
                    (Single_Instruction == inst_LHU));

assign stall_needed   = ((Single_Instruction == inst_LB)  ||
                    (Single_Instruction == inst_LH)  ||
                    (Single_Instruction == inst_LW)  ||
                    (Single_Instruction == inst_LBU) ||
                    (Single_Instruction == inst_LHU));
                    
assign store_wire     = ((Single_Instruction == inst_SB) ||
                    (Single_Instruction == inst_SH) ||
                    (Single_Instruction == inst_SW));


// localparam [1:0] S_IDLE     = 2'b00,
//                  S_WAIT_BUS = 2'b01;

//     reg [1:0] state, next_state;



//     always @(posedge clk) begin
//         if(reset) begin
//             state      <= S_IDLE;
//         end
//         else begin
//             state      <= next_state;
//         end
//     end

    // always @(*) begin
    //     case(state)
    //         S_IDLE: begin
    //             if((~load_request_met)&&(store_wire|load_wire)) begin
    //                 next_state = S_WAIT_BUS;
    //             end



    //         end
    //         S_WAIT_BUS: begin
    //             if(bus_ready == 1'b1) begin
    //                 next_state = S_IDLE;
    //             end
    //         end
    //         default: begin
    //             next_state = S_IDLE;
    //         end
    //     endcase
    // end


    reg [31:0] cycles_request; 
    reg [31:0] retrive_cycles;
    
    initial begin 
        retrive_cycles <= 4;
    end 

    reg load_request_met;
    always @(posedge clk) begin
        if (reset) begin
            cycles_request  <= 8'b0;
            load_request_met  <= 1'b0;
            loadData                <= 0;
            load_data_valid         <= 1'b0;
        end else if (load_wire) begin
            if (cycles_request >= retrive_cycles) begin
                // load_request_met <= 1'b1;
                // ~load happens here    
            // if (load_request_met && ~load_data_valid) begin
                if ( ~load_data_valid) begin
                case(Single_Instruction)
                    {inst_LB    }:begin  // one byte
                        loadData                <= {{24{DMEM[word_address][(byte_address * 8) + 7]}}, DMEM[word_address][(byte_address * 8) +: 8]};
                        load_data_valid         <= 1'b1;
                    end
                    {inst_LH    }:begin // load Half
                        loadData                <= {{16{DMEM[word_address][(address[1] * 16) + 15]}}, DMEM[word_address][(address[1] * 16) +: 16]};
                        load_data_valid         <= 1'b1;
                    end
                    {inst_LW    }:begin // load word
                        loadData                <= DMEM[word_address];
                        load_data_valid         <= 1'b1;
                    end
                    {inst_LBU   }:begin 
                        loadData                <= {24'b0, DMEM[word_address][(byte_address * 8) +: 8]};
                        load_data_valid         <= 1'b1;
                    end
                    {inst_LHU   }:begin 
                        loadData                <= {16'b0, DMEM[word_address][(address[1] * 16) +: 16]};
                        load_data_valid         <= 1'b1;
                    end
                    default: begin 
                        loadData                <= 0;
                        load_data_valid         <= 1'b0;
                    end 
                endcase end else begin 
                        loadData                <= 0;
                        load_data_valid         <= 1'b0;
                end

            end else begin
                loadData                <= 0;
                load_data_valid         <= 1'b0;
                cycles_request <= cycles_request + 1'b1;
                load_request_met <= 1'b0;
            end
        end else begin
            loadData                <= 0;
            load_data_valid         <= 1'b0;
            cycles_request       <= 8'b0;
            load_request_met     <= 1'b0;
        end
    end








integer i;

// Store data in memory operations
    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < mem_size; i = i + 1) begin
                DMEM[i] <= 32'h0;

            end end else if (store_wire) begin
        case(Single_Instruction) 
        {inst_SB    }:begin
        DMEM[word_address]   <= (DMEM[word_address] & ~(32'hFF << (byte_address * 8))) | ((storeData[7:0] & 8'hFF) << (byte_address * 8));
        end
        {inst_SH    }:begin
        DMEM[word_address]   <= (DMEM[word_address] & ~(32'hFFFF << (address[1] * 16))) | ((storeData[15:0] & 16'hFFFF) << (address[1] * 16));
        end
        {inst_SW    }:begin
        DMEM[word_address]   <= storeData;
        end
        endcase     
            end
        end

 
     always @(*) begin
        if (store_wire) begin
        case(Single_Instruction) 
        {inst_SB    }:begin
            // loadData = {DMEM[word_address][(byte_address * 8) +: 8]};
        last_stored_word_address <= word_address;
        last_stored_address <= address;
        last_stored_data    <= (DMEM[word_address] & ~(32'hFF << (byte_address * 8))) | ((storeData[7:0] & 8'hFF) << (byte_address * 8));
        stored_happened      <= 1;
        end
        {inst_SH    }:begin
        last_stored_data    <= (DMEM[word_address] & ~(32'hFFFF << (address[1] * 16))) | ((storeData[15:0] & 16'hFFFF) << (address[1] * 16));
        last_stored_word_address <= word_address;
        last_stored_address <= address;
        stored_happened      <= 1;
        end
        {inst_SW    }:begin
        last_stored_data    <= storeData;
        last_stored_word_address <= word_address;
        last_stored_address <= address;
        stored_happened      <= 1;
        end
        default: begin 
        last_stored_word_address <= 0;
        last_stored_address      <= 0;
        last_stored_data    <= 0; 
        stored_happened     <= 0;
                end
        endcase
        end else begin
        last_stored_address <= 0;
        last_stored_word_address <= 0;
        last_stored_data    <= 0; 
        stored_happened     <= 0;
        end

        end



//MARKER AUTOMATED HERE START

// DEBUG BELOW
integer M,n;
always @(negedge clk) begin
      #120
      $write("\n\nDATA_MEM:  ");
      for (M=0; M < mem_size; M=M+1) begin 
      if (DMEM[M] != 0) begin
    //   $write("   D%4d: %9h,", M, DMEM[M]);
      $write("   D%4h: %10h,", M*4, DMEM[M]);

      end

      end

      $write("\nDATA_MEM*: ");
      for (n=0; n < mem_size; n=n+1) begin 
      if (DMEM[n] != 0) begin
      $write("   D%4h: %9d,", n*4, $signed(DMEM[n]));
      end
    end

    //   if (load_wire == 1 )begin
    //   $write("\nDATA LOADED:  D%4d: %9h",word_address,loadData);
    //   end

    //   if (stored_happened == 1 )begin
    //   $write("\nDATA STORED:  D%4d: %9h",last_stored_word_address,last_stored_data);
    //   end

      if ((load_wire == 1) && (load_data_valid==0) )begin
    //   $write("\nDATA LOADED:  D%8h: %8d, word in Mem %d",address,loadData,word_address);
      $write("\nDATA LOAD REQUESTED, AVLIBLE NEXT CYCLE, SHOULD STALL AND BE LD data ZERO:  D%8h: %8h, word in Mem %d",address,loadData,word_address);
      end
     if ((load_wire == 1) && (load_data_valid==1) )begin
    //   $write("\nDATA LOADED:  D%8h: %8d, word in Mem %d",address,loadData,word_address);
      $write("\nDATA LOADED:  D%8h: %8h, word in Mem %d",address,loadData,word_address);
      end

      if (stored_happened == 1 )begin
    //   $write("\nDATA LOADED:  D%8h: %8h, word in Mem %d",address,loadData,word_address);

    //   $write("\nDATA STORED:  D%8h: %9d, word in Mem %d",last_stored_address,last_stored_data,last_stored_word_address);
      $write("\nDATA STORED:  D%8h: %8h, word in Mem %d",last_stored_address,last_stored_data,last_stored_word_address);
      end
    $write("\n----------------------------------------------------------------------------------END\n");

end

//MARKER AUTOMATED HERE END






endmodule
