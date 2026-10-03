#include "gpio.h"
mc_status_t gpio_validate(const gpio_bank_t*g){return g&&g->pin_count<=64?MC_OK:MC_EINVAL;}