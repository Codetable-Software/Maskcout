#ifndef MASKCOUT_INPUT_TOUCHSCREEN_TOUCHSCREEN_H
#define MASKCOUT_INPUT_TOUCHSCREEN_TOUCHSCREEN_H
#include <maskcout/types.h>
typedef struct{uint32_t id,x,y;uint8_t pressure;} touch_event_t;mc_status_t touchscreen_event_validate(const touch_event_t*,uint32_t,uint32_t);
#endif
