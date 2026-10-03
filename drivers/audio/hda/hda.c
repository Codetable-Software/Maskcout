#include "hda.h"
mc_status_t hda_validate(const hda_controller_t*h){return h&&h->mmio?MC_OK:MC_EINVAL;}