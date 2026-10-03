#include <maskcout/memory.h>
#define VMM_MAX 128u
typedef struct {uintptr_t va,pa;uint64_t flags;} vmap_t; static vmap_t maps[VMM_MAX]; static size_t count;
mc_status_t vmm_map(uintptr_t va,uintptr_t pa,uint64_t flags){ if((va&4095u)||(pa&4095u)||count>=VMM_MAX)return MC_EINVAL; for(size_t i=0;i<count;i++)if(maps[i].va==va)return MC_EBUSY; maps[count++]=(vmap_t){va,pa,flags}; return MC_OK; }
