#ifndef MASKCOUT_SECURITY_H
#define MASKCOUT_SECURITY_H
#include <maskcout/types.h>
#define MC_CAP_READ (1u<<0)
#define MC_CAP_WRITE (1u<<1)
#define MC_CAP_EXEC (1u<<2)
#define MC_CAP_DEVICE (1u<<3)
mc_status_t security_init(void); bool security_has(uint32_t caps,uint32_t need);
#endif
