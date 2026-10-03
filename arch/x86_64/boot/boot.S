.section .multiboot2
.align 8
.long 0xe85250d6
.long 0
.long header_end-header_start
.long -(0xe85250d6 + 0 + (header_end-header_start))
header_start:
.align 8
.short 0
.short 0
.long 8
header_end:
.section .text
.global _start
.type _start,@function
_start:
    cli
    mov $stack_top, %rsp
    call kernel_main
1:  hlt
    jmp 1b
.section .bss
.align 16
stack_bottom:
.skip 16384
stack_top:
