#/**************************************************/
#/* Compile Script for Synopsys                    */
#/*                                                */
#/* dc_shell-t -f compile_dc.tcl                   */
#/*                                                */
#/* OSU FreePDK 45nm                               */
#/* Modified for OSU ami05 - Rice U. 2018, 2024    */
#/*                                                */
#/**************************************************/

#/* User Input Data Section: List files, module, clock, frequency below. */
#/* Edit this part only of the file.                                     */
#/* Add all verilog files, separated by spaces after keyword "list"      */

set my_verilog_files [list branchPC.v  dataMem.v  decode.v  exec.v  insMem.v  pc.v  pipeproc.v  regfile.v ]

#/* Top-level Module Name update                            */
set my_toplevel processor

#/* The name of the clock pin. If no clock-pin     */
#/* exists, pick anything                          */
#/* For two phase clock, just list clka here       */
set my_clock_pin clka

#/* Target frequency in MHz for optimization       */
set my_clk_freq_MHz 50

#/* Delay of input signals (Clock-to-Q, Package etc.)  */
set my_input_delay_ns 1

#/* Reserved time for output signals (Holdtime etc.)   */
set my_output_delay_ns 1


#/********************************************************************/
#/********************************************************************/
#/* No modifications needed below. Do not edit or remove.            */
#/*                                                                  */
#/* Paths updated for Rice U. on CLEAR cluster 2018, 2024.           */
#/********************************************************************/
#/********************************************************************/

#/* Start of Synopsys library cells location data.               */
set OSUcells "/clear/apps/osu/soc/synopsys/lib/ami05"
set search_path [concat  $search_path $OSUcells]
set alib_library_analysis_path $OSUcells

set link_library [set target_library [concat  [list osu05_stdcells.db] [list dw_foundation.sldb]]]
set target_library "osu05_stdcells.db"
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

set filename [format "%s%s"  $my_toplevel ".vh"]
write -f verilog -output $filename

set filename [format "%s%s"  $my_toplevel ".sdc"]
write_sdc $filename

report_cell 
report_area 
report_timing -path full -delay max -max_paths 3 -nworst 1
report_power

redirect timing.rep { report_timing }
redirect cell.rep { report_cell }
redirect power.rep { report_power }

quit
