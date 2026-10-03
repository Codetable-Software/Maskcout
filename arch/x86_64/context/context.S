.text
.global arch_context_init
.type arch_context_init,@function
arch_context_init:
    mov %rsi,56(%rdi)
    mov %rdx,64(%rdi)
    xor %eax,%eax
    ret
