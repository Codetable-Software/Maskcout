#ifndef MASKCOUT_STORAGE_EMMC_EMMC_H
#define MASKCOUT_STORAGE_EMMC_EMMC_H
#include <maskcout/types.h>
typedef mc_status_t(*emmc_cmd_fn)(void*,uint32_t,uint32_t,uint32_t*);typedef struct{void*ctx;emmc_cmd_fn command;} emmc_host_t;mc_status_t emmc_command(emmc_host_t*,uint32_t,uint32_t,uint32_t*);
#endif
