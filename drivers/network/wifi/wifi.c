#include "wifi.h"
mc_status_t wifi_validate(const wifi_state_t*s){if(!s||s->channel==0||s->channel>196)return MC_EINVAL;return MC_OK;}