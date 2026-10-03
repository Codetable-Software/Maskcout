#ifndef MASKCOUT_BUS_PCIE_PCIE_H
#define MASKCOUT_BUS_PCIE_PCIE_H
#include <maskcout/types.h>
typedef struct{uintptr_t ecam_base;uint8_t start_bus,end_bus;} pcie_host_t;mc_status_t pcie_init(pcie_host_t*);
#endif
