#ifndef MASKCOUT_NETWORK_WIFI_WIFI_H
#define MASKCOUT_NETWORK_WIFI_WIFI_H
#include <maskcout/types.h>
typedef struct{uint8_t channel;int8_t rssi;bool associated;} wifi_state_t;mc_status_t wifi_validate(const wifi_state_t*);
#endif
