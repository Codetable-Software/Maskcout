#include "rtc.h"
mc_status_t rtc_validate(const rtc_time_t*t){if(!t||t->year<1970||t->month<1||t->month>12||t->day<1||t->day>31||t->hour>23||t->minute>59||t->second>59)return MC_EINVAL;return MC_OK;}