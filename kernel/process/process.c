#include <maskcout/process.h>
#include <maskcout/config.h>
static mc_process_t table[MASKCOUT_MAX_PROCESSES]; static uint32_t next_pid=1;
mc_status_t process_create(mc_process_t*out){if(!out)return MC_EINVAL;for(size_t i=0;i<MASKCOUT_MAX_PROCESSES;i++)if(table[i].id==0){table[i].id=next_pid++;table[i].flags=1;table[i].address_space=0;*out=table[i];return MC_OK;}return MC_ENOMEM;}
mc_status_t process_destroy(mc_process_id_t id){for(size_t i=0;i<MASKCOUT_MAX_PROCESSES;i++)if(table[i].id==id){table[i]=(mc_process_t){0};return MC_OK;}return MC_EINVAL;}
