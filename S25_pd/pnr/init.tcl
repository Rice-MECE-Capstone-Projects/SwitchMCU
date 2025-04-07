#Initialize design

# Initializing commands
set_global _enable_mmmc_by_default_flow      $CTE::mmmc_default
suppressMessage ENCEXT-2799

#Set tech lef, std lef
set init_lef_file "/Your path to/skywater-pdk-libs-sky130_fd_sc_hd/tech/sky130_fd_sc_hd__nom.tlef /Your path to/skywater-pdk-libs-sky130_fd_sc_hd/cells/merged_library.lef"

set init_lib_file [list \
  "$skywater/timing/sky130_fd_sc_hd__tt_025C_1v80.lib" \
  "$skywater/timing/sky130_fd_sc_hd__ss_100C_1v60.lib" \
]
set init_lib_cell_view "timing"

set init_mmmc_file "/storage-home/c/cl228/capstone/riscv_test/pnr/regfile.view"

#Set power net
set init_gnd_net gnd
set init_design_settop 0
set init_pwr_net vdd

#Set top module
set init_top_cell "reg_file"
#Load netlist
set init_verilog "/Your path to/reg_file.vg"

init_design
