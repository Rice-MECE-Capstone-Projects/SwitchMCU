
#/**************************************************/
#/* Compile Script for Synopsys                    */
#/*                                                */
#/* dc_shell-t -f compile_dc.tcl                   */
#/*                                                */
#/* Skywater 130nm PDK                             */
#/*                                                */
#/**************************************************/

#/* User Input Data Section: List files, module, clock, frequency below. */
#/* Edit this part only of the file.                                     */
#/* Add all verilog files, separated by spaces after keyword "list"      */

#/* All content in <> need to be modified to your own path               */

set my_verilog_files [list <your path to verilog file>]  ;# <-- MODIFY HERE

#/* Top-level Module Name update                            */
set my_toplevel <your toplevel name>  ;# <-- MODIFY HERE

#/* The name of the clock pin. If no clock-pin     */
#/* exists, pick anything                          */
#/* For two phase clock, just list clka here       */
set my_clock_pin clk

#/* Target frequency in MHz for optimization       */
set my_clk_freq_MHz 2.94

#/* Delay of input signals (Clock-to-Q, Package etc.)  */
set my_input_delay_ns 1

#/* Reserved time for output signals (Holdtime etc.)   */
set my_output_delay_ns 1

#/* Start of Synopsys library cells location data.               */
set skywater "<your path to 'skywater-pdk-libs-sky130_fd_sc_hd'>"  ;# <-- MODIFY HERE
set search_path [concat  $search_path $skywater]
set alib_library_analysis_path $skywater

set link_library [set target_library [concat  [list <your path to .db file>] [list dw_foundation.sldb]]]  ;# <-- MODIFY HERE
set target_library "<your path to .db file>"  ;# <-- MODIFY HERE
#/* End of Synopsys library cells location data.                  */


define_design_lib WORK -path ./WORK
set verilogout_show_unconnected_pins "true"

analyze -f verilog $my_verilog_files

elaborate $my_toplevel

current_design $my_toplevel

link
uniquify

set my_period [expr 1000 / $my_clk_freq_MHz]

set find_clock [ find port [list $my_clock_pin] ]
if {  $find_clock != [list] } {
   set clk_name $my_clock_pin
   create_clock -period $my_period $clk_name
} else {
   set clk_name vclk
   create_clock -period $my_period -name $clk_name
}

set_driving_cell  -lib_cell INVX1  [all_inputs]
set_input_delay $my_input_delay_ns -clock $clk_name [remove_from_collection [all_inputs] $my_clock_pin]
set_output_delay $my_output_delay_ns -clock $clk_name [all_outputs]

compile -ungroup_all -map_effort medium

compile -incremental_mapping -map_effort medium

check_design
report_constraint -all_violators

set filename [format "%s%s"  $my_toplevel ".vg"]
write -f verilog -output IOs/netlists/$filename

set filename [format "%s%s"  $my_toplevel ".sdc"]
write_sdc IOs/sdcs/$filename

report_cell
report_area
report_timing -path full -delay max -max_paths 3 -nworst 1
report_power

redirect REPs/regfile_timing.rep { report_timing }
redirect REPs/regfile_cell.rep { report_cell }
redirect REPs/regfile_power.rep { report_power }

quit
