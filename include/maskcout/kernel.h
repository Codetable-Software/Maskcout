#ifndef MASKCOUT_KERNEL_H
#define MASKCOUT_KERNEL_H
#include <maskcout/types.h>
mc_status_t kernel_init(void);
void kernel_main(void);
void kernel_panic(const char *reason);

#endif
