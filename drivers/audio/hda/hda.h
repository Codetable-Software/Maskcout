#ifndef MASKCOUT_AUDIO_HDA_HDA_H
#define MASKCOUT_AUDIO_HDA_HDA_H
#include <maskcout/types.h>
typedef struct{volatile uint8_t*mmio;uint32_t gcap;} hda_controller_t;mc_status_t hda_validate(const hda_controller_t*);
#endif
