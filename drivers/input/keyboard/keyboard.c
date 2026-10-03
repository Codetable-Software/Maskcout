#include "keyboard.h"
mc_status_t keyboard_event_validate(const keyboard_event_t*e){return e&&e->scancode<0x8000?MC_OK:MC_EINVAL;}