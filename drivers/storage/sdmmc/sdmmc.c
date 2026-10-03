#include "sdmmc.h"
mc_status_t sdmmc_validate(const sdmmc_card_t*c){if(!c||c->block_size==0||c->block_size>4096||c->block_count==0)return MC_EINVAL;return MC_OK;}