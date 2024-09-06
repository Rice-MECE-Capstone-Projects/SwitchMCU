module AHB_control_unit #( 
    //AHB Parameters
    parameter    OKAY  = 2'b00   ,
    parameter    ERROR = 2'b01   ,
    parameter    SPLIT = 2'b10   ,
    parameter    RETRY = 2'b11   ,
                                    parameter    IDLE   = 2'b00  ,
                                    parameter    BUSY   = 2'b01  ,
                                    parameter    SEQ    = 2'b10  ,
                                    parameter    NONSEQ = 2'b11  ,
    parameter    BYTE  = 3'b000  ,
    parameter    WORD  = 3'b001  ,
    parameter    DWORD = 3'b010  ,
                                    parameter    SINGLE = 3'b000 ,
                                    parameter    INCR   = 3'b001 ,
                                    parameter    WRAP4  = 3'b010 ,
                                    parameter    INCR4  = 3'b011 ,
                                    parameter    WARP8  = 3'b100 ,
                                    parameter    INCR8  = 3'b101 ,
                                    parameter    WARP16 = 3'b110 ,
                                    parameter    INCR16 = 3'b111 ,
    //Control Unit FSM Parameters
    parameter    CONFIG_0     = 3'b000,
    parameter    CONFIG_1     = 3'b001,
    parameter    CONFIG_2     = 3'b010,
    parameter    READ_DATA_RO = 3'b011,
    parameter    WRITE_DATA_0 = 3'b100,
    parameter    WRITE_DATA_1 = 3'b101,
    parameter    WRITE_DATA_2 = 3'b110,
    parameter    WRITE_DATA_3 = 3'b111,

    // LED_mode Parameters
    parameter    MODE0     = 4'b0001,
    parameter    MODE1     = 4'b0010,
    parameter    MODE2     = 4'b0100,
    parameter    MODE3     = 4'b1000,

    //Address Parameters
    parameter    ADDR_GPIO           = 32'h0000_0000,
    parameter    OFFSET_GPIO_DATA_RO = 4'h0,
    parameter    OFFSET_GPIO_DATA    = 4'h4,
    parameter    OFFSET_GPIO_DIRM    = 4'h8,
    parameter    OFFSET_GPIO_OEN     = 4'hC

) (
    // Input from AHB Bus
    input         iHCLK,
    input         iHRESETn,
    input         iHREADY,
    input  [1:0]  iHRESP,
    input  [31:0] iHRDATA,

    // Output to AHB Bus
    output [1:0]   oHTRANS,
    output [2:0]   oHSIZE,
    output [2:0]   oHBURST,
    output         oHWRITE,
    output [31:0]  oHADDR ,
    output [31:0]  oHWDATA

);
    /*————————————————————————————————————————————————————————————————————————*\
    /                           Control Unit FSM                               \
    \*————————————————————————————————————————————————————————————————————————*/
    
    reg [2:0] CU_state;

    reg  [3 :0]  led_mode; //4 modes in all (one hot encoding)
    reg  [31:0]  timer   ;
    wire [3 :0]  LED     ;

    always @(posedge iHCLK ) begin
    if ( !iHRESETn ) begin
        CU_state <= CONFIG_0;
    end else begin
        case (CU_state)
            // write GPIO_DIRM 
            CONFIG_0: begin
                if ( iHREADY ) begin
                    CU_state <= CONFIG_1;
                end else begin
                    CU_state <= CONFIG_0;
                end
            end
            // write GPIO_DATA
            CONFIG_1: begin
                if ( iHREADY ) begin
                    CU_state <= CONFIG_2;
                end else begin
                    CU_state <= CONFIG_1;
                end
            end 
            // write GPIO_OEN 
            CONFIG_2: begin
                if ( iHREADY && iHRDATA[3:0] == 4'b0000) begin
                    CU_state <= READ_DATA_RO;
                end else begin
                    CU_state <= CONFIG_2;
                end
            end 
            // read DATA_RO
            READ_DATA_RO: begin
                if ( iHREADY          && iHRDATA[3:0] == 4'b1110) begin //key1 pressed
                    CU_state <= WRITE_DATA_0;
                end else if ( iHREADY && iHRDATA[3:0] == 4'b1101) begin //key2 pressed
                    CU_state <= WRITE_DATA_1;
                end else if ( iHREADY && iHRDATA[3:0] == 4'b1011) begin //key3 pressed
                    CU_state <= WRITE_DATA_2;
                end else if ( iHREADY && iHRDATA[3:0] == 4'b0111) begin //key4 pressed
                    CU_state <= WRITE_DATA_3;
                end else if ( iHREADY && led_mode[0] )            begin //keep mode0 if not pressed this moment
                    CU_state <= WRITE_DATA_0;             
                end else if ( iHREADY && led_mode[1] )            begin //keep mode1
                    CU_state <= WRITE_DATA_1;             
                end else if ( iHREADY && led_mode[2] )            begin //keep mode2 
                    CU_state <= WRITE_DATA_2;             
                end else if ( iHREADY && led_mode[3] )            begin //keep mode3
                    CU_state <= WRITE_DATA_3;             
                end else begin
                    CU_state <= READ_DATA_RO;     // Slave not ready || no key ever been pressed
                end                             
            end 
            // write DATA
            WRITE_DATA_0 : begin
                if ( iHREADY ) begin
                    CU_state <= READ_DATA_RO;
                end else begin
                    CU_state <= CU_state;
                end
            end 
            // write DATA
            WRITE_DATA_1 : begin
                if ( iHREADY ) begin
                    CU_state <= READ_DATA_RO;
                end else begin
                    CU_state <= CU_state;
                end
            end 
            // write DATA
            WRITE_DATA_2 : begin
                if ( iHREADY ) begin
                    CU_state <= READ_DATA_RO;
                end else begin
                    CU_state <= CU_state;
                end
            end
            WRITE_DATA_3 : begin
                if ( iHREADY ) begin
                    CU_state <= READ_DATA_RO;
                end else begin
                    CU_state <= CU_state;
                end
            end 
            default: CU_state <= CONFIG_0;
        endcase
        end
    end

    /*————————————————————————————————————————————————————————————————————————*\
    /                                AHB Master Output                         \
    \*————————————————————————————————————————————————————————————————————————*/
    
    assign oHTRANS = NONSEQ;
    assign oHBURST = SINGLE;
    assign oHSIZE  = DWORD; 
    assign oHADDR = ( CU_state == CONFIG_0    )? 32'h0000_0008 : 
                    ( CU_state == CONFIG_1    )? 32'h0000_000C : 
                    ( CU_state == CONFIG_2    )? 32'h0000_0004 : 
                    ( CU_state == READ_DATA_RO)? 32'h0000_0000 : 
                    ( CU_state == WRITE_DATA_0)? 32'h0000_0004 : 
                    ( CU_state == WRITE_DATA_1)? 32'h0000_0004 : 
                    ( CU_state == WRITE_DATA_2)? 32'h0000_0004 : 
                    ( CU_state == WRITE_DATA_3)? 32'h0000_0004 :    
                                                 32'hz;
    
    assign oHWRITE = ( CU_state == READ_DATA_RO )? 1'b0 : 1'b1;
    
    assign oHWDATA = ( CU_state == CONFIG_0        )? 32'h0000_00F0          : 
                     ( CU_state == CONFIG_1        )? 32'h0000_00F0          : 
                     ( CU_state == CONFIG_2        )? 32'h0000_00F0          : // all LED turned OFF
                     ( CU_state == WRITE_DATA_0 || CU_state == WRITE_DATA_1 ||
                       CU_state == WRITE_DATA_2 || CU_state == WRITE_DATA_3 ) ? {16'b0,LED[3:0],4'b0 } : 32'hz;

    /*————————————————————————————————————————————————————————————————————————*\
    /                              LED Control                                 \
    \*————————————————————————————————————————————————————————————————————————*/
    
    
    
    //------------ led_mode ------------
    always @(posedge iHCLK ) begin
    if ( !iHRESETn ) begin
        led_mode <= 4'b0000;
    end else begin
        case (CU_state)

            CONFIG_0: begin 
                led_mode <= 4'b0000; 
            end

            CONFIG_1: begin
                led_mode <= 4'b0000;
            end 

            CONFIG_2: begin 
                // if ( iHREADY && iHRDATA[3:0] == 4'b0000) begin
                //     led_mode <= MODE0;
                // end else begin
                    led_mode <= 4'b0000;
                // end 
            end

            READ_DATA_RO: begin
                // key1 pressed mode -> MODE0 
                if( iHREADY          && iHRDATA[3:0] == 4'b1110) begin
                    led_mode <= MODE0;  
                // key2 pressed mode -> MODE1 
                end else if( iHREADY && iHRDATA[3:0] == 4'b1101) begin
                    led_mode <= MODE1; 
                // key3 pressed mode -> MODE2 
                end else if( iHREADY && iHRDATA[3:0] == 4'b1011) begin
                    led_mode <= MODE2; 
                // key4 pressed mode -> MODE3 
                end else if( iHREADY && iHRDATA[3:0] == 4'b0111) begin
                    led_mode <= MODE3; 
                // no key pressed, mode kept 
                end else begin
                    led_mode <= led_mode;
                end                      
            end 

            WRITE_DATA_0 : begin
                led_mode <= led_mode;
            end 
            WRITE_DATA_1 : begin
                led_mode <= led_mode;
            end 
            WRITE_DATA_2 : begin
                led_mode <= led_mode;
            end 
            WRITE_DATA_3 : begin
                led_mode <= led_mode;
            end 
            default: begin 
                led_mode <= led_mode;
            end

        endcase
    end
    end

    //------------ timer ------------
    always @ (posedge iHCLK or negedge iHRESETn)    begin
        if ( !iHRESETn )                           
            timer <= 32'd0;                     // when the reset signal valid,time counter clearing
        else if (timer == 32'd199_999_999)      // 4 seconds count(50M*4-1=199999999)
            timer <= 32'd0;                     // count done,clearing the time counter
        else
		    timer <= timer + 1'b1;              // timer counter = timer counter + 1
    end

    //------------ led ------------ 
    assign LED[3:0] =         
        // mode0 普通流水灯模式
        ( led_mode[0] && timer >= 32'd149_999_999 ) ? 4'b0111 : // LED4亮 
        ( led_mode[0] && timer >= 32'd99_999_999  ) ? 4'b1011 : // LED3亮
        ( led_mode[0] && timer >= 32'd49_999_999  ) ? 4'b1101 : // LED2亮
        ( led_mode[0]                             ) ? 4'b1110 : // LED1亮       
        // mode1 加速流水灯模式
        ( led_mode[1] && timer >= 32'd174_999_999 ) ? 4'b0111 : // LED4亮 
        ( led_mode[1] && timer >= 32'd149_999_999 ) ? 4'b1011 : // LED3亮
        ( led_mode[1] && timer >= 32'd124_999_999 ) ? 4'b1101 : // LED2亮
        ( led_mode[1] && timer >= 32'd99_999_999  ) ? 4'b1110 : // LED1亮
        ( led_mode[1] && timer >= 32'd74_999_999  ) ? 4'b0111 : // LED4亮  
        ( led_mode[1] && timer >= 32'd49_999_999  ) ? 4'b1011 : // LED3亮
        ( led_mode[1] && timer >= 32'd24_999_999  ) ? 4'b1101 : // LED2亮
        ( led_mode[1]                             ) ? 4'b1110 : // LED1亮
        // mode2 心跳模式
        ( led_mode[2] && timer >= 32'd189_999_999 ) ? 4'b0000 : // 全亮 
        ( led_mode[2] && timer >= 32'd179_999_999 ) ? 4'b1111 : // 全灭
        ( led_mode[2] && timer >= 32'd169_999_999 ) ? 4'b0000 : // 全亮
        ( led_mode[2]                             ) ? 4'b1111 : // 全灭
        // mode3 呼吸灯模式
        // 占空比 0%
        ( led_mode[3] && (timer >= 32'd189_999_999)                             ) ? 4'b1111 : 
        // 占空比 1/64 = 1.56%  
        ( led_mode[3] && (timer >= 32'd169_999_999)  && (timer[5:0] == 6'b000)  ) ? 4'b0000 : 
        ( led_mode[3] && (timer >= 32'd169_999_999)                             ) ? 4'b1111 : 
        // 占空比 1/32 = 3.12%
        ( led_mode[3] && (timer >= 32'd149_999_999)  && (timer[4:0] == 5'b000)  ) ? 4'b0000 : 
        ( led_mode[3] && (timer >= 32'd149_999_999)                             ) ? 4'b1111 : 
        // 占空比 1/16 = 6.25%
        ( led_mode[3] && (timer >= 32'd129_999_999)  && (timer[3:0] == 4'b000)  ) ? 4'b0000 : 
        ( led_mode[3] && (timer >= 32'd129_999_999)                             ) ? 4'b1111 : 
        // 占空比 1/8  = 12.5%
        ( led_mode[3] && (timer >= 32'd109_999_999)  && (timer[2:0] == 3'b000)  ) ? 4'b0000 : 
        ( led_mode[3] && (timer >= 32'd109_999_999)                             ) ? 4'b1111 : 
        // 占空比 1/4  = 25%
        ( led_mode[3] && (timer >= 32'd89_999_999 )  && (timer[1:0] == 2'b00 )  ) ? 4'b0000 : 
        ( led_mode[3] && (timer >= 32'd89_999_999 )                             ) ? 4'b1111 : 
        // 12.5% 
        ( led_mode[3] && (timer >= 32'd69_999_999 )  && (timer[2:0] == 3'b000)  ) ? 4'b0000 : 
        ( led_mode[3] && (timer >= 32'd69_999_999 )                             ) ? 4'b1111 : 
        // 6.25% 
        ( led_mode[3] && (timer >= 32'd49_999_999 )  && (timer[3:0] == 4'b000)  ) ? 4'b0000 : 
        ( led_mode[3] && (timer >= 32'd49_999_999 )                             ) ? 4'b1111 : 
        // 3.12%
        ( led_mode[3] && (timer >= 32'd29_999_999 )  && (timer[4:0] == 5'b000)  ) ? 4'b0000 : 
        ( led_mode[3] && (timer >= 32'd29_999_999 )                             ) ? 4'b1111 : 
        // 1.56% 
        ( led_mode[3] && (timer >= 32'd9_999_999  )  && (timer[5:0] == 6'b000)  ) ? 4'b0000 :
        ( led_mode[3] && (timer >= 32'd9_999_999  )                             ) ? 4'b1111 : 
        // 0%
        ( led_mode[3]                                                           ) ? 4'b1111 :  4'b1111 ; 
          

endmodule
