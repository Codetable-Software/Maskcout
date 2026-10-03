#include "cpu.h"
mc_status_t arch_cpu_init(void){uint32_t a,b,c,d;__asm__ volatile("cpuid":"=a"(a),"=b"(b),"=c"(c),"=d"(d):"a"(1));(void)a;(void)b;(void)c;(void)d;return MC_OK;} uint64_t arch_cpu_features(void){uint32_t a,b,c,d;__asm__ volatile("cpuid":"=a"(a),"=b"(b),"=c"(c),"=d"(d):"a"(1));return ((uint64_t)c<<32)|d;}
