.section .text.boot
.global _start
.type _start,%function
_start:
    msr daifset,#0xf
    ldr x0,=stack_top
    mov sp,x0
    bl kernel_main
1:  wfi
    b 1b
.section .bss
.align 12
stack_bottom:
.skip 16384
stack_top:
