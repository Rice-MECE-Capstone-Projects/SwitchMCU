module dataMem #(  parameter mem_size = 4096 ) (
input wire clk,
input wire reset, 
  
input wire      [63:0] Single_Instruction,
input wire      [31:0] address,
input wire      [31:0] storeData, 
input wire      [31:0] Cycle_count, 
output wire     [31:0] loadData_w,
output wire     stall_mem_not_avalible,
output wire load_into_reg

);
    
    assign load_into_reg = load_wire;
    reg  [31:0] DMEM [0:mem_size-1];
    wire [29:0] word_address;
    wire [ 1:0] byte_address;
    reg         load_wire;
    reg         store_wire;
    reg         stall_mem_not_avalible_reg;
    reg load_data_valid, stall_needed;


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
    

always @(*) begin
    case(Single_Instruction)
        inst_LB,inst_LH,inst_LW,inst_LBU,inst_LHU    :begin  // one byte
            load_wire       <= 1'b1;
            store_wire      <= 1'b0;
            stall_needed    <= 1'b1;
        end
        inst_SB,inst_SH,inst_SW    :begin
            load_wire       <= 1'b0;
            store_wire      <= 1'b1;
            stall_needed    <= 1'b0;

        end
        default: begin 
            load_wire       <=  1'b0;
            store_wire      <=  1'b0;
            stall_needed    <= 1'b0;
            
        end
endcase
end


always @(posedge clk) begin
    
    if (load_wire) begin
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

end




integer i;

// Store data in memory operations
    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < mem_size; i = i + 1) begin
                // DMEM[i] <= i+i**2;
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



//ejahdbaw
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
      $write("\nDATA STORED:  D%8h: %8h, word in Mem %d\n",last_stored_address,last_stored_data,last_stored_word_address);
      end
    $write("\n----------------------------------------------------------------------------------END\n");

end

//MARKER AUTOMATED HERE END






endmodule
