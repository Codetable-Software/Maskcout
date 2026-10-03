#include "ethernet.h"
mc_status_t ethernet_validate(const eth_frame_t*f,size_t len){if(!f||len<14||f->ethertype==0)return MC_EINVAL;return MC_OK;}