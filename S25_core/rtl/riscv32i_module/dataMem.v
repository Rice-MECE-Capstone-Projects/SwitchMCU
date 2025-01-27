module dataMem #(  parameter mem_size = 4096 ) (
input wire clk,
input wire reset, 
  
input wire      [63:0] Single_Instruction,
input wire      [31:0] address,
input wire      [31:0] storeData, 
output wire     [31:0] loadData_w,
output wire LD_memory_avalible,
output wire SD_memory_avalible
);

    assign LD_memory_avalible = 1'b1;
    assign SD_memory_avalible = 1'b1;

    reg  [31:0] DMEM [0:mem_size-1];
    wire [11:0] word_address;
    wire [ 1:0] byte_address;
    reg  [ 3:0] load_wire;
    reg  [ 3:0] store_wire;
    wire [31:0] raw_word;
    reg [31:0] loadData;           // Data to be loaded
    // reg [31:0] storeData;           // Data to be loaded
    reg [31:0] storeaddress;           // Data to be loaded

    assign word_address = address[11:2];  
    assign byte_address = address[ 1:0];
    assign raw_word = DMEM[word_address];
    assign loadData_w = loadData;


always @(*) begin
    case(Single_Instruction)
        {inst_LB    }:begin  // one byte
            load_wire  <= 1'b1;
            store_wire <= 1'b0;
            loadData = {{24{DMEM[word_address][(byte_address * 8) + 7]}}, DMEM[word_address][(byte_address * 8) +: 8]};
        end
        {inst_LH    }:begin // load Half
            load_wire  <= 1'b1;
            store_wire <= 1'b0;
            loadData = {{16{DMEM[word_address][(address[1] * 16) + 15]}}, DMEM[word_address][(address[1] * 16) +: 16]};
        end
        {inst_LW    }:begin // load word
            load_wire  <= 1'b1;
            store_wire <= 1'b0;
            loadData   <= DMEM[word_address];

        end
        {inst_LBU   }:begin 
            load_wire  <= 1'b1;
            store_wire <= 1'b0;
            loadData = {24'b0, DMEM[word_address][(byte_address * 8) +: 8]};
        end
        {inst_LHU   }:begin 
            load_wire  <= 1'b1;
            store_wire <= 1'b0;
            loadData = {16'b0, DMEM[word_address][(address[1] * 16) +: 16]};
        end

        {inst_SB    }:begin
            load_wire  <= 1'b0;
            store_wire <= 1'b1;
        end
        {inst_SH    }:begin
            load_wire  <= 1'b0;
            store_wire <= 1'b1;
        end
        {inst_SW    }:begin
            load_wire  <= 1'b0;
            store_wire <= 1'b1;
        end
        default: begin 
            load_wire  <=  1'b0;
            store_wire <=  1'b0;
        end
endcase
end
    integer i;

    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < mem_size; i = i + 1) begin
                DMEM[i] <= i+ 32'hFFFF0000;
                // DMEM[i] <= 32'b0;
            end end else if (store_wire) begin

        case(Single_Instruction) 
        {inst_SB    }:begin
            // loadData = {DMEM[word_address][(byte_address * 8) +: 8]};
        DMEM[word_address] <= (DMEM[word_address] & ~(32'hFF << (byte_address * 8))) | 
                                  ((storeData[7:0] & 8'hFF) << (byte_address * 8));
        end
        {inst_SH    }:begin
        DMEM[word_address] <= (DMEM[word_address] & ~(32'hFFFF << (address[1] * 16))) | 
                              ((storeData[15:0] & 16'hFFFF) << (address[1] * 16));
        end
        {inst_SW    }:begin
        DMEM[word_address] <= storeData;
        end
        // default: begin 
        //     error <=1;
        // end
        endcase
                
                // DMEM[word_address] <= storeData;
            end

        end

 
endmodule
