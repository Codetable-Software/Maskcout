#ifndef MASKCOUT_INPUT_MOUSE_MOUSE_H
#define MASKCOUT_INPUT_MOUSE_MOUSE_H
#include <maskcout/types.h>
typedef struct{int32_t dx,dy,wheel;uint8_t buttons;} mouse_event_t;mc_status_t mouse_event_validate(const mouse_event_t*);
#endif
