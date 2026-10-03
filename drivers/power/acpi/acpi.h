#ifndef MASKCOUT_POWER_ACPI_ACPI_H
#define MASKCOUT_POWER_ACPI_ACPI_H
#include <maskcout/types.h>
typedef struct{uintptr_t rsdp;uint8_t revision;} acpi_info_t;mc_status_t acpi_validate(const acpi_info_t*);
#endif
