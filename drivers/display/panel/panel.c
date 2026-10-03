#include "panel.h"
mc_status_t panel_info_validate(const panel_info_t*p){if(!p||!p->width||!p->height||!p->refresh_millihz)return MC_EINVAL;return MC_OK;}