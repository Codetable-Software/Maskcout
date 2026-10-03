#include "paging.h"
static uintptr_t mapped_va,mapped_pa;static uint64_t mapped_flags;mc_status_t x86_paging_init(void){mapped_va=mapped_pa=0;mapped_flags=0;return MC_OK;}mc_status_t x86_map_page(uintptr_t va,uintptr_t pa,uint64_t f){if((va|pa)&4095)return MC_EINVAL;mapped_va=va;mapped_pa=pa;mapped_flags=f;return MC_OK;}
