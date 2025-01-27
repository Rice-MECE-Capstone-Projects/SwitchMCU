`timescale 1ns/1ns

module insMem(
	      input [31:0] pc_pi,
	      output [31:0] instruction_po
      );

   reg [31:0]		  instruction;

   assign instruction_po = instruction;

   always @(pc_pi) begin  
   case(pc_pi)	       


     // PROGRAM  1
       // Accumulates the sum of an array of n consecutive memory words into Register R2
       // The base address of the array is in Register R1
       // R8 is initialized  with the number of iterations n : Default is set at 5


   0: instruction = 32'h15080005;       // ADDI  R8, R8, 5           count = 5;
   4: instruction = 32'h10200000;       // LOAD  R0,(R1)       TOP:  R0 = MEM[R1];
   8: instruction = 32'h14210001;       // ADDI  R1, R1, 1           R1 = R1 + 1;  
  12: instruction = 32'h1508FFFF;       // ADDI  R8, R8, -1          count = count - 1;   
  16: instruction = 32'h04401000;       // ADD   R2, R2, R0          sum = sum + R0;  
  20: instruction = 32'h2500FFEC;       // BNEZ  R8  -20             if (count != 0) goto TOP 
  24: instruction = 32'h28000000;       // HALT          
  28: instruction = 32'h28000000;       // HALT          
   default: instruction = 32'h0;
   endcase     




      
      
      // PROGRAM  2
      // Copies an array of n integers from MEM[0..n-1] to MEM[n..2n-1]
      // The base address of the array is in Register R1 initialized at reset to 0
      // R8 is initialized  with the number of iterations n : Default is set at 5
      // The memory array is initialized to values 100, 101, 102, ......
      // Set the SIMULATION Time in tb_processor.v to 640
      // Uncomment the first $display statement in datamem.v to display DataMemory [5..9]
/*

   0: instruction = 32'h15080005;       // ADDI  R8, R8, 5             count = size;
   4: instruction = 32'h10200000;       // LD   R0, 0(R1)        COPY: value = MEM[index]
   8: instruction = 32'h2500000C;       // BNEZ  R8, 12                 if (count != 0) goto CONTINUE
  12: instruction = 32'h1508FFFE;       // ADDI  R8, R8, -2             SHOULD BE SQUASHED
  16: instruction = 32'h18200004;       // SD  R8, 4(R1)                SHOULD BE SQUASHED
  20: instruction = 32'h14210002;       // ADDI  R1, R1, 2              SHOULD BE SQUASHED
  24: instruction = 32'h18200005;       // SD  R0, 5(R1)      CONTINUE: MEM[index+5] = value
  28: instruction = 32'h14210001;       // ADDI  R1, R1, 1              index++
  32: instruction = 32'h1508FFFF;       // ADDI  R8, R8, -1             count--
  36: instruction = 32'h2500FFDC;       // BNEZ R8  -36                 if (count != 0) goto COPY 
  40: instruction = 32'h28000000;       // HALT
  44: instruction = 32'h28000000;       // HALT
   default: instruction = 32'h0;
   endcase     
 
*/
          // PROGRAM  3A
      // Element-by-element addition of two arrays  MEM[0..n-1] and  MEM[n..2n-1]; result in MEM[2n..3n-1]
      // The base address of the arrays are in Registers R2, R4, and R6 respectively
      // R8 is initialized  with the number of iterations n : Default is set at 5
      // The memory array is initialized to values 100, 101, 102, ......
     // Change the SIMULATION Time in tb_processor.v to 640
     // Uncomment the second $display statement in datamem.v to diplay DataMemory[10 .. 14]

/*

    0: instruction = 32'h15080005;      // ADDI  R8, R8, 5            count = size;
   4: instruction = 32'h1442FFFF;      // ADDI  R2, R2, -1             index1 =  -1
   8: instruction = 32'h04482000;      // ADD   R4, R2, R8             index2 = index1 + size
  12: instruction = 32'h04883000;      // ADD   R6, R4, R8             index3 = index2 + size   
  16: instruction = 32'h14840001;      // ADDI  R4, R4, 1        TOP:  index2++ 
  20: instruction = 32'h14420001;      // ADDI  R2, R2, 1              index1++
  24: instruction = 32'h10810000;      // LOAD R1, 0(R4)               element2 = MEM[index2] 
  28: instruction = 32'h10400000;      // LOAD R0, 0(R2)               element1 = MEM[index1]
  32: instruction = 32'h14C60001;      // ADDI  R6, R6, 1              index3++    
  36: instruction = 32'h04012800;      // ADD R5, R0, R1               sum = element1 + element2
  40: instruction = 32'h18C50000;      // STORE R5, 0(R6)              MEM[index3] = sum
  44: instruction = 32'h1508FFFF;      // ADDI  R8, R8, -1             count--
  48: instruction = 32'h2500FFDC;      // BNEZ R8  -36                if (count != 0) goto TOP
  52: instruction = 32'h28000000;      //HALT
  56: instruction = 32'h28000000;      //HALT 
   default: instruction = 32'h0;
   endcase     
*/

      // Program 3B
 
/* 
   0: instruction = 32'h15080005;      // ADDI  R8, R8, 5              count = size;
   4: instruction = 32'h1442FFFF;      // ADDI  R2, R2, -1             index1 =  -1
   8: instruction = 32'h04482000;      // ADD   R4, R2, R8             index2 = index1 + size
  12: instruction = 32'h04883000;      // ADD   R6, R4, R8             index3 = index2 + size   
  16: instruction = 32'h14840001;      // ADDI  R4, R4, 1          TOP:index2++ 
  20: instruction = 32'h10810000;      // LOAD R1, 0(R4)                element2 = MEM[index2] 
  24: instruction = 32'h14420001;      // ADDI  R2, R2, 1               index1++
  28: instruction = 32'h10400000;      // LOAD R0, 0(R2)                element1 = MEM[index1]
  32: instruction = 32'h04012800;      // ADD R5, R0, R1                sum = element1 + element2
  36: instruction = 32'h14C60001;      // ADDI  R6, R6, 1               index3++    
  40: instruction = 32'h18C50000;      // STORE R5, 0(R6)               MEM[index3] = sum
  44: instruction = 32'h1508FFFF;      // ADDI  R8, R8, -1              count--
  48: instruction = 32'h2500FFDC;      // BNEZ R8  -36                  if (count != 0) goto TOP
  52: instruction = 32'h28000000;      //HALT
  56: instruction = 32'h28000000;      //HALT 
   default: instruction = 32'h0;
   endcase     
*/
     

end

   always @(pc_pi)  begin  
   #5;      $display("\nINS_MEM:\tTime:%3d\tPC: %2d\tInstruction: %x", $time, pc_pi, instruction_po);
   end
   
endmodule


