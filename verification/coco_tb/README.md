# <div align="center"> CocoTB Auto Verification Suite </div>  
  
<div align="center"> <b> Rice Switch Core </div>  
  
## Contents  
- CocoTB resources  
- Environment setup
- Single file verification  
- Multiple file verification  
  
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
  
## Single file verification  
### Work flow diagram  
<div align="center">  
<img src="https://s2.loli.net/2024/12/07/DpC1eFksMKhn43f.png" alt="workflow" width="50%" />
</div>  
<div align="center">  
work flow for single verilog file  
</div>  
When we want to use cocotb to verification single verilog file, you just need to follow the instruction below, take decoder_swc.v as an example:  
  
1. Put your dut file under "./DUT" folder, like "./DUT/decoder_swc.v"  
2. Write your testbench and put it under "./Testbench", like "./Testbench/test_dec.py"  
3. Run the command as below:  
```
python verify.py dec_swc.v
```
By doing this an automatically wrapper file will be generated under "./DUT_Wrapper" folder, in this example the wrapper file name would be "dec_swc_wrapper.v", feel free to add extra logic or command to this wrapper file for detailed test.

Also you shall see the result in your command line.

## Multiple files verification  
### Work flow diagram  
<div align="center">  
<img src="https://s2.loli.net/2024/12/07/BA7PbuDf2ckdRWn.png" alt="workflow" width="80%" />
</div>  
<div align="center">  
work flow for single verilog file  
</div>  
When we want to use cocotb to verify multiple files things become much more complex. It takes more steps:

 1. Put all of DUTs under "./DUT" folder
 2. Write your testbench and put it under "./Testbench", the filename should be "test_top.py".
 3. Run the command as below:
 ```
python verify.py DUT1.v DUT2.v ... DUTn.v 
```
Normally first time running this won't success because the v_connector can't wire all the signals correctly and competely, please mannually modify the top wrapper file.

Same as single file verification, you can check the simulation result on your command line.