#include "pcie.h"
mc_status_t pcie_init(pcie_host_t*h){if(!h||!h->ecam_base||h->start_bus>h->end_bus)return MC_EINVAL;return MC_OK;}