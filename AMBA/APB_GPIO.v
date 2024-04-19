module APB_GPIO #(

  //ADDR Parameters
  parameter    ADDR_GPIO   = 32'h0000_0000,
  parameter    OFFSET_GPIO_DATA_RO = 4'h0,
  parameter    OFFSET_GPIO_DATA    = 4'h4,
  parameter    OFFSET_GPIO_DIRM    = 4'h8,
  parameter    OFFSET_GPIO_OEN     = 4'hC

) (
    // APB Signal
    input         iPCLK   ,
    input         iPRESETn,
    input         iPSEL   ,
    input         iPWRITE ,
    input         iPENABLE,
    input  [31:0] iPADDR  ,
    input  [31:0] iPWDATA ,
    output [31:0] oPRDATA , 

    // I/O Signal
    input  [31:0] iGPIOin,
    output [31:0] oGPIOout

);


    reg         iPSELx_r  ;
    reg         iPWRITE_r ;
    reg  [31:0] iPADDR_r  ;
    reg  [31:0] iPWDATA_r ;

    always@( posedge iPCLK)  begin
        if(!iPRESETn) begin
            iPWRITE_r  <= 1'b0; 
            iPADDR_r   <= 16'b0; 
        end
        else begin
            iPWRITE_r  <= iPWRITE; 
            iPWDATA_r  <= iPWDATA; 
            iPADDR_r   <= iPADDR; 
        end
    end

    // Read Only Data
    reg [31:0] reg_DATA_RO;
    // GPIO Data 
    reg [31:0] reg_DATA;
    // Direction (in or out)
    reg [31:0] reg_DIRM;
    // Output Enable 
    reg [31:0] reg_OEN;


    integer i;
    //reg [31:0] GPIOin_r;

    always @(posedge iPCLK ) begin
        if( !iPRESETn ) begin
            reg_DATA_RO   <= 32'b0;
            reg_DATA      <= 32'b0;
            reg_DIRM      <= 32'b0;
            reg_OEN       <= 32'b0;
        end
        else begin
     
            // reg_DATA, reg_DIRM, reg_OEN
            if( iPENABLE && iPWRITE) begin
                case ( iPADDR[3:0] )
                    OFFSET_GPIO_DATA_RO: begin end    //DATA_RO is read only register             
                    OFFSET_GPIO_DATA:    begin
                        reg_DATA       <= iPWDATA;
                    end
                    OFFSET_GPIO_DIRM:    begin
                        reg_DIRM <= iPWDATA;
                    end
                    OFFSET_GPIO_OEN:     begin
                        reg_OEN <= iPWDATA;
                    end
                    default:             begin
                        reg_DATA    <= reg_DATA   ;
                        reg_DIRM    <= reg_DIRM   ;
                        reg_OEN     <= reg_OEN    ;
                    end
                endcase 
            end

            // DATA_RO
            for ( i=0 ; i<32 ; i=i+1 ) begin
                if ( reg_DIRM[i] ) begin
                    reg_DATA_RO[i] <= oGPIOout[i] ;// output mode
                end else begin
                    reg_DATA_RO[i] <= iGPIOin[i] ;// input mode      
                end  
            end     
       end
    end


    // iGPIOin -> GPIOin_r -> DATA_RO -> PRADATA
    assign oPRDATA = reg_DATA_RO;

    // reg_DATA -> GPIOout 
    reg [31:0] oGPIOout ;
    always @(*) begin
        for ( i=0 ; i<32 ; i=i+1 ) begin
            if( reg_DIRM[i] & reg_OEN[i] ) begin //output mode
                oGPIOout[i] = reg_DATA[i] ;
            end else begin
                oGPIOout[i] = 1'bz;
            end
        end
    end

endmodule
