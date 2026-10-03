#include <maskcout/config.h>
#include <maskcout/types.h>
typedef void (*task_entry_t)(void*); typedef struct mc_task{uint32_t id;uint32_t state;task_entry_t entry;void*arg;} mc_task_t;
static mc_task_t tasks[MASKCOUT_MAX_TASKS]; static uint32_t next_id=1; mc_task_t *task_create(task_entry_t e,void*a){for(size_t i=0;i<MASKCOUT_MAX_TASKS;i++)if(tasks[i].state==0){tasks[i]=(mc_task_t){next_id++,1,e,a};return &tasks[i];}return 0;}
