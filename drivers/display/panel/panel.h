#ifndef MASKCOUT_DISPLAY_PANEL_PANEL_H
#define MASKCOUT_DISPLAY_PANEL_PANEL_H
#include <maskcout/types.h>
typedef struct{uint32_t width,height;uint32_t refresh_millihz;} panel_info_t;mc_status_t panel_info_validate(const panel_info_t*);
#endif
