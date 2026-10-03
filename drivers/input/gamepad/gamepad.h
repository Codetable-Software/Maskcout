#ifndef MASKCOUT_INPUT_GAMEPAD_GAMEPAD_H
#define MASKCOUT_INPUT_GAMEPAD_GAMEPAD_H
#include <maskcout/types.h>
typedef struct{int16_t axis[8];uint32_t buttons;} gamepad_state_t;mc_status_t gamepad_state_validate(const gamepad_state_t*);
#endif
