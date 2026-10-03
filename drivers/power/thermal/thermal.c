#include "thermal.h"
mc_status_t thermal_validate(const thermal_state_t*t){return t&&t->critical_milli_celsius>t->milli_celsius?MC_OK:MC_EINVAL;}