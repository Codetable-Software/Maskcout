#include "mmu.h"
static uintptr_t last_va,last_pa;static uint64_t last_flags;mc_status_t arm64_mmu_init(void){last_va=last_pa=last_flags=0;return MC_OK;}mc_status_t arm64_map_page(uintptr_t va,uintptr_t pa,uint64_t f){if((va|pa)&4095)return MC_EINVAL;last_va=va;last_pa=pa;last_flags=f;return MC_OK;}
