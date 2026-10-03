#include "gpu.h"
mc_status_t gpu_info_validate(const gpu_info_t*g){return g&&g->vendor!=0xffff?MC_OK:MC_EINVAL;}