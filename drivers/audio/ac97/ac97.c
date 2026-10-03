#include "ac97.h"
mc_status_t ac97_validate(const ac97_controller_t*a){return a&&a->io_base?MC_OK:MC_EINVAL;}