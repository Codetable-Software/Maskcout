#include <maskcout/memory.h>
#include <maskcout/config.h>
static unsigned char heap[MASKCOUT_HEAP_SIZE]; typedef struct block{size_t size;int free;struct block *next;} block_t; static block_t *head;
static size_t align_up(size_t x,size_t a){return (x+a-1)&~(a-1);} 
static void heap_init(void){if(!head){head=(block_t*)heap;head->size=MASKCOUT_HEAP_SIZE-sizeof(block_t);head->free=1;head->next=0;}}
void *kmalloc(size_t size,size_t align){heap_init();if(!size||align==0)return 0; for(block_t*b=head;b;b=b->next)if(b->free&&b->size>=size+align){uintptr_t raw=(uintptr_t)(b+1);uintptr_t p=align_up(raw,align);size_t lead=p-raw;if(lead>sizeof(block_t)){block_t*n=(block_t*)raw;n->size=lead-sizeof(block_t);n->free=1;n->next=b;b->size-=lead;b=(block_t*)p-sizeof(block_t);b->free=1;} b->free=0;return(void*)p;}return 0;}
void kfree(void*ptr){if(!ptr)return;for(block_t*b=head;b;b=b->next){if((unsigned char*)ptr>(unsigned char*)b&&(unsigned char*)ptr<(unsigned char*)b+sizeof(block_t)+b->size){b->free=1;return;}}}
