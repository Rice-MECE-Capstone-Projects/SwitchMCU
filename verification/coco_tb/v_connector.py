import sys
import os
import re

v_list = []
formatted_input_ports = []
formatted_output_ports = []
auto_level = 1

def format_ports(ports):
    formatted_ports = []
    for width, name in ports:
        if width:
            width = width.replace("[", "").replace("]", "")
            bits = int(width.split(":")[0]) - int(width.split(":")[1]) + 1
        else:
            bits = 1
        formatted_ports.append(f"{name}_{bits}")
    return formatted_ports

# cut the input/output signal name and return the flag
def str_cutio(input_str):
    if input_str.endswith("_i"):
        return input_str.replace("_i", ""), -1
    elif input_str.endswith("_o"):
        return input_str.replace("_o", ""), 1
    else:
        return input_str, 1

def read_wrapper(verilog_file):
    with open(verilog_file, 'r', encoding='utf-8') as vfile:
        lines = vfile.readlines()
    lines = [line.split('//')[0].strip() for line in lines]

    inputs = []
    outputs = []
    in_module = False

    for line in lines:
        line = line.strip()
        if line.startswith("module"):
            in_module = True
        elif in_module:
            if line.startswith("input"):
                output = line.replace("input", "").strip().rstrip(";")
                inputs.append(output)
            elif line.startswith("output"):
                output = line.replace("output", "").strip().rstrip(";")
                outputs.append(output)
                for variable in inputs:
                    if variable in output:
                        inputs.remove(variable)
            elif line.startswith("endmodule"):
                in_module = False

    for i in range(len(inputs)):
        if inputs[i][-1] == ',':
            inputs[i] = inputs[i][0:-1]
        inputs[i] = ' '.join(inputs[i].strip().split())
    for i in range(len(outputs)):
        if outputs[i][-1] == ',':
            outputs[i] = outputs[i][0:-1]
        outputs[i] = ' '.join(outputs[i].strip().split())
    return inputs, outputs

def write_wrapper(verilog_file, inputs, outputs, connection_seq, connection_ooo, module_files):
    idx = 0
    inter_sig = ''
    inter_sig_len = ''
    connection_dict = {}
    with open("./DUT_2025_Wrapper/"+verilog_file, 'w') as wfile:
        wfile.write("module {} (\n".format(verilog_file.split('.')[0]))
        assert len(inputs) == len(outputs)
        # flatten the list
        inputs_flat = [item for sublist in inputs for item in sublist]
        outputs_flat = [item for sublist in outputs for item in sublist]
        # remove word "wire" from input and output signals
        # TODO: what if the signal is reg?
        for i in range(len(inputs_flat)):
            inputs_flat[i] = inputs_flat[i].replace("wire ", "")
        for i in range(len(outputs_flat)):
            outputs_flat[i] = outputs_flat[i].replace("wire ", "")
        # TODO: this is a temp solution
        # replace N_param-1 with 31
        for i in range(len(inputs_flat)):
            inputs_flat[i] = inputs_flat[i].replace("N_param-1", "31")
        for i in range(len(outputs_flat)):
            outputs_flat[i] = outputs_flat[i].replace("N_param-1", "31")
        # if input signal is also in output signal, remove it from input signal
        for vars in inputs_flat:
            if vars in outputs_flat:
                inputs_flat.remove(vars)
        # remove duplicates based on ooo connections
        for dup_signal in connection_ooo:
            remove_flag = 0
            compensate_var = ''
            for var in inputs_flat:
                if dup_signal == var.split(' ')[-1]:
                    inputs_flat.remove(var)
                    remove_flag = remove_flag + 1
                    compensate_var = var
            if remove_flag > 1:
                inputs_flat.append(compensate_var)
        for inp in inputs_flat:
            wfile.write(f"    input {inp},\n")
        
        wfile.write(f"\n")
        outp_i = 0
        for outp in outputs_flat:
            outp_i = outp_i + 1
            if outp_i == len(outputs_flat):
                wfile.write(f"    output {outp}\n")
            else:
                wfile.write(f"    output {outp},\n")   
        wfile.write(f");\n\n")
        # create internal signals for connection_seq
        for connection in connection_seq:
            inter_sig_len = int(connection.split(',')[0].split('_')[-1])
            inter_sig = connection.split(',')[0].removesuffix('_'+connection.split(',')[0].split('_')[-1])
            inter_sig = inter_sig.removesuffix('_'+inter_sig.split('_')[-1])
            wfile.write(f"    wire [{inter_sig_len-1}:0] inter_{inter_sig};\n")
            # update connection dictionary
            for signal in connection.split(','):
                signal = signal.removesuffix('_'+signal.split('_')[-1])
                connection_dict.update({signal:'inter_{}'.format(inter_sig)})
        wfile.write(f"\n")
        # instantiate modules
        # TODO: need to modify it for multiple files
        # currently just use tmp for 2 files
        tmp = 0
        for file_name in module_files:
            module_name = file_name.split('.')[0]
            wfile.write(f"    {module_name} {module_name}_inst (\n")
            for inp in inputs[idx]:
                # check if the input is connected to internal signal
                if inp.split(' ')[-1] in connection_dict and tmp == 1:
                    wfile.write(f"        .{inp.split(' ')[-1]}({connection_dict[inp.split(' ')[-1]]}),\n")
                else:
                    wfile.write(f"        .{inp.split(' ')[-1]}({inp.split(' ')[-1]}),\n")
            outp_i = 0
            for outp in outputs[idx]:
                outp_i = outp_i + 1
                # check if the output is connected to internal signal
                if outp.split(' ')[-1] in connection_dict and tmp == 0:
                    wfile.write(f"        .{outp.split(' ')[-1]}({connection_dict[outp.split(' ')[-1]]})")
                else:
                    wfile.write(f"        .{outp.split(' ')[-1]}({outp.split(' ')[-1]})")
                if outp_i == len(outputs[idx]):
                    wfile.write(f"\n")
                else:
                    wfile.write(f",\n")
            wfile.write(f"    );\n")
            wfile.write(f"\n")
            idx = idx + 1
            tmp = 1
        wfile.write(f"    initial begin\n")
        wfile.write("        $dumpfile(\"./vcds/{}.vcd\");\n".format(verilog_file.split('.')[0]))
        wfile.write("        $dumpvars(0, {});\n".format(verilog_file.split('.')[0]))
        wfile.write(f"    end\n")
        wfile.write("endmodule\n")
# get parameters from parameter list
for i in range(1, len(sys.argv)):
    v_list.append(sys.argv[i])

# Step 1: Create wrapper file for each parameter
for file_name in v_list:
    os.system("python wrapper_maker.py {}".format(file_name.split('.')[0]))

# Step 2: for each wrapper file, find the io ports
for file_name in v_list:
    file_name = file_name.split('.')[0] + "_wrapper.v" 
    with open("./DUT_2025_Wrapper/{}".format(file_name), "r") as file:
        verilog_code = file.read()
    # TODO: this replacement is just a temp solution 
    # replace N_param-1 with 31
    verilog_code = re.sub(r'N_param-1', '31', verilog_code)
    input_pattern = r"input\s+(?:wire\s+|reg\s+)?(\[[\d:]+\]\s+)?(\w+)"
    output_pattern = r"output\s+(?:wire\s+|reg\s+)?(\[[\d:]+\]\s+)?(\w+)"


    input_ports = re.findall(input_pattern, verilog_code)
    output_ports = re.findall(output_pattern, verilog_code)
    formatted_input_ports.append(format_ports(input_ports))
    formatted_output_ports.append(format_ports(output_ports))

    # print("Input ports:", input_ports)
    # print(" ")
    # print("Output ports:", output_ports)
    # print(" ")
    
# Step 3 judge the order, this function is temporarily banned
pass

connections_seq = []
# Step 4 sequential connection, for now just 2 modules
for input_signal in formatted_input_ports[1]:
    for output_signal in formatted_output_ports[0]:
        name_in, width_in = input_signal.rsplit("_", 1)
        name_out, width_out = output_signal.rsplit("_", 1)
        new_name_in, flag_in = str_cutio(name_in)
        new_name_out, flag_out = str_cutio(name_out)
        if width_in == width_out and new_name_in == new_name_out and flag_in == -flag_out:
            connections_seq.append(f"{output_signal},{input_signal}")

connections_ooo = []
# Step 5 out-of-order connection
for input_signal_1 in formatted_input_ports[0]:
    for input_signal_2 in formatted_input_ports[1]:
        if(input_signal_1 == input_signal_2):
            connections_ooo.append(input_signal_1.removesuffix('_'+input_signal_1.split('_')[-1]))

inputs = []
outputs = []
# Step 6 generate finnal top module
# Step 6.1 collect all input and output ports
for file_name in v_list:
    file_name = file_name.split('.')[0] + "_wrapper.v" 
    input_tmp, output_tmp = read_wrapper("./DUT_2025_Wrapper/{}".format(file_name))
    inputs.append(input_tmp)
    outputs.append(output_tmp)
# Step 6.2 generate top module name
top_module_name = ''
for file_name in v_list:
    top_module_name += (file_name.split('.')[0]).split('_')[0] + '_'
top_module_name = top_module_name[:-1] + '.v'
# Step 6.3 write top module
write_wrapper(top_module_name, inputs, outputs, connections_seq, connections_ooo, v_list)

# Step 7 generate connection report
star_len=64
tmp = star_len/2
while tmp > 0:
    tmp = tmp - 1
    print("* ", end="")
print("*")
print("*    Connection Report".ljust(star_len) + "*")
print("*    Top Module: {}".format(top_module_name).ljust(star_len) + "*")
print(("*    Total Connections: {}".format(len(connections_seq)+len(connections_ooo))).ljust(star_len) + "*", end="\n"+"*".ljust(star_len) + "*""\n")
print("*    Seq Connections:".ljust(star_len) + "*",)
for conn in connections_seq:
    print(("*    "+conn).ljust(star_len) + "*")
print("*".ljust(star_len) + "*")
print("*    OOO Connections:".ljust(star_len) + "*",)
for conn in connections_ooo:
    print(("*    "+conn).ljust(star_len) + "*")
tmp = star_len/2
while tmp > 0:
    tmp = tmp - 1
    print("* ", end="")
print("*")