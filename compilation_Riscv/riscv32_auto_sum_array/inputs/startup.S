.global _start

.section .text
_start:
    la sp, _stack_start     # Load the stack pointer with the top of the stack
    call main               # Call the main function
    j _start                # Infinite loop after the main function returns

.section .data  # or .text, but avoid .bss for initialized values
_stack_start:
    .word 0x00080000        # Stack starts at the end of Data Memory (as defined in link.ld)
