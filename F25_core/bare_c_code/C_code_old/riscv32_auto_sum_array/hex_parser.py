def parse_hex_file(input_filename, output_filename):
    with open(input_filename, 'r') as infile:
        lines = infile.readlines()

    parsed_output = []
    address = None
    data_list = []
    for line in lines:
        line = line.strip()
        if line.startswith('@'):
            if address is not None and data_list:
                parsed_output.append(f"{address}")
                while len(data_list) >= 4:
                    word = ''.join(data_list[:4][::-1])
                    parsed_output.append(word)
                    data_list = data_list[4:]
                if len(data_list) > 0:
                    remaining_word = ''.join(data_list[::-1]).ljust(8, '0')
                    parsed_output.append(remaining_word)
                data_list = []
            address = line
        else:
            data_list.extend(line.split())

    # Process remaining data_list
    if address is not None and data_list:
        parsed_output.append(f"{address}")
        while len(data_list) >= 4:
            word = ''.join(data_list[:4][::-1])
            parsed_output.append(word)
            data_list = data_list[4:]
        if len(data_list) > 0:
            remaining_word = ''.join(data_list[::-1]).ljust(8, '0')
            parsed_output.append(remaining_word)

    with open(output_filename, 'w') as outfile:
        for line in parsed_output:
            outfile.write(line + '\n')

# Example usage
# parse_hex_file('program_incorrect.hex', 'parsed_output.hex')
# Example usage
parse_hex_file('compilation/program_incorrect.hex', 'compilation/program.hex')