# <div align="center"> CocoTB Verification Suite </div>  
  
<div align="center"> <b> Rice Switch Core </div>  
  
## Contents  
- CocoTB resources  
- Environment setup
<<<<<<< HEAD
- Multiple file verification 
- Coverage 
- Completed Testbench Block Diagrams
=======
- Single file verification  
- Multiple file verification
- Completed Testbench Block Diagrams  
>>>>>>> 5403931b28f3f8efc9d538c58e2d3d6d109973e4
  
## CocoTB resources  
https://docs.cocotb.org/en/stable/quickstart.html  
  
## Environment setup  
### MacOS

### Windows

 1. Use "win+R" then type in "cmd" to open windows command line.
 2. use the command below to install wsl on you windows computer:
```
wsl --install
```
 3. install python, python-venv, iverilog, gtkwave with the commands below:
```
sudo apt update && sudo apt upgrade -y
sudo apt install python3 python3-pip -y
sudo apt install python3-venv -y
sudo apt install iverilog -y
sudo apt install gtkwave -y
```
 4. create python virtual environment:
```
python3 -m venv YOUR_VENV_NAME
```
5. activate virtual environment then install cocotb:
```
source myenv/bin/activate
pip install cocotb
```

Congratulations! You have finished installing cocotb environment on your windows computer! For your convenience please also follow the steps below, which could help you mount your working directory to your wsl and automatically activate virtual environment for you.

 1. open wsl, go to the home directory
 2. use the command below to open ./.bashrc:
```
nano ./.bashrc
```
 3. mount your working directory and activate your virtual environment by adding the commands below to the end of .bashrc file:
```
cd /mnt/YOUR_WORKING_DIRECTORY
source ~/YOUR_VENV_NAME/bin/activate
```
A screenshot for your reference:
<div align="center">  
<img src="https://s2.loli.net/2024/12/07/e4hoD9zYujrKaJT.png" alt="setup" width="85%" />
</div>  
<div align="center">  
.bashrc edit  
</div>  

 4. use "ctrl+X" to exit and save the modification.
 
Congratulations! You have finish all the cocotb setup, don't forget to use it in your vistual studio code!
  
## Multiple files verification  
### Work flow diagram  
<div align="center">  
<img src="https://s2.loli.net/2025/05/03/8liOz3VtTjaD62A.png" alt="workflow" width="80%" />
</div>  
<div align="center">  
work flow for single verilog file  
</div>  
When we want to use cocotb to verify multiple files things become much more complex. It takes more steps:

 1. Put all of DUTs under "./DUT" folder
 2. Write your testbench and put it under "./Testbench", the filename should be "test_top.py".
 3. Run the command as below:
```
python multi_verify.py DUT1.v DUT2.v ... DUTn.v 
```
Normally first time running this won't success because the v_connector can't wire all the signals correctly and competely, please mannually modify the top wrapper file.

Same as single file verification, you can check the simulation result on your command line.

## Coverage 
### Coverage bins setup
For now we only focus on the instruction coverage. We set the coverage bins based on instruction types, instruction source/destination register addresses, instruction immediate number and the cross-coverage when one type of instruction has both register addresses and immediate numbers. Below is the diagram of detailed bins setting.
<div align="center">  
<img src="https://s2.loli.net/2025/05/03/VNvLdwIqRrXZiC2.png" alt="bins" width="85%" />
</div>
### Coverage bins hit and report
A detailed sample usage has been written in the coverage.py for your reference.
<div align="center">  
<img src="https://s2.loli.net/2025/05/03/xOMtudS2HXPivW5.png" alt="sample usage" width="85%" />
</div>
You can either choose to fill in all the elements (R,I,S,B,U,J,IMM) or just fill in the necessary parts. The numbers you feed to the coverage library can be fetched from the transaction module. When the transaction module generate a transaction, it will also generate a list which are the labels of the bins.

## Completed Testbench Block Diagrams

Below are block diagrams for all of the completed testbenches for the core. These diagrams present a digestable view of what is happening in the tests. They do not show every single signal, but they do give insights into our testing approach and will be useful for anymore aiming to recreate our tests or make similar tests in the future. 

<div align="center">  
<img src="https://i.ibb.co/nNcDf0Jw/decode-test-drawio.png" alt="workflow" width="80%" />
</div>  
<div align="left">  
The verification testbench for the decode module is structured on a randomly driven instruction-based methodology. The DUT is driven with a random instruction by an instruction generator, which also provides the set of expected control signals, which represent the correct decode behavior. Once the instruction is embedded in the DUT, its actual outputs are tracked and passed to a scoreboard. The scoreboard compares the DUT's outputs to expected values and reports discrepancies. This structure enables robust and automated verification of the decode logic, and high coverage is achieved with random instruction generation and tight integration between stimulus, reference model, and result check.
</div>  
<div align="center">  
<img src="https://i.ibb.co/chb21dZS/execute-test-drawio-1.png" alt="workflow" width="80%" />
</div>  
<div align="left">  
A similar verification strategy was employed on the execute module with some key differences. Instead of taking a raw instruction as its input, the execute module takes a set of control signals that simulate the decode stage’s output. When the execute module computes the outputs, these computations are compared with the theoretical calculations produced by the control signal generator. 
</div>  
<div align="center">  
<img src="https://i.ibb.co/GyGXTKB/decode-execute-test-drawio.png" alt="workflow" width="80%" />
</div>  
<div align="left">  
A testbench was also incorporated to verify the combined operation of the decode and execute modules executed in sequence. In this setup, the instruction generator produces a random instruction and feeds it into the decode module only. The generated control signals are then forwarded to the execute module, simulating the actual data flow in the processor pipeline. Parallely, the instruction generator internally produces the predicted end result of the execute phase through emulating decode and execute activity in software. The scoreboard compares the output of the execute module with the end-to-end theoretical result created internally by this simulator so that the testbench is able to catch errors produced by incorrect decoding, faulty control propagation, or flawed execution logic.   
</div>  
<div align="center">  
<img src="https://i.ibb.co/tPLkZ3q4/decode-execute-regfile-test-drawio.png" alt="workflow" width="80%" />
</div>  
<div align="left">  
A more extensive testbench was developed to guarantee the interface between the decode, execute, and register file modules. The decode and execute pipeline receive a random instruction, with the output write-back data and destination register forwarded to the register file. The test proceeds to read out the value stored into the register file to confirm correct execution and write-back. The expected result—created in software through emulation of the entire decode and execute cycle—is compared against the value read from the register file, checking for correctness across three phases of the pipeline.  
</div>  
<div align="center">  
<img src="https://i.ibb.co/20BDdsNW/load-test-drawio-1.png" alt="workflow" width="80%" />
</div>  
<div align="left">  
To test load instructions, a testbench was created that incorporated the decode, execute, register file, and data memory modules. A random load instruction is passed through decode and execute, where the effective memory address is determined. The address is sent to the data memory module, which interacts with a BRAM controller to fetch the correct data from main memory via BRAM. When retrieved, the data is written back to the destination register within the register file. The testbench then reads the value from the register file and compares it with the result expected, precomputed in software by modeling the complete instruction path. 
</div>  
<div align="center">  
<img src="https://i.ibb.co/rRqTnc8q/store-test-drawio.png" alt="workflow" width="80%" />
</div>  
<div align="left">  
Store instruction testing is performed in the reverse dataflow: the register operands and decoded instruction are used to compute a memory address in the execute phase, and source data is read from the register file. This data and target address are passed through the data memory module, which sends them through the BRAM controller for writing into BRAM. The testbench subsequently reads directly from BRAM and verifies the value stored against expected data as produced in software, verifying correct operand selection, address calculation, and memory write operation.
</div>  
