#ifndef MASKCOUT_PAGING_H
#define MASKCOUT_PAGING_H
#include <maskcout/types.h>
mc_status_t x86_paging_init(void); mc_status_t x86_map_page(uintptr_t va,uintptr_t pa,uint64_t flags);

#endif
