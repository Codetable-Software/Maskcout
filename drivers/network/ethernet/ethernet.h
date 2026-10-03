#ifndef MASKCOUT_NETWORK_ETHERNET_ETHERNET_H
#define MASKCOUT_NETWORK_ETHERNET_ETHERNET_H
#include <maskcout/types.h>
typedef struct{uint8_t dst[6],src[6];uint16_t ethertype;} eth_frame_t;mc_status_t ethernet_validate(const eth_frame_t*,size_t);
#endif
