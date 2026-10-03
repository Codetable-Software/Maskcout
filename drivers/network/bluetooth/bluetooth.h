#ifndef MASKCOUT_NETWORK_BLUETOOTH_BLUETOOTH_H
#define MASKCOUT_NETWORK_BLUETOOTH_BLUETOOTH_H
#include <maskcout/types.h>
typedef struct{uint8_t address[6];bool powered;} bluetooth_adapter_t;mc_status_t bluetooth_validate(const bluetooth_adapter_t*);
#endif
