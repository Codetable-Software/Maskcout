#include <maskcout/syscall.h>
static uint64_t sys_nop(uint64_t a,uint64_t b,uint64_t c,uint64_t d,uint64_t e,uint64_t f){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;return 0;}
uint64_t syscall_dispatch(uint64_t n,const uint64_t a[6]){static const mc_syscall_fn t[]={sys_nop};if(n>=1||!a)return (uint64_t)MC_EINVAL;return t[n](a[0],a[1],a[2],a[3],a[4],a[5]);}
