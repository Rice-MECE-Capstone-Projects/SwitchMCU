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
    reg_rdata_2                                 
);
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

// regsiters file
reg [31:0] regfile [31:0];

integer i;
// regfile
always @(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        for (i = 0; i < 32; i = i + 1) begin
            regfile[i] <= 0;
        end
    end else begin
        if(reg_wen) begin
            // Prohibit wrting reg0
            if(reg_waddr == 0)
                regfile[reg_waddr] <= regfile[reg_waddr];
            else
                regfile[reg_waddr] <= reg_wdata;
        end else begin
			regfile[reg_waddr] <= regfile[reg_waddr];
        end
    end
end

// reg_rdata_1
always @(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        reg_rdata_1 <= 0;
    end else begin
        if(reg_ren_1) begin
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