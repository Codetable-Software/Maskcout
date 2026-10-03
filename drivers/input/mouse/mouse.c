#include "mouse.h"
mc_status_t mouse_event_validate(const mouse_event_t*e){return e?MC_OK:MC_EINVAL;}