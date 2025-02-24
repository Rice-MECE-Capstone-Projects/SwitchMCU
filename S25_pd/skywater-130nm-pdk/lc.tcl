set lib_path "<your path to ‘skywater-pdk-libs-sky130_fd_sc_hd/timing’>"
set output_path "<your path to the lc_shell output>"
# get all .lib file
foreach lib_file [glob -nocomplain $lib_path/*.lib] {
	set base_name [file rootname [file tail $lib_file]]
	read_lib $lib_file
	set lib_name [file rootname [file tail $lib_file]]
	write_lib $lib_name -format db -output $output_path/${base_name}.db
}
exit
