#include <stdint.h>
typedef struct {uintptr_t sp,ip;uint64_t flags;} mc_thread_context_t; void thread_context_init(mc_thread_context_t*c,uintptr_t sp,uintptr_t ip){if(c){c->sp=sp;c->ip=ip;c->flags=0;}}
