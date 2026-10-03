#ifndef MASKCOUT_ARMCONTEXT_H
#define MASKCOUT_ARMCONTEXT_H
#include <stdint.h>
typedef struct{uint64_t x[19];uint64_t sp,pc,pstate;} arch_context_t;void arch_context_init(arch_context_t*,uintptr_t,uintptr_t);

#endif
