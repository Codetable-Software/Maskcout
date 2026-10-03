#ifndef MASKCOUT_DISPLAY_GPU_GPU_H
#define MASKCOUT_DISPLAY_GPU_GPU_H
#include <maskcout/types.h>
typedef struct{uint16_t vendor,device;uint64_t memory_bytes;} gpu_info_t;mc_status_t gpu_info_validate(const gpu_info_t*);
#endif
