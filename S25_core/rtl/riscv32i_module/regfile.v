
module reg_file(
input wire clk,
input wire reset, 
input wire [4:0] reg1_pi, 
input wire [4:0] reg2_pi, 
input wire [4:0] destReg_pi,

input wire we_pi, 
input wire [31:0] writeData_pi, 

output wire [31:0] operand1_po,
output wire [31:0] operand2_po,



input wire          write_csr,
input wire [11:0]   csrReg_write_dest_reg,
input wire [31:0]   csrReg_write_dest_reg_data,
input wire [11:0]   csrReg_read_src_reg,
output wire [31:0]  csrReg_read_src_reg_data
);

   wire cntrl1, cntrl2,cntrl_csr;
   reg [31:0] REG_FILE[0:31];  // 32 32-bit registers
   reg [31:0] CSR_FILE[0:4096];  // 4096 32-bit registers
   
// read while writing in WB stage   
assign cntrl1      =  (reg1_pi  == destReg_pi)                       &&  we_pi;
assign cntrl2      =  (reg2_pi  == destReg_pi)                       &&  we_pi ;
assign cntrl_csr   =  (csrReg_write_dest_reg == csrReg_read_src_reg) &&  write_csr ;

assign operand1_po              = cntrl1    ? writeData_pi : REG_FILE[reg1_pi];
assign operand2_po              = cntrl2    ? writeData_pi : REG_FILE[reg2_pi];

assign csrReg_read_src_reg_data = cntrl_csr ? csrReg_write_dest_reg_data : CSR_FILE[csrReg_read_src_reg];

// assign operand2_po = write_csr ? csrData_pi : (cntrl2 ? writeData_pi : REG_FILE[reg2_pi]);

integer j;
integer p;

initial begin 
 for (j=0; j < 32; j=j+1)begin 
	  	  REG_FILE[j] <= 32'b0;	 
 end
  for (p=0; p <4096; p=p+1)begin
              CSR_FILE[p] <= 32'b0;
 end
end
integer i;
integer o;

always @(posedge clk) begin
      if (reset) begin 
            for (i=0; i < 32; i=i+1) begin 
	  	     REG_FILE[i] <= 32'b0;	
            end
            for (o=0; o < 4096; o=o+1) begin
                 CSR_FILE[o] <= 32'b0;
            end
      end else begin 
	   if (we_pi && (destReg_pi!=0))  begin 
		   REG_FILE[destReg_pi] <= writeData_pi;
         end
      if (write_csr) begin
            CSR_FILE[csrReg_write_dest_reg] <= csrReg_write_dest_reg_data;
      end
      end
end




// always @(posedge clk) begin
//     if (~reset) begin
// //       // Reset mstatus, mcause, and mepc to zero during reset
// //       CSR_FILE[12'h300] <= 32'b0; 
// //       CSR_FILE[12'h342] <= 32'b0; 
// //       CSR_FILE[12'h341] <= 32'b0; 
// //     end else begin
//       if (write_csr && csrReg_write_dest_reg == 12'h300) begin
//         // Handle writing to mstatus register (enable/disable interrupts)
//         CSR_FILE[12'h300][3] <= csrData_pi[3];
//       end

//       // Set mcause register when an interrupt or exception occurs (for simplicity, timer interrupt example)
//       if (write_csr && csrReg_write_dest_reg == 12'h342) begin
//         CSR_FILE[12'h342] <= 32'h00000001;
//       end

//       // Set mepc register when an exception occurs (for simplicity, assuming a jump instruction)
//       if (write_csr && csrReg_write_dest_reg == 12'h341) begin
//         CSR_FILE[12'h341] <= 32'h00400000; 
//       end
//     end
//   end




//MARKER AUTOMATED HERE START
integer k;
integer n;
always @(negedge clk) begin
      #100
      $write("\n\nREGFILE:   ");
      for (k=0; k < 32; k=k+1) begin 
	  	// REG_FILE[i] <= 32'b0;
      if (REG_FILE[k] != 0) begin
      $write("   R%4d: %9h,", k, REG_FILE[k]);
      end
      end
      $write("\nREGFILE*:  ");
      for (n=0; n < 32; n=n+1) begin 
	  	// REG_FILE[i] <= 32'b0;
      if (REG_FILE[n] != 0) begin
      $write("   R%4d: %9d,", n, $signed(REG_FILE[n]));
      end
      end

      $write("\n\nCSRs:   ");
      for (k=0; k < 4096; k=k+1) begin 
	  	// REG_FILE[i] <= 32'b0;
      if (CSR_FILE[k] != 0) begin
      $write("   R%4d: %9h,", k, CSR_FILE[k]);
      end
      end
      $write("\nCSRs*:  ");
      for (n=0; n < 4096; n=n+1) begin 
	  	// REG_FILE[i] <= 32'b0;
      if (CSR_FILE[n] != 0) begin
      $write("   R%4d: %9d,", n, $signed(CSR_FILE[n]));
      end
      end


end

//MARKER AUTOMATED HERE END



endmodule
