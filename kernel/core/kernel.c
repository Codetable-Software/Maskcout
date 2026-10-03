#include <maskcout/kernel.h>
void kernel_main(void){ if(kernel_init()!=MC_OK) kernel_panic("kernel initialization failed"); for(;;){ __asm__ volatile("hlt"); } }
