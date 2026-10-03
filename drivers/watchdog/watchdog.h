#ifndef MASKCOUT_WATCHDOG_WATCHDOG_H
#define MASKCOUT_WATCHDOG_WATCHDOG_H
#include <maskcout/types.h>
typedef struct{uint32_t timeout_ms;bool running;} watchdog_t;mc_status_t watchdog_validate(const watchdog_t*);
#endif
