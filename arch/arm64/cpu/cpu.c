#include "cpu.h"
mc_status_t arch_cpu_init(void){return MC_OK;} uint64_t arch_cpu_features(void){uint64_t v=0;__asm__ volatile("mrs %0, CurrentEL":"=r"(v));return v;}
