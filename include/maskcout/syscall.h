#ifndef MASKCOUT_SYSCALL_H
#define MASKCOUT_SYSCALL_H
#include <maskcout/types.h>
typedef uint64_t (*mc_syscall_fn)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
uint64_t syscall_dispatch(uint64_t number, const uint64_t args[6]);

#endif
