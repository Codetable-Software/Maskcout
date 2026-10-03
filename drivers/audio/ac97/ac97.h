#ifndef MASKCOUT_AUDIO_AC97_AC97_H
#define MASKCOUT_AUDIO_AC97_AC97_H
#include <maskcout/types.h>
typedef struct{uintptr_t io_base;uint16_t codec_id;} ac97_controller_t;mc_status_t ac97_validate(const ac97_controller_t*);
#endif
