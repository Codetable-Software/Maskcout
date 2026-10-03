#include "watchdog.h"
mc_status_t watchdog_validate(const watchdog_t*w){return w&&w->timeout_ms>=1?MC_OK:MC_EINVAL;}