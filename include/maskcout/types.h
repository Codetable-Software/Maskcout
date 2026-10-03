#ifndef MASKCOUT_TYPES_H
#define MASKCOUT_TYPES_H
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

typedef int32_t mc_status_t;
#define MC_OK ((mc_status_t)0)
#define MC_EINVAL ((mc_status_t)-22)
#define MC_ENOMEM ((mc_status_t)-12)
#define MC_ENODEV ((mc_status_t)-19)
#define MC_EBUSY ((mc_status_t)-16)
#define MC_EIO ((mc_status_t)-5)
#define MC_EPERM ((mc_status_t)-1)

#endif
