#ifndef MASKCOUT_RTC_RTC_H
#define MASKCOUT_RTC_RTC_H
#include <maskcout/types.h>
typedef struct{uint16_t year;uint8_t month,day,hour,minute,second;} rtc_time_t;mc_status_t rtc_validate(const rtc_time_t*);
#endif
