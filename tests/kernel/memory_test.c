#include <assert.h>
#include <stdint.h>
#include <maskcout/memory.h>
int main(void){assert(pmm_init(0x100000,8)==0);void*a=pmm_alloc_page();void*b=pmm_alloc_page();assert(a&&b&&a!=b);pmm_free_page(a);void*c=pmm_alloc_page();assert(c==a);assert(vmm_map(0x2000,0x3000,3)==0);assert(vmm_map(0x2001,0x4000,3)!=0);return 0;}
