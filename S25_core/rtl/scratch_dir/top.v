

module instruction_memory (
    input  wire         clk,
    input  wire         reset,
    input  wire [31:0]  pc_i,
    input  wire         pc_i_valid,
    output wire         STALL_if_not_ready_w,
    output wire [31:0]   instruction_o_w,
    input wire         stall_i,

    // Memory interface


    output wire           data_req_o_w,
    output wire  [31:0]   data_addr_o_w,
    output wire           data_we_o_w,
    output wire  [3:0]    data_be_o_w,
    output wire  [31:0]   data_wdata_o_w,


    input  wire [31:0]  data_rdata_i,
    input  wire         data_rvalid_i,
    input  wire         data_gnt_i
);
    
reg          data_req_o;
reg [31:0]   data_addr_o;
reg          data_we_o;
reg [3:0]    data_be_o;
reg [31:0]   data_wdata_o;

    reg          STALL_if_not_ready;
    reg [31:0]   instruction_o;

    assign data_we_o_w      =   32'b0; // We are not writing data, so this is always 0
    assign data_be_o_w      =   4'b1111; // We always want the entire word;
    assign data_wdata_o_w   =   32'b0; // We are not writing data, so this is always 0


    assign data_req_o_w =   data_req_o  ;
    assign data_addr_o_w =  data_addr_o ;

    assign STALL_if_not_ready_w = STALL_if_not_ready;
    assign instruction_o_w = instruction_o;

    localparam [1:0] S_IDLE       = 2'b00,
                     S_WAIT_GNT   = 2'b01,
                     S_WAIT_RVALID= 2'b10;


    reg [1:0] current_state, next_state;

    reg [31:0] pc_decode;
    reg [31:0] current_PC_wating_rvalid;

    always @(*) begin
        case (current_state)
            S_IDLE: begin
                instruction_o   <= 32'h00000013;
                if (pc_i_valid) begin
                    data_req_o         <= 1'b1;        
                    data_addr_o        <= pc_i;        
                if (data_gnt_i) begin
                    STALL_if_not_ready <= 1'b0;
                    next_state         <= S_WAIT_RVALID;
                end else begin 
                    STALL_if_not_ready       <= 1'b1;
                    next_state               <= S_WAIT_GNT;
                end 
                end else begin 
                    data_req_o          <= 1'b1;        
                    data_addr_o         <= 32'b0;  
                    STALL_if_not_ready  <= 1'b0;
                    next_state          <= S_IDLE;
            end

            end
            
            S_WAIT_GNT: begin
                instruction_o   <= 32'h00000013;
                data_req_o                   <= 1'b1;
                data_addr_o                  <= pc_i;  
                STALL_if_not_ready           <= 1'b1;
                if (data_gnt_i) begin 
                    STALL_if_not_ready       <= 1'b0;
                    next_state               <= S_WAIT_RVALID;
                end 
                end

            S_WAIT_RVALID: begin
                if (data_rvalid_i) begin
                    instruction_o <= data_rdata_i;
                    pc_decode     <= current_PC_wating_rvalid;

                    if (pc_i_valid) begin
                        data_req_o         <= 1'b1;        
                        data_addr_o        <= pc_i;        
                        STALL_if_not_ready <= 1'b0;

                        if (data_gnt_i) begin
                            STALL_if_not_ready <= 1'b0;
                            next_state         <= S_WAIT_RVALID;
                        end 
                        else begin  
                            STALL_if_not_ready       <= 1'b1;
                            next_state               <= S_WAIT_GNT;
                        end 
                    end else begin 
                        STALL_if_not_ready       <= 1'b0;
                        next_state               <= S_IDLE;
                    end 
                    
                end 
                else begin 
                    instruction_o               <= 32'h00000013;
                    data_req_o                  <= 1'b0;
                    data_addr_o                 <= pc_i;        
                    STALL_if_not_ready          <= 1'b1;
                    next_state                  <= S_WAIT_RVALID;
                end
            end

            default: begin
                next_state <= S_IDLE;
            end
        endcase
    
    end

    always @(posedge clk) begin
        if (reset) begin
            current_state <= S_IDLE;
            instruction_o <= 32'b0;
        end
        else if (~stall_i) begin
            current_state <= next_state;

            if ((next_state == S_WAIT_RVALID) && (current_state != S_WAIT_RVALID)) begin
                current_PC_wating_rvalid <= pc_i; 
            end   

        end


    end




endmodule


