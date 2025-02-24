
![5381740418110_ pic_hd](https://github.com/user-attachments/assets/e39c6580-7d70-4156-a7b2-bf1e0f39d967)




The RISC-V ecosystem is growing rapidly, but a gap remains in transitioning RTL designs to manufacturable chips. This project aims to bridge that gap by implementing a complete ASIC physical design flow, starting from a basic ELEC 527 framework and defining our own process to achieve GDSII while optimizing PPA. Current work from the previous semesters require revisions and additions before it is able to be transferred to a manufacturable chip. Our solution includes adapting previous flows to our RISC-V core using industry standard tools such as Design Compiler and Innovus to create our own automated flow, beginning with synthesizing the RTL all the way to generating a GDSII layout. By next semester, our design should meet performance, power, and area constraints, and also be ready for actual tapeout with minor modifications.

Design flow

Synthesis(Convert .lib to .db) : Library Compiler
Input: .lib 	output: .db

Synthesis : Design Compiler
Input: .v/.sdc/.lib/.db/.lef/.tcl 	output: .vg/.sdf/.sdc/.db
 
Floorplanning: Innovus
Place and Route: Innovus
Clock Tree synthesis: Innovus
Input: .vg/.sdc/.lib/.lef/ .qrc or .qx 	output: .vg/.sdf/.gds/.spef/.ctstch/

RC extraction: StarRC
Input: .gds/.v/.db/.cmd or .cfg	 output: .spef

Static Timing Analysis: PrimeTime
Input: .vg/.sdc/.lib/.spef 	output: report

Design verification (LVS, DRC): Calibre
