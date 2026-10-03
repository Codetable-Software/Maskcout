#include <maskcout/kernel.h>
#include <maskcout/memory.h>
#include <maskcout/config.h>
extern mc_status_t scheduler_init(void); extern mc_status_t security_init(void); extern mc_status_t arch_cpu_init(void); extern mc_status_t arch_interrupt_init(void); extern mc_status_t platform_init(void); extern void serial_init(void);
mc_status_t kernel_init(void){ mc_status_t s; serial_init(); if((s=arch_cpu_init())!=MC_OK)return s; if((s=arch_interrupt_init())!=MC_OK)return s; if((s=pmm_init(0,16384))!=MC_OK)return s; if((s=scheduler_init())!=MC_OK)return s; if((s=security_init())!=MC_OK)return s; if((s=platform_init())!=MC_OK)return s; return MC_OK; }
