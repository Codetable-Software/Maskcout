#ifndef MASKCOUT_MEMORY_H
#define MASKCOUT_MEMORY_H
#include <maskcout/types.h>
mc_status_t pmm_init(uintptr_t base, size_t pages);
void *pmm_alloc_page(void);
void pmm_free_page(void *page);
mc_status_t vmm_map(uintptr_t va, uintptr_t pa, uint64_t flags);
void *kmalloc(size_t size, size_t align);
void kfree(void *ptr);

#endif
