#ifndef MASKCOUT_PLATFORM_X86_64_GENERIC_H
#define MASKCOUT_PLATFORM_X86_64_GENERIC_H
#include <maskcout/types.h>
typedef struct{uintptr_t timer_base;uintptr_t serial_base;uintptr_t memory_base;size_t memory_size;} platform_resources_t;
mc_status_t platform_probe(platform_resources_t*);
#endif
