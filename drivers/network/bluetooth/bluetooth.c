#include "bluetooth.h"
mc_status_t bluetooth_validate(const bluetooth_adapter_t*a){return a?MC_OK:MC_EINVAL;}