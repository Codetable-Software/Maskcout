ENTRY(_start)
SECTIONS{. = 1M; .text : { KEEP(*(.multiboot2)) *(.text*) } .rodata : { *(.rodata*) } .data : { *(.data*) } .bss : { *(COMMON) *(.bss*) } /DISCARD/ : { *(.eh_frame*) *(.comment*) }}
