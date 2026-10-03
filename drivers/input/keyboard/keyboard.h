#ifndef MASKCOUT_INPUT_KEYBOARD_KEYBOARD_H
#define MASKCOUT_INPUT_KEYBOARD_KEYBOARD_H
#include <maskcout/types.h>
typedef struct{uint16_t scancode;bool pressed;} keyboard_event_t;mc_status_t keyboard_event_validate(const keyboard_event_t*);
#endif
