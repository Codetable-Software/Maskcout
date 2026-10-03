.text
.global arch_context_init
.type arch_context_init,%function
arch_context_init:
    str x1,[x0,#152]
    str x2,[x0,#160]
    ret
