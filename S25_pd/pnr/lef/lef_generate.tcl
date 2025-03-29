set skywatercells "/Path to/skywater-pdk-libs-sky130_fd_sc_hd/cells"

set merged_lef_file "/Path to/merged_sky130.lef"

# First load tech lef file
set tech_lef_file "/Path to/skywater-pdk-libs-sky130_fd_sc_hd/tech/sky130_fd_sc_hd__nom.tlef"
puts "Loading TLEF file: $tech_lef_file"
loadLefFile $tech_lef_file


# Initialize lef file list
set init_lef_file [list $tech_lef_file]

# Iterate through and load all LEF files
foreach file [glob -directory $skywatercells */*1.lef] {
    puts "Loading LEF file: $file"
    loadLefFile $file
    lappend init_lef_file $file
}


write_lef_library $merged_lef_file
