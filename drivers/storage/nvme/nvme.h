#ifndef MASKCOUT_STORAGE_NVME_NVME_H
#define MASKCOUT_STORAGE_NVME_NVME_H
#include <maskcout/types.h>
typedef struct{volatile uint32_t*regs;uintptr_t dma_base;uint16_t admin_depth;} nvme_controller_t;mc_status_t nvme_init(nvme_controller_t*);
#endif
