#include <assert.h>
#include <maskcout/types.h>
mc_status_t scheduler_init(void);
int main(void){assert(scheduler_init()==MC_OK);return 0;}
