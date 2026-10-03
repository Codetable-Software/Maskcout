#include "emmc.h"
mc_status_t emmc_command(emmc_host_t*h,uint32_t c,uint32_t a,uint32_t*r){if(!h||!h->command)return MC_EINVAL;return h->command(h->ctx,c,a,r);}