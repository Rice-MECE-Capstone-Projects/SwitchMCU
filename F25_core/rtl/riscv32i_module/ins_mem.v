module ins_mem (
    input  wire         clk,
    input  wire         reset,

    input  wire [31:0]  pc_i,
    input  wire         pc_i_valid, // request valid from PC
    
    output wire          STALL_IF_not_ready_w, // stall signal for IF stage (PC module is stalled)
    output wire          STALL_ID_not_ready_w, // stall signal for DECO stage (Decode module is stalled, exec doesnt get new value)
    output wire [31:0]   instruction_o_w,

    input wire          stall_i_EXEC,   //  
    input wire          abort_rvalid,

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

    reg          STALL_IF_not_ready;
    reg          STALL_ID_not_ready;
    reg [31:0]   instruction_o;

    localparam [1:0] S_IDLE         = 2'b00, // Accepts new requests from PC 
                     S_WAIT_GNT     = 2'b01, // Waiting for request to be taken by memory (recognized by mem), no new request from PC 
                     S_WAIT_RVALID  = 2'b10, // waiting for request to be satsisfied, if satsitisfied can accept new request from PC
                     S_ABORT_RVALID = 2'b11; // waiting for request to be satsisfied which is thrown away since aborted,
                                             // if satsitisfied can accept new request from PC

    reg [1:0] current_state, next_state;
    reg [31:0] pc_decode;
    reg [31:0] current_PC_wating_rvalid, instruction_o_backup;
    reg [31:0] PC_requested;



    assign data_we_o_w      =   32'b0;   // We are not writing data, so this is always 0
    assign data_be_o_w      =   4'b1111; // We always want the entire word;
    assign data_wdata_o_w   =   32'b0;   // We are not writing data, so this is always 0
    assign data_req_o_w     =   data_req_o;
    assign data_addr_o_w    =   data_addr_o;

    assign STALL_IF_not_ready_w = STALL_IF_not_ready;
    assign STALL_ID_not_ready_w = STALL_ID_not_ready;
    assign instruction_o_w      = saved_instruction_from_stall ? instruction_o_backup : instruction_o; // Default instruction if reset is high

    wire backup_used;
    assign backup_used = ~stall_i_EXEC && saved_instruction_from_stall;

// Outputs changed in FSM
// instruction_o 
// data_req_o    // request send to mem
// data_addr_o   // address 
// STALL_IF_not_ready
// STALL_ID_not_ready
    wire new_request_from_PC_accept;
    assign new_request_from_PC_accept   = pc_i_valid && (~abort_rvalid) && ~(stall_i_EXEC) && ~stall_i_EXEC; // new request from PC

    always @(*) begin
        case (current_state)
            S_IDLE: begin // can service a new request, thus branch nor stall will affect output
                instruction_o   <= 32'h00000013;
                if (new_request_from_PC_accept) begin   // begin new request 
                                                        // Fetch  is active 
                                                        // DECODE is not Active
                    data_req_o         <= 1'b1;        
                    data_addr_o        <= pc_i;
                    if (data_gnt_i) begin // gnt recognized, meaning request recognized
                        STALL_IF_not_ready <= 1'b0;
                        STALL_ID_not_ready <= 1'b0;
                        next_state         <= S_WAIT_RVALID;
                    end else begin       // gnt NOT recognized, meaning request must wait for being granted
                        STALL_IF_not_ready       <= 1'b1; // STALL the PC module, to wait for the gnt
                        STALL_ID_not_ready       <= 1'b0; 
                        next_state               <= S_WAIT_GNT;
                    end 
                end else begin  // IDLE bc no new request
                    // If there is a branch or jump, then the request is trashed
                    data_req_o          <= 1'b0;        
                    data_addr_o         <= 32'b0;  
                    STALL_IF_not_ready  <= 1'b0;
                    STALL_ID_not_ready  <= 1'b0;
                    next_state          <= S_IDLE;
            end
            end
            S_WAIT_GNT: begin // request is being  // Fetch  is active, its waiting for gnt // DECODE is not Active
                instruction_o   <= 32'h00000013;
                if (~abort_rvalid) begin // accpet another request after granting
                    if (~stall_i_EXEC) begin 
                        data_req_o                   <= 1'b1;
                        data_addr_o                  <= pc_i; // PC_requested is the last requested address
                        if (data_gnt_i) begin 
                            STALL_IF_not_ready       <= 1'b0;
                            STALL_ID_not_ready       <= 1'b0;
                            next_state               <= S_WAIT_RVALID; // waits for rvalid meaning request done, no more stalling
                        end else begin 
                            STALL_IF_not_ready       <= 1'b1;
                            STALL_ID_not_ready       <= 1'b0;
                            next_state               <= S_WAIT_GNT; // waait for gnt again
                        end
                    end else begin // Stall
                        data_req_o               <= 1'b0;
                        STALL_IF_not_ready       <= 1'b1;
                        STALL_ID_not_ready       <= 1'b0;
                        data_addr_o              <= 32'h0; 
                        next_state               <= S_WAIT_GNT; 
                    end 
                end else begin // Jump or banch, meaning that current request is trashed
                    data_req_o               <= 1'b0;
                    STALL_IF_not_ready       <= 1'b0;
                    STALL_ID_not_ready       <= 1'b0;
                    data_addr_o              <= 32'h0;
                    next_state               <= S_IDLE; // no more request, no more wait for gnt
                end 
            end  // end S_WAIT_GNT

            S_WAIT_RVALID: begin
                if (~abort_rvalid) begin 
                    if (data_rvalid_i) begin
                        instruction_o <= data_rdata_i;

                        if (~stall_i_EXEC) begin
                            if (pc_i_valid) begin // accpet another request after granting
                                data_req_o         <= 1'b1;        
                                data_addr_o        <= pc_i;        
                                if (data_gnt_i) begin
                                    STALL_IF_not_ready <= 1'b0;
                                    STALL_ID_not_ready <= 1'b0;
                                    next_state         <= S_WAIT_RVALID;
                                end 
                                else begin  // new request but no gnt recognized
                                    STALL_IF_not_ready       <= 1'b1;
                                    STALL_ID_not_ready       <= 1'b0;
                                    next_state               <= S_WAIT_GNT;
                                end 
                            end else begin // no new request
                                STALL_IF_not_ready       <= 1'b0;
                                STALL_ID_not_ready       <= 1'b0;
                                next_state               <= S_IDLE;
                            end
                        end else begin // stall
                            data_req_o               <=  1'b0;        
                            data_addr_o              <= 32'h0;  
                            STALL_IF_not_ready       <=  1'b1;
                            STALL_ID_not_ready       <=  1'b1;
                            next_state               <= S_IDLE;
                        end
                    end else begin // rvalid not satisfied
                        instruction_o               <= 32'h00000013;
                        data_req_o                  <= 1'b0;
                        data_addr_o                 <= pc_i;        
                        STALL_IF_not_ready          <= 1'b0;
                        STALL_ID_not_ready          <= 1'b1;
                        next_state                  <= S_WAIT_RVALID;
                    end
                end else begin  // Branch during request
                        data_req_o                  <= 1'b0;
                        data_addr_o                 <= 32'h0;
                        instruction_o               <= 32'h00000013; // Yummy instruction, you dont care regaurdless of any new request satsifictaion
                        if (data_rvalid_i) begin
                            STALL_IF_not_ready       <= 1'b0;
                            STALL_ID_not_ready       <= 1'b0;
                            next_state               <= S_IDLE; // no more request, new req would be aborted
                        end else begin  // This means your still waiting for rvalid which you throw out anyway 
                            STALL_IF_not_ready       <= 1'b0;
                            STALL_ID_not_ready       <= 1'b0; // gotta stall request
                            next_state               <= S_ABORT_RVALID; // Now I gotta wait for new request
                        end                    
                end
            end


            S_ABORT_RVALID: begin
                instruction_o               <= 32'h00000013; // Cant service new request, so you dont care about the instruction
                if (data_rvalid_i && ~stall_i_EXEC) begin // request satisfied but thrown away can recive new request from PC
                    if (pc_i_valid) begin // begin new request // Fetch  is active // DECODE is not Active
                        data_req_o         <= 1'b1;        
                        data_addr_o        <= pc_i;
                        if (data_gnt_i) begin // gnt recognized, meaning request recognized
                            STALL_IF_not_ready <= 1'b0;
                            STALL_ID_not_ready <= 1'b0;
                            next_state         <= S_WAIT_RVALID;
                        end else begin       // gnt NOT recognized, meaning request must wait for being granted
                            STALL_IF_not_ready       <= 1'b1; // STALL the PC module, to wait for the gnt
                            STALL_ID_not_ready       <= 1'b0; 
                            next_state               <= S_WAIT_GNT;
                        end 
                    end else begin  // IDLE bc no new request
                        data_req_o          <= 1'b0;        
                        data_addr_o         <= 32'b0;  
                        STALL_IF_not_ready  <= 1'b0;
                        STALL_ID_not_ready  <= 1'b0;
                        next_state          <= S_IDLE;
                    end
                end else begin// still awaiting rvalid to throw away
                    data_req_o                  <=  1'b0;
                    data_addr_o                 <= 32'h0;
                    STALL_IF_not_ready          <=  1'b1;
                    STALL_ID_not_ready          <=  1'b0;
                    next_state               <= S_ABORT_RVALID; // Now I gotta wait for new request
                end
            end


            default: begin
                next_state <= S_IDLE;
            end
        endcase
    
    end
    reg saved_instruction_from_stall;
    reg prev_cycle_stall_ID;

    always @(posedge clk) begin
            prev_cycle_stall_ID <= STALL_ID_not_ready; // Hold the previous state 

        if (reset) begin
            current_state        <= S_IDLE;
            instruction_o        <= 32'h00000013;
            instruction_o_backup <= 32'h00000013;
            // prev_cycle_stall_i   <= 1'b0; 
            PC_requested         <= 32'h0;
            saved_instruction_from_stall <= 1'b0; 

        end else begin 
            current_state <= next_state; // Update the state
            case(current_state)
            S_WAIT_RVALID: begin
                if (pc_i_valid && stall_i_EXEC && ~abort_rvalid) begin 
                instruction_o_backup         <= data_rdata_i; // Store the requested PC   
                saved_instruction_from_stall <= 1'b1; // Store the requested PC   
                end 
            end
        endcase

        if (backup_used) begin 
            instruction_o_backup         <= 32'h00000013;
            saved_instruction_from_stall <= 1'b0; 
        end 


     
        end
    end

endmodule




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