#include "platform.h"
mc_status_t platform_init(void){platform_resources_t r={0};return platform_probe(&r);}mc_status_t platform_probe(platform_resources_t*r){if(!r)return MC_EINVAL;return MC_OK;}
