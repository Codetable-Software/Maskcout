#ifndef MASKCOUT_POWER_THERMAL_THERMAL_H
#define MASKCOUT_POWER_THERMAL_THERMAL_H
#include <maskcout/types.h>
typedef struct{int32_t milli_celsius;int32_t critical_milli_celsius;} thermal_state_t;mc_status_t thermal_validate(const thermal_state_t*);
#endif
