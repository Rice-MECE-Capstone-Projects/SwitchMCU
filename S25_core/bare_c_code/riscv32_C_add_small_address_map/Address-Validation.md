# RISC-V Memory Address Validation
This section demonstrates three key methods for validating memory address mapping in a RISC-V system, referencing the command-line output provided during the execution of `compile.sh`, `program_disassembly.txt`, and `instruction.log`.
1. Instruction Address Validation
2. Data Access Validation
3. Peripheral Access Validation

## Instruction Address Validation
This method verifies that all instructions are located within the instrram memory region defined in the `link.ld` script. From the `link.ld` file we could know the instruction memory address is from 0x00000000 to 0x000003FF.
```sh
instrram : ORIGIN = 0x00000000, LENGTH = 1024 /* Instruction Memory: 128KB */
```

#### Steps
- Disassembly Analysis:
    - From `compile.sh` output:
        - The ELF Header shows Entry point address is: 0x114.
    - From `program_disassembly.txt`:
        - Disassembly starts at 00000000 <.data>.
        - Addresses increment by 4 bytes (e.g., `0: fd010113`, `4: 02812623`, etc.).
        - The last address shown is `120: ff5ff06f`.
    - From `instruction.log`:
        - <write_to_peripheral> starts at 0x00000000 to 0x00000034 (52 bytes).
        - <main> starts at 0x00000038 to 0x00000110 (216 bytes).
        - <_start> starts at 0x00000114 to 0x00000120 (12 bytes).
        - The last address is `120: ff5ff06f` in _start.
- Branch/Jump Target Verification
All jumps and branches target valid addresses within instruction memory:
    - In main:
        | Address | Instruction | Valid | Comment |
        | ------ | ------ | ------ | ------ |
        | 0x50 | j 7c | valid | forward jump |
        | 0x84 | bge a5,a4,54 | valid | backward branch |
        | 0x8c | j c8 | valid | forward jump |
        | 0xd0 | bge a5,a4,90 | valid | backward branch |
        | 0xe8 | bne a4,a5,100 | valid | forward branch |
        | 0xfc | j 110 | valid | forward jump |
        | 0x110 | j 110 | valid | infinite loop |
    - In _start:
        | Address | Instruction | Valid | Comment |
        | ------ | ------ | ------ | ------ |
        | 0x11c | jal ra,38 | valid | calls main |
        | 0x120 | j 114 | valid | infinite loop |
- Memory Region Check:
    - The `link.ld` defines `instrram: ORIGIN = 0x00000000, LENGTH = 1024` (0x400 in hex).
    - All instruction addresses (0x00000000 to 0x00000120) are within this range.
- Entry Point Verification:
    - The entry point 0x114 from the ELF header matches the start of _start in `instruction.log`.

#### Results
* All instructions reside within the instrram region (0x00000000 to 0x000003FF).
* The entry point is correctly set to 0x114, which is a common entry point value for RISC-V.

## Data Access Validation
This method verifies that all data accesses (stack, variables, arrays) are confined to the dataram memory region. From the `link.ld` file we could know the data memory address is from 0x00000800 to 0x00000FFF.
```sh
dataram : ORIGIN = 0x00000800, LENGTH = 2048 /* Data Memory: 256KB */
```

#### Steps
- Stack Analysis:
    - Stack starts at 0x00001000 (stackstart = end of dataram).
    - Minimum stack size: 0x400 (1024 bytes), the valid stack range is from 0x00000C00 to 0x00001000.
    - From `instruction.log`:
        - <_start> initializes sp to 0x1000 (end of dataram).
        - write_to_peripheral and main use `addi sp, sp, -[value]` to allocate stack space.
        - main: 160 bytes
            ```sh
            addi sp,sp,-160
            ```
        - Instructions like `sw s0, 44(sp)` indicate stack usage with offsets from sp.
        - The array is located on the stack, by using the frame pointer s0, and an offset of -132.
        - Maximum stack depth is 208 bytes (when main calls write_to_peripheral), so there are plenty of headroom below minimum stack requirement.
    - The `link.ld` defines 
        ```sh
        dataram: ORIGIN = 0x00000800, LENGTH = 2048
        ```
- Local Variable Tracking:
There arer several local variables were being used in the main function, checking all of these local variables located within the range is important.
    - array[30]: Located at s0-132 to s0-12 (120 bytes)
        > Detail explaination in the next section.

    - sum: Located at s0-20 (4 bytes)
    - Loop counters: Located at s0-24 and s0-28 (4 bytes each)
- Array Memory Usage:
    - int array[30] in main requires 30 * 4 = 120 bytes
    - Array access pattern in disassembly:
        ```sh
        fe842783    lw a5,-24(s0)     # Load loop counter
        00279793    slli a5,a5,0x2    # Multiply by 4 (sizeof int)
        ff078793    addi a5,a5,-16    # Adjust offset
        008787b3    add a5,a5,s0      # Calculate address
        f6e7ae23    sw a4,-132(a5)    # Store to array element
        ```
    - As the previous diagram shows, all array elements accesses properly in bound without memory overflow.

#### Results
- `0x1000` is within the `dataram` region.
- Stack and local variable accesses reside within the `dataram` region.
- The array is also located on the stack, which is within the `dataram` region.

## Peripheral Access Validation
This method verifies that all peripheral register accesses are to the correct addresses within the peripheral region.

#### Steps
- Peripheral Address Verification:
    - From `program.c`:
        | Variable Name | Starting Address (Hex) | Starting Address (Binary) |
        | ------ | ------ | ------ |
        | PERIPHERAL_BASE | 0x00000600 | 1536 |
        | PERIPHERAL_SUM | 0x00000604 | 1540 |
        | PERIPHERAL_SUM_immediate | 0x00000608 | 1544 |
    - From `instruction.log`:
        ```sh
        li a0, 1536, li a0, 1540, li a0, 1544
        ```
        are used to load peripheral addresses, which match the variable address we defined in `program.c`.
        ```sh
        jal ra, 0 <write_to_peripheral>
        ```
        calls the write function.
- Peripheral Region Check:
    - The `link.ld` defines
        ```sh
        peripheral: ORIGIN = 0x00000600, LENGTH = 512
        ```
    - All peripheral addresses are within this range.

#### Results
- All addresses used (0x600, 0x604, 0x608) are within the defined range (0x600-0x7FF).
- No overlap between peripheral registers (each uses a separate 4-byte word).

## License
Apache License
Version 2.0, January 2004
