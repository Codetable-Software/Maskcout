#include "ahci.h"
mc_status_t ahci_init(ahci_controller_t*c){if(!c||!c->abar||c->port_count>32)return MC_EINVAL;return MC_OK;}