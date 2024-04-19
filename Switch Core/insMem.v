
module insMem(
       input [31:0] pc_pi,
       output[31:0] instruction_po
      );

   reg [31:0]		  instruction;

   assign instruction_po = instruction;

   always @(pc_pi) begin  
   case(pc_pi)	       


     // PROGRAM  1
        // PROGRAM  1
      // Accumulates the sum of an array of n consecutive memory words into Register R2
      // The base address of the array is in Register R1 initialized at reset to 0
      // R8 is initialized  with the number of iterations n : Default is set at 5
      // The memory array is initialized to values 100, 101, 102, ......
     


   0: instruction = 32'h15080005;        // ADDI  R8, R8, 5            count = 5;
   4: instruction = 32'h10200000;        // LOAD  R0,(R1)       top:  R0 = MEM[R1];
   8: instruction = 32'h00000000;        // NOP
  12: instruction = 32'h14210001;       // ADDI  R1, R1, 1            R1 = R1 + 1;  
  16: instruction = 32'h1508FFFF;       // ADDI  R8, R8, -1           count = count - 1;   
  20: instruction = 32'h04401000;       // ADD   R2, R2, R0           sum = sum + R0;  
  24: instruction = 32'h00000000;       // NOP
  28: instruction = 32'h00000000;       // NOP 
  32: instruction = 32'h2500FFE0;       // BNEZ  R8  -32              if (count != 0) goto top 
  36: instruction = 32'h00000000;       // NOP
  40: instruction = 32'h00000000;       // NOP
  44: instruction = 32'h00000000;       // NOP
  48: instruction = 32'h28000000;       // HALT          
  52: instruction = 32'h28000000;       // HALT          
   default: instruction = 32'h0;
   endcase     

   
end

   always @(pc_pi)  begin
   #5;      $display("\nINS_MEM:\tTime:%3d\tPC: %2d\tInstruction: %x", $time, pc_pi, instruction_po);
   end
   
endmodule


