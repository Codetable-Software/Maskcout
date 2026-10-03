#ifndef MASKCOUT_STORAGE_AHCI_AHCI_H
#define MASKCOUT_STORAGE_AHCI_AHCI_H
#include <maskcout/types.h>
typedef struct{volatile uint32_t*abar;uint8_t port_count;} ahci_controller_t;mc_status_t ahci_init(ahci_controller_t*);
#endif
