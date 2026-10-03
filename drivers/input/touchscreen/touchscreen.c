#include "touchscreen.h"
mc_status_t touchscreen_event_validate(const touch_event_t*e,uint32_t w,uint32_t h){if(!e||!w||!h||e->x>=w||e->y>=h)return MC_EINVAL;return MC_OK;}