#include "framebuffer.h"
mc_status_t framebuffer_validate(const framebuffer_t*f){if(!f||!f->address||!f->width||!f->height||f->bpp<16)return MC_EINVAL;return MC_OK;}