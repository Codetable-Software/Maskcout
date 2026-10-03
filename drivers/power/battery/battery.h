#ifndef MASKCOUT_POWER_BATTERY_BATTERY_H
#define MASKCOUT_POWER_BATTERY_BATTERY_H
#include <maskcout/types.h>
typedef struct{uint8_t percent;bool charging;} battery_state_t;mc_status_t battery_validate(const battery_state_t*);
#endif
