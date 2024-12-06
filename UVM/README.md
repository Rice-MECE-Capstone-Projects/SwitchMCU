# UVM setup steps
## On Window platform 
Using ModelSim SE (System Edition):
Create a new project, skip adding any files and add makefile command lines shown below in the command window. The UVM library version installed is modelsim-win64-10.7-se.exe. After successful installation and activation, you can see the compiled UVM library in the modelsim installation directory, and generate a .dll file for UVM verification.
Makefile command:


UVM_HOME indicates the place where your UVM library is
WORK_HOME is the directory where you put your SystemVerilog files
sv_lib is where your uvm_dpi package is located.
Then, run all the command lines at a time and the compilation will success and gives the report
```shell
vlib work
set UVM HOME D:/Modelsimse/verilog_src/uvm-1.1d
set WORK HOME D:/M2/UVM/UVM example
vlog +incdir+$UVM_HOME/src -L mtiAvm - mtiovm -L mtiuvm -L mtiUPF $UVM _HOME/src/uvm pkg.sv $WORK_HOME/dut.sv top tb.sv
vsim -c -sv lib D:/Modelsimse/uvm-1.1d/win64/uvm_dpi +UVM TESTNAME=my _driver work.top_tb -voptargs=+acc
```


## On Linux platform
