module AHB2APB_bridge #(

    //HRANS Parameters
    parameter    IDLE   = 2'b00  ,
    parameter    BUSY   = 2'b01  ,
    parameter    SEQ    = 2'b10  ,
    parameter    NONSEQ = 2'b11  ,

    //HRSP Parameters
    parameter    OKAY  = 2'b00   ,
    parameter    ERROR = 2'b01   ,
    parameter    SPLIT = 2'b10   ,
    parameter    RETRY = 2'b11   ,

    //bridge_state Parameters
    parameter    BRIDGE_IDLE   = 2'b00,
    parameter    BRIDGE_SETUP  = 2'b01,
    parameter    BRIDGE_ENABLE = 2'b10,

    //ADDR Parameters
    parameter    ADDR_GPIO_0   = 32'h0000_0000,
    parameter    ADDR_GPIO_1   = 32'h0000_8000
    
) (
    //------------ AHB ------------
    //input
    input iHCLK,
    input iHRESETn,
    input iHSEL,
    input  [1:0]  iHTRANS, 
    input  [3:0]  iHSIZE ,
    input  [2:0]  iHBURST, 
    input         iHWRITE,
    input  [31:0] iHWDATA, 
    input  [31:0] iHADDR ,
    //output
    output        oHREADY,
    output [1:0]  oHRESP ,
    output [31:0] oHRDATA,
    //------------ APB ------------
    //input
    input [31:0] iPRDATA,
    //output
    output oPSEL0,
    output oPSEL1,
    output oPWRITE,
    output oPENABLE,
    output [31:0] oPADDR,
    output [31:0] oPWDATA
);

    reg         iHWRITE_r ;
    reg  [31:0] iHADDR_r  ;
    reg  [31:0] iHWDATA_r ;

    always@( posedge iHCLK)  begin
        if(!iHRESETn) begin
            iHWRITE_r <= 1'b0;
            iHADDR_r  <= 32'b0;
            iHWDATA_r <= 32'b0;
        end 
        else if( iHSEL && (bridge_state == BRIDGE_IDLE || bridge_state == BRIDGE_ENABLE))begin
            iHWRITE_r <= iHWRITE; // ahb reg change when bridge_state is going to change:
            iHADDR_r  <= iHADDR ; // from IDLE   to SETUP                     
            iHWDATA_r <= iHWDATA; // from ENABLE to SETUP
        end
    end 

    reg [1:0] bridge_state;

    always @(posedge iHCLK ) begin
        if (!iHRESETn) begin
            bridge_state <= BRIDGE_IDLE;
        end else begin
            case ( bridge_state )
                // IDLE
                BRIDGE_IDLE: begin
                    if(iHSEL) begin
                        bridge_state <= BRIDGE_SETUP;
                    end 
                    else begin
                        bridge_state <= BRIDGE_IDLE;
                    end                     
                end
                // SETUP
                BRIDGE_SETUP: begin
                    bridge_state <= BRIDGE_ENABLE;
                end
                // ENABLE
                BRIDGE_ENABLE: begin
                    if(iHSEL) begin
                        bridge_state <= BRIDGE_SETUP;
                    end 
                    else begin
                        bridge_state <= BRIDGE_IDLE;
                    end
                end
                //DEFAULT
                default: bridge_state <= BRIDGE_IDLE;
            endcase
        end
    end

    assign oHREADY = ( bridge_state == BRIDGE_SETUP ) ? 1'b0 : 1'b1;
    assign oHRESP  = OKAY ;
    assign oHRDATA = iPRDATA;

    assign oPSEL0   = ( iHADDR_r == ADDR_GPIO_0) ? 1'b1 : 1'b0;
    assign oPSEL1   = ( iHADDR_r == ADDR_GPIO_1) ? 1'b1 : 1'b0;
    assign oPWRITE  = iHWRITE_r ;
    assign oPENABLE = ( bridge_state == BRIDGE_ENABLE ) ? 1'b1 : 1'b0;
    assign oPADDR   = iHADDR_r;
    assign oPWDATA  = iHWDATA_r;

endmodule
