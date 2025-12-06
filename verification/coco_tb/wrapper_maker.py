import sys

def generate_wrapper(verilog_file, wrapper_file):
    with open(verilog_file, 'r', encoding='utf-8') as vfile:
        lines = vfile.readlines()
    lines = [line.split('//')[0].strip() for line in lines]

    module_name = ""
    inputs = []
    outputs = []
    inouts = []
    parameters = []
    in_module = False

    for line in lines:
        line = line.strip()
        if line.startswith("module"):
            in_module = True
            module_name = line.split()[1].split("(")[0]
        elif line.startswith("parameter"):
            # Parse parameters
            param_str = line.replace("parameter", "").strip().rstrip(";")
            parameters.append(param_str)
        elif in_module:
            if line.startswith("input"):
                inputs.append(line.replace("input", "").strip().rstrip(";"))
            elif line.startswith("inout"):
                inouts.append(line.replace("inout", "").strip().rstrip(";"))
            elif line.startswith("output"):
                outputs.append(line.replace("output", "").strip().rstrip(";"))
            elif line.startswith("endmodule"):
                in_module = False

    for i in range(len(inputs)):
        if inputs[i][-1] == ',':
            inputs[i] = inputs[i][0:-1]
        inputs[i] = ' '.join(inputs[i].strip().split())
    for i in range(len(inouts)):
        if inouts[i][-1] == ',':
            inouts[i] = inouts[i][0:-1]
        inouts[i] = ' '.join(inouts[i].strip().split())
    for i in range(len(outputs)):
        if outputs[i][-1] == ',':
            outputs[i] = outputs[i][0:-1]
        outputs[i] = ' '.join(outputs[i].strip().split())

    with open(wrapper_file, 'w') as wfile:
        wfile.write(f"module {module_name}_wrapper # (\n")
        for param in parameters:
            wfile.write(f"    parameter {param}\n")
        for inp in inputs:
            wfile.write(f"    input {inp},\n")
        ino_i = 0
        for ino in inouts:
            ino_i = ino_i + 1
            if ino_i == len(inouts) and len(outputs) == 0:
                wfile.write(f"    inout {ino}\n")
            else:
                wfile.write(f"    inout {ino},\n")
        outp_i = 0
        for outp in outputs:
            outp_i = outp_i + 1
            if outp_i == len(outputs):
                wfile.write(f"    output {outp}\n")
            else:
                wfile.write(f"    output {outp},\n")
        wfile.write(f");\n\n")
        wfile.write(f"    {module_name} dut (\n")
        for inp in inputs:
            wfile.write(f"        .{inp.split(' ')[-1]}({inp.split(' ')[-1]}),\n")
        ino_i = 0
        for ino in inouts:
            ino_i = ino_i + 1
            if ino_i == len(inouts) and len(outputs) == 0:
                wfile.write(f"        .{ino.split(' ')[-1]}({ino.split(' ')[-1]})\n")
            else:
                wfile.write(f"        .{ino.split(' ')[-1]}({ino.split(' ')[-1]}),\n")
        outp_i = 0
        for outp in outputs:
            outp_i = outp_i + 1
            if outp_i == len(outputs):
                wfile.write(f"        .{outp.split(' ')[-1]}({outp.split(' ')[-1]})\n")
            else:
                wfile.write(f"        .{outp.split(' ')[-1]}({outp.split(' ')[-1]}),\n")
        wfile.write(f"    );\n")
        wfile.write(f"    initial begin\n")
        wfile.write("        $dumpfile(\"./vcds/{}.vcd\");\n".format(module_name))
        wfile.write("        $dumpvars(0, {}_wrapper);\n".format(module_name))
        wfile.write(f"    end\n")
        wfile.write("endmodule\n")

if len(sys.argv) > 1:
    generate_wrapper('./DUT_2025/{}.v'.format(sys.argv[1]), 'DUT_2025_Wrapper/{}_wrapper.v'.format(sys.argv[1]))
else:
    generate_wrapper('./DUT_2025/toggle_bit.v', 'DUT_2025_Wrapper/toggle_bit_wrapper.v')
