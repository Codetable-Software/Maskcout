#include "acpi.h"
mc_status_t acpi_validate(const acpi_info_t*a){return a&&a->rsdp&&a->revision<=2?MC_OK:MC_EINVAL;}