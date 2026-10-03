#include "i2c.h"
mc_status_t i2c_transfer(i2c_bus_t*b,uint8_t a,const uint8_t*t,size_t tn,uint8_t*r,size_t rn){if(!b||!b->transfer||a>127)return MC_EINVAL;return b->transfer(b->ctx,a,t,tn,r,rn);}