// module ins_mem (
//     input  wire        clk,
//     input  wire        reset,
//     input  wire [31:0] pc_i,
//     input  wire        enb,
//     output wire [31:0] instruction_o,

// // BRAM ports
//     output wire        ins_mem_clkb,
//     output wire        ins_mem_enb,
//     output wire        ins_mem_rstb,
//     output wire [3:0 ] ins_mem_web,
//     output wire [31:0] ins_mem_addrb,
//     output wire [31:0] ins_mem_dinb,
//     input  wire        ins_mem_rstb_busy,
//     input  wire [31:0] ins_mem_doutb

// );
//     wire  [31:0] instruction;
//     wire rstb_busy;
//     assign instruction_o = reset ?  32'h00000013 : instruction ;
    
//     assign ins_mem_clkb      =    clk;            
//     assign ins_mem_enb       =    enb;             
//     assign ins_mem_rstb      =     1'b0; 
//     assign ins_mem_web       =     4'b0; 
//     assign ins_mem_addrb     =    pc_i; 
//     assign ins_mem_dinb      =    32'b0; 
//         // ins_mem_rstb_busy =    rstb_busy   ;               
//         // ins_mem_dout      =    instruction ;
//     assign  rstb_busy = ins_mem_rstb_busy;              
//     assign  instruction = ins_mem_doutb;

// endmodule




// wire output         data_req_o,
// wire output [31:0]  data_addr_o,
// wire output         data_we_o,
// wire output [ 3:0]  data_be_o,
// wire output [31:0]  data_wdata_o,

// input wire [31:0]   data_rdata_i,
// input wire          data_rvalid_i,
// input wire          data_gnt_i





module ins_mem (
    input  wire         clk,
    input  wire         reset,
    input  wire [31:0]  pc_i,
    input  wire         pc_i_valid,
    output wire         STALL_if_not_ready_w, 
    output wire         STALL_ID_not_ready_w, 
    output wire [31:0]   instruction_o_w,
    input wire          stall_i,

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
    reg          STALL_ID_not_ready;
    reg [31:0]   instruction_o;

    assign data_we_o_w      =   32'b0; // We are not writing data, so this is always 0
    assign data_be_o_w      =   4'b1111; // We always want the entire word;
    assign data_wdata_o_w   =   32'b0; // We are not writing data, so this is always 0


    assign data_req_o_w =    data_req_o;
    assign data_addr_o_w =  data_addr_o ;

    assign STALL_if_not_ready_w = STALL_if_not_ready;
    assign STALL_ID_not_ready_w = STALL_ID_not_ready;
    assign instruction_o_w = (prev_cycle_stall_i && ~prev_cycle_stall_ID) ? instruction_o_backup : instruction_o; // Default instruction if reset is high

    localparam [1:0] S_IDLE       = 2'b00,
                     S_WAIT_GNT   = 2'b01,
                     S_WAIT_RVALID= 2'b10;


    reg [1:0] current_state, next_state;

    reg [31:0] pc_decode;
    reg [31:0] current_PC_wating_rvalid, instruction_o_backup;

    always @(*) begin
        // 
        case (current_state)
            S_IDLE: begin
                instruction_o   <= 32'h00000013;
                if (pc_i_valid) begin
                    data_req_o         <= 1'b1;        
                    data_addr_o        <= pc_i;        
                if (data_gnt_i) begin
                    STALL_if_not_ready <= 1'b0;
                    STALL_ID_not_ready <= 1'b0;
                    next_state         <= S_WAIT_RVALID;
                end else begin 
                    STALL_if_not_ready       <= 1'b1;
                    STALL_ID_not_ready       <= 1'b0;

                    next_state               <= S_WAIT_GNT;
                end 
                end else begin 
                    data_req_o          <= 1'b0;        
                    data_addr_o         <= 32'b0;  
                    STALL_if_not_ready  <= 1'b0;
                    STALL_ID_not_ready  <= 1'b0;
                    next_state          <= S_IDLE;
            end

            end
            
            S_WAIT_GNT: begin
                // instruction_o   <= 32'h00000013;
                data_req_o                   <= 1'b1;
                data_addr_o                  <= pc_i;  
                if (data_gnt_i) begin 
                    STALL_if_not_ready       <= 1'b0;
                    STALL_ID_not_ready       <= 1'b0;
                    next_state               <= S_WAIT_RVALID;
                end else begin 
                    STALL_if_not_ready       <= 1'b1;
                    STALL_ID_not_ready       <= 1'b0;
                    next_state               <= S_WAIT_GNT; 
                end
            end 

            S_WAIT_RVALID: begin
                if (data_rvalid_i) begin
                    instruction_o <= data_rdata_i;
                    pc_decode     <= current_PC_wating_rvalid;

                    if (pc_i_valid) begin // accpet another request after granting
                        data_req_o         <= 1'b1;        
                        data_addr_o        <= pc_i;        
                        // STALL_if_not_ready <= 1'b0;
                        // STALL_ID_not_ready <= 1'b0;
            

                        if (data_gnt_i) begin
                            STALL_if_not_ready <= 1'b0;
                            STALL_ID_not_ready <= 1'b0;
                            next_state         <= S_WAIT_RVALID;
                        end 
                        else begin  // new request but no gnt recognized
                            STALL_if_not_ready       <= 1'b1;
                            STALL_ID_not_ready       <= 1'b0;
                            next_state               <= S_WAIT_GNT;
                        end 
                    end else begin // no new request
                        STALL_if_not_ready       <= 1'b0;
                        STALL_ID_not_ready       <= 1'b0;
                        next_state               <= S_IDLE;
                    end 
                    
                end 
                else begin // rvalid not satisfied
                    instruction_o               <= 32'h00000013;
                    data_req_o                  <= 1'b0;
                    data_addr_o                 <= pc_i;        
                    STALL_if_not_ready          <= 1'b0;
                    STALL_ID_not_ready          <= 1'b1;

                    next_state                  <= S_WAIT_RVALID;
                end
            end

            default: begin
                next_state <= S_IDLE;
            end
        endcase
    
    end
    reg prev_cycle_stall_i,prev_cycle_stall_ID;
    always @(posedge clk) begin
            prev_cycle_stall_ID <= STALL_ID_not_ready; // Hold the previous state 

        if (reset) begin
            current_state        <= S_IDLE;
            instruction_o        <= 32'h00000013;
            instruction_o_backup <= 32'h00000013;
            prev_cycle_stall_i   <= 1'b0; 

        end
        else if ((~stall_i)& ~STALL_ID_not_ready) begin
            prev_cycle_stall_i <= 1'b0; 
            current_state <= next_state;
            if (next_state == S_WAIT_RVALID) begin
                current_PC_wating_rvalid <= pc_i; 
            end   
        end else begin
            prev_cycle_stall_i <= 1'b1; // Hold the previous state 
            instruction_o_backup <= instruction_o; // Keep the last valid instruction
            current_state <= current_state; // Hold the state
        end
        //  else begin 
        //     current_state <= next_state;
        // end


    end




endmodule




