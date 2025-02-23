We use Design Compiler for synthesis

```sh
mkdir WORK
mkdir IOs
cd IOs
mkdir netlist
mkdir sdcs
cd ../
mkdir LOGs
mkdir REPs
```

run synthesis
```sh
dc_shell-xg-t -64bit -f compile_dc.tcl | tee -i LOGs/<your name>.log
```
