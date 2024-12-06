# UVM setup steps
## On Window platform 
Using ModelSim SE (System Edition):
Create a new project, skip adding any files and add makefile command lines shown below in the command window. The UVM library version installed is modelsim-win64-10.7-se.exe. After successful installation and activation, you can see the compiled UVM library in the modelsim installation directory, and generate a .dll file for UVM verification.

Makefile command:

```vlib work```

```set UVM HOME D:/Modelsimse/verilog_src/uvm-1.1d```

UVM_HOME indicates the place where your UVM library is

```set WORK HOME D:/M2/UVM/UVM example```

WORK_HOME is the directory where you put your SystemVerilog files

```vlog +incdir+$UVM_HOME/src -L mtiAvm - mtiovm -L mtiuvm -L mtiUPF $UVM _HOME/src/uvm pkg.sv $WORK_HOME/dut.sv top tb.sv```

sv_lib is where your uvm_dpi package is located.

```vsim -c -sv lib D:/Modelsimse/uvm-1.1d/win64/uvm_dpi +UVM TESTNAME=my _driver work.top_tb -voptargs=+acc```

Then, run all the command lines at a time and the compilation will success and gives the report



## On Linux platform
### RICE CLEAR ENVIRONMENT
In a Questasim UVM environment, start by ensuring the shell is set to Bash (check with echo $SHELL) and coordinate with IT if necessary to convert initialization files from setup*.csh to setup*.sh for proper EDA license sourcing. Because UVM-1.2 is not compatible with Questasim 2023.1, switch to UVM-1.1d by setting the environment variable:

```export UVM_HOME=/clear/apps/siemens-2023/questa/2023.2/questasim/verilog_src/uvm-1.1d```

Then compile both the design and testbench, ensuring UVM sources are included:

```vlog -sv -timescale 1ns/1ns -mfcu +incdir+./+$UVM_HOME/src design.sv testbench.sv```

If necessary, you can compile them separately:

```vlog -sv -timescale 1ns/1ns -mfcu +incdir+./+$UVM_HOME/src design.sv```

```vlog -sv -timescale 1ns/1ns -mfcu +incdir+./+$UVM_HOME/src testbench.sv```

Invoke the simulation with:

```vsim top_module_name```

To run without the GUI:

```vsim tbench_top -do "run; quit"```

For coverage:

```vsim -c -coverage tbench_top -do "run -all; quit"```

Successful setup is confirmed by the appearance of UVM messages, a “TEST PASS” message, and coverage statistics (e.g., “Coverage is 66.67%”) in the output.
