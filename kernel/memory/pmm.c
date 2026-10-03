#include <maskcout/memory.h>
#include <maskcout/config.h>
static uintptr_t pmm_base; static size_t pmm_pages; static uint8_t pmm_bits[16384/8];
static int used(size_t i){return (pmm_bits[i/8]>>(i%8))&1;} static void mark(size_t i){pmm_bits[i/8]|=(uint8_t)(1u<<(i%8));}
mc_status_t pmm_init(uintptr_t base,size_t pages){ if(pages>16384)return MC_EINVAL; pmm_base=base; pmm_pages=pages; for(size_t i=0;i<sizeof(pmm_bits);i++)pmm_bits[i]=0; return MC_OK; }
void *pmm_alloc_page(void){ for(size_t i=0;i<pmm_pages;i++) if(!used(i)){mark(i);return (void*)(pmm_base+i*MASKCOUT_PAGE_SIZE);} return 0; }
void pmm_free_page(void *page){ uintptr_t p=(uintptr_t)page; if(p<pmm_base)return; uintptr_t d=p-pmm_base; if(d%MASKCOUT_PAGE_SIZE)return; size_t i=d/MASKCOUT_PAGE_SIZE; if(i<pmm_pages)pmm_bits[i/8]&=(uint8_t)~(1u<<(i%8)); }
