#include <maskcout/kernel.h>
__attribute__((noreturn)) void kernel_panic(const char *reason){ (void)reason; for(;;){ __asm__ volatile("hlt"); } }
