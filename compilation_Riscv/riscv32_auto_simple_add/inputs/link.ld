SEARCH_DIR(.)
__DYNAMIC = 0;
ENTRY(_start)

MEMORY
{
    /* Define the memory regions according to the new map */
    instrram   : ORIGIN = 0x00000000, LENGTH = 131072  /* Instruction Memory: 128KB */
    rom        : ORIGIN = 0x00020000, LENGTH = 4096    /* ROM (Boot): 4KB */
    peripheral : ORIGIN = 0x00040000, LENGTH = 126976  /* Peripherals: 124KB */
    dataram    : ORIGIN = 0x00040000, LENGTH = 262144  /* Data Memory: 256KB */
}

/* Stack information */
_min_stack  = 0x1000;          /* Minimum stack size: 4KB */
_stack_len  = 4096;            /* Total stack size (words) */
_stack_start = ORIGIN(dataram) + LENGTH(dataram);  /* Stack starts at the end of Data RAM */

/* Define sections and their placement in memory */
SECTIONS
{
    .text : {
        . = ALIGN(4);
        _stext = .;            /* Start of the .text section */
        *(.text)               /* All text (code) sections */
        _etext = .;            /* End of the .text section */
    } > instrram               /* Map .text to Instruction Memory */

    .rodata : {
        . = ALIGN(4);
        *(.rodata)             /* Read-only data section */
    } > rom                    /* Map read-only data to ROM (Boot) */

    .data : {
        . = ALIGN(4);
        _sdata = .;            /* Start of the .data section */
        *(.data)               /* Initialized data */
        _edata = .;            /* End of the .data section */
    } > dataram                /* Map .data to Data Memory */

    .bss : {
        . = ALIGN(4);
        _bss_start = .;        /* Start of the .bss section */
        *(.bss)                /* Uninitialized data */
        _bss_end = .;          /* End of the .bss section */
    } > dataram                /* Map .bss to Data Memory */

    .stack (NOLOAD) : {
        . = ALIGN(4);
        . = . + _min_stack;    /* Reserve stack space */
        _stack = .;
    } > dataram                /* Stack is placed in Data Memory */

    _end = .;                  /* End of all sections */
}
