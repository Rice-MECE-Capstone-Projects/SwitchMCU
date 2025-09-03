.global _start                 # Make _start globally accessible for the linker

.section .text                 # Place code in the .text section
.align 2                       # Align to a 4-byte boundary (optional but common)
_start:
    la sp, _stack_start        # Load the stack pointer with the top of the stack
    call main                  # Call the main function
    j _start                   # Infinite loop after the main function returns

.section .data                 # Define .data section for initialized variables
.align 2
# _stack_start:
#    .word 0x00001000           # Stack starts at the end of Data Memory (address defined in link.ld)
