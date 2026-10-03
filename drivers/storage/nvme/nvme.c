#include "nvme.h"
mc_status_t nvme_init(nvme_controller_t*c){if(!c||!c->regs||!c->dma_base||c->admin_depth<2)return MC_EINVAL;return MC_OK;}