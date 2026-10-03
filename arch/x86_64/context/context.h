#ifndef MASKCOUT_X86CONTEXT_H
#define MASKCOUT_X86CONTEXT_H
#include <stdint.h>
typedef struct{uint64_t rbx,rbp,r12,r13,r14,r15,rsp,rip;} arch_context_t;void arch_context_init(arch_context_t*,uintptr_t,uintptr_t);

#endif
