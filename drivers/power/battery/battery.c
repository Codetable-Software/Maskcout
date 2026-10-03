#include "battery.h"
mc_status_t battery_validate(const battery_state_t*b){return b&&b->percent<=100?MC_OK:MC_EINVAL;}