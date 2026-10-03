#include "security.h"
static uint32_t policy=MC_CAP_READ|MC_CAP_WRITE|MC_CAP_EXEC|MC_CAP_DEVICE; mc_status_t security_init(void){return MC_OK;} bool security_has(uint32_t caps,uint32_t need){return (caps&need)==need && (need&~policy)==0;}
