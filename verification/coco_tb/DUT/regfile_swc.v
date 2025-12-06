module regfile_swc (
    hclk                                        ,
    hrstn                                       ,
    reg_waddr                                   ,
    reg_wen                                     ,
    reg_wdata                                   ,
    reg_raddr_1                                 ,
    reg_ren_1                                   ,
    reg_rdata_1                                 ,
    reg_raddr_2                                 ,
    reg_ren_2                                   ,
    reg_rdata_2                                 ,
    regfile_interact
);

// NOTICE:
// -----------------------
// These signals should only come in on cycle_cnt == 3 which means that the whole system must wait for the cycle count every time
// HOWEVER
// Inputs come in from exu_reg_swc.v
// The signals to actually write reg_data are never high at the same time
// reg_ren and reg_wen are on separate cycles (1 and 3 repsectively) WHICH MEANS THIS MODULE CAN NEVER HAVE A GENUINE OUTPUT

// general signals
input                   hclk                    ;
input                   hrstn                   ;
// write port
input           [4:0]   reg_waddr               ;
input           [31:0]  reg_wdata               ;
input                   reg_wen                 ;
// read port 1
input           [4:0]   reg_raddr_1             ;
output reg      [31:0]  reg_rdata_1             ;
input                   reg_ren_1               ;
// read port 2
input           [4:0]   reg_raddr_2             ;
output reg      [31:0]  reg_rdata_2             ;
input                   reg_ren_2               ;
output reg      [1023:0]  regfile_interact      ;

// regsiters file
reg [31:0] regfile [31:0];

integer i;

// regfile
always @(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        $readmemh("program.hex", regfile); 
        for (i = 0; i < 32; i = i + 1) begin
            // regfile[i] <= 0;
            // $display("regfile[%0d] = %h", i, regfile[i]);
            regfile_interact[i*32 +: 32] <= regfile[i];
        end
        // $display("Time: %3d Regfile loaded? %h \n", $time, regfile[2]);
    end else begin
        if(reg_wen) begin
            // Prohibit wrting reg0
            if(reg_waddr == 0)
                regfile[reg_waddr] <= regfile[reg_waddr];
            else
                regfile[reg_waddr] <= reg_wdata;
                regfile_interact[reg_waddr*32 +: 32] <= reg_wdata;
                $display("Time: %3d Regfile Data: %h Mem Address: %d, sent Data: %h \n", $time, regfile[reg_waddr], reg_waddr, reg_wdata);
        // This block doesn't seem necessary at all (Test for if it can be deleted)
        end else begin
			regfile[reg_waddr] <= regfile[reg_waddr];
            $display("Time: %3d Regfile Data: %h Mem Address: %d, sent Data: %h \n", $time, regfile[2], 2, reg_wdata);
        end
    end

end

// reg_rdata_1
always @(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        reg_rdata_1 <= 0;
    end else begin
        if(reg_ren_1) begin
            // "reg_raddr_1" seems to not have much of a purpose here
            // Already dependent on an enable signal?
            // Is there a time when we might have both read enable signals high and have different addresses to write to?
            if(reg_wen && (reg_raddr_1 == reg_waddr)) begin
                reg_rdata_1 <= reg_wdata;
            end else begin
                reg_rdata_1 <= regfile[reg_raddr_1];
            end
        end else begin
            reg_rdata_1 <= 0;
        end
    end
end

// reg_rdata_2
always @(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        reg_rdata_2 <= 0;
    end else begin
        if(reg_ren_2) begin
            if(reg_wen && (reg_raddr_2 == reg_waddr)) begin
                reg_rdata_2 <= reg_wdata;
            end else begin
                reg_rdata_2 <= regfile[reg_raddr_2];
            end
        end else begin
            reg_rdata_2 <= 0;
        end
    end
end



endmodule