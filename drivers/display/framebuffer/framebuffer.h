#ifndef MASKCOUT_DISPLAY_FRAMEBUFFER_FRAMEBUFFER_H
#define MASKCOUT_DISPLAY_FRAMEBUFFER_FRAMEBUFFER_H
#include <maskcout/types.h>
typedef struct{uintptr_t address;uint32_t width,height,pitch,bpp;} framebuffer_t;mc_status_t framebuffer_validate(const framebuffer_t*);
#endif
