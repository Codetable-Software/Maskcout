#ifndef MASKCOUT_PCI_H
#define MASKCOUT_PCI_H
#include <maskcout/types.h>
typedef struct{uint16_t vendor_id,device_id;uint8_t bus,slot,function;uint8_t class_code,subclass;uint32_t bars[6];} pci_device_t;
mc_status_t pci_scan_ecam(uintptr_t base,uint8_t bus_start,uint8_t bus_end,pci_device_t*out,size_t cap,size_t*count);

#endif
