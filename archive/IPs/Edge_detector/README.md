Edge Detector Module Documentation

Overview:
This project involves the design of a Verilog module named edge_detect, which detects rising and falling edges of a digital signal. The module is essential for digital signal processing applications where edge detection triggers specific actions or marks significant events.

Design Philosophy:
The edge detection module is designed to be simple yet robust, capable of functioning reliably in various digital environments. The design focuses on sensitivity to both rising and falling edges, allowing for precise edge detection that can be used in timing-critical applications.

Module Description:
edge_detect
Inputs:
clk: Clock input for synchronizing the operations.
rstn: Active low reset signal to initialize the module.
sig_now: Current signal input whose edges are to be detected.
Outputs:
rising_edge: High when a rising edge (0 to 1 transition) is detected in sig_now.
falling_edge: High when a falling edge (1 to 0 transition) is detected in sig_now.
Functionality:
The module continuously compares the current signal (sig_now) with its previous state (sig_prev) to detect changes.
Rising and falling edges are detected using logical operations that compare sig_now and sig_prev.
Internal Mechanisms:
sig_prev: A temporary signal that holds the previous state of sig_now for comparison purposes.
The detection logic uses basic logical operators to determine transitions, making the design efficient and fast.
Testbench (edge_detect_tb)
The testbench module simulates various signal conditions to validate the functionality of the edge_detect module:

Setup and Initialization:
Initializes the clock and reset signals.
Generates a series of signal transitions on sig_now to test both rising and falling edge detection.
Waveform Generation:
Records simulation results in a Value Change Dump (VCD) file for waveform analysis.
Verification Plan
The verification strategy employs a combination of directed and constrained-random testing:

Directed Testing:
Specific signal patterns are manually applied to sig_now to ensure that the edge detection logic correctly identifies all transitions.
Constrained-Random Testing:
Random signal transitions are generated to test the robustness and reliability of the edge detection under varied conditions.
Coverage Analysis:
Measures how well the tests cover the specified functionality, ensuring all possible transitions are tested.
SystemVerilog Verification Environment
The verification environment is developed in SystemVerilog and uses several classes to automate the testing and result verification:

Classes and Components:
Packet: Represents a stimulus packet containing the signal state and expected outputs.
Driver: Drives the stimulus onto the edge_detect interface.
Monitor: Observes the outputs from the DUT and captures the results.
Scoreboard: Compares the expected results against the actual outputs from the DUT to check for correctness.
Generator: Generates random or specific test cases based on the verification plan.
Virtual Interface (edge_if):
Provides a connection mechanism between the testbench components and the edge_detect module.
Summary
The edge_detect module and its verification framework provide a robust solution for detecting signal edges in digital applications. The comprehensive testing ensures reliability across different scenarios, while the SystemVerilog environment supports extensive and efficient verification. This modular and scalable approach ensures that the edge detection module can be integrated into larger systems with confidence.

----------------------------------------------------------------------------------------------------

My work flow:
1.	Create the design code: edge_detect.sv
2.	Create an initial test case to test if the design works: edge_detect_tb.sv Then debug.
3.	Write comments and descriptions for the codes, like parameters, how it works, assumptions.
4.	Work on the Verification plan. Review textbooks and some websites.
5.	Create a simple Verification Structure, then debug to 0 errors, 0 warnings.
6.	Add other features to the testbench, like Constraint Random Test (CRT) and Coverage.
7.	Debug to 0 errors, 0 warnings.
8.	Check the Simulation Log and the Waveform, then debug until they are correct.
9.	Write detailed comments for the code.
10.	Write this report.
Strategy of Verification:
The verification of the edge detection module will be executed in four primary stages: setup, stimulus generation, response monitoring, and result checking. The testbench will instantiate the DUT and use a virtual interface to drive the test signals. A Packet class will generate randomized test stimulus with constraints to toggle the signal. The generator will create these packets, and the driver will apply them to the DUT. The monitor will observe the DUT outputs and pass information to the scoreboard, which will verify the DUT responses against the expected results computed by the Packet class. Coverage will be measured using a covergroup that tracks signal transitions and edge detections. The verification environment env will be instantiated by a test class. The final top_level module tb coordinates the interaction between the generator, driver, monitor, and scoreboard. Waveforms will be dumped to a VCD file for post-simulation analysis. The verification will be considered successful when all coverage points are hit and the scoreboard reports no mismatches.


Lechuan Sun
3/5/2024
