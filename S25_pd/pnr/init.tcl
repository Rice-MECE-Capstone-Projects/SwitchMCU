#Initialize design

# Initializing commands
set_global _enable_mmmc_by_default_flow      $CTE::mmmc_default
suppressMessage ENCEXT-2799

#Set tech lef, std lef
set init_lef_file "/Your path to/skywater-pdk-libs-sky130_fd_sc_hd/tech/sky130_fd_sc_hd__nom.tlef /Your path to/skywater-pdk-libs-sky130_fd_sc_hd/cells/merged_library.lef"

#Set power net
set init_gnd_net gnd
set init_design_settop 0
set init_pwr_net vdd

#Set top module
set init_top_cell "reg_file"
#Load netlist
set init_verilog "/Your path to/reg_file.vg"

init_design
