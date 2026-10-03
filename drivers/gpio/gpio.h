#ifndef MASKCOUT_GPIO_GPIO_H
#define MASKCOUT_GPIO_GPIO_H
#include <maskcout/types.h>
typedef struct{uint32_t pin_count;uint32_t output_mask;} gpio_bank_t;mc_status_t gpio_validate(const gpio_bank_t*);
#endif
