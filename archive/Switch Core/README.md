# 5 stage pipeline processor
## Introduction
To get better understanding of RV32I based 5 stage pipeline processor. We designed the instruction fetch, decode, execution, memory access and write back stage seperately. The overall structure of the Switch core is shown as below.


![swtich core](https://github.com/Rice-MECE-Capstone-Projects/SwitchMCU/blob/main/README.assets/core.png)


## Compile

Go to rice.clear.ssh, goto Questa folder. Do 

```shell
vlib work
vlog branPC.v dataMem.v decode.v exec.v insMem.v pc.v       pipeline.v regfile.v tb_processor.v
vlog processor_testbench 
```
Do synthesis in Synthesis folder with compile.tcl file
```shell
run
```
