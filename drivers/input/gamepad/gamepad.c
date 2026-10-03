#include "gamepad.h"
mc_status_t gamepad_state_validate(const gamepad_state_t*s){return s?MC_OK:MC_EINVAL;}