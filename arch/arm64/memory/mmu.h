#ifndef MASKCOUT_MMU_H
#define MASKCOUT_MMU_H
#include <maskcout/types.h>
mc_status_t arm64_mmu_init(void); mc_status_t arm64_map_page(uintptr_t va,uintptr_t pa,uint64_t flags);

#endif
