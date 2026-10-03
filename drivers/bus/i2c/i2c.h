#ifndef MASKCOUT_BUS_I2C_I2C_H
#define MASKCOUT_BUS_I2C_I2C_H
#include <maskcout/types.h>
typedef mc_status_t(*i2c_transfer_fn)(void*,uint8_t,const uint8_t*,size_t,uint8_t*,size_t);typedef struct{void*ctx;i2c_transfer_fn transfer;} i2c_bus_t;mc_status_t i2c_transfer(i2c_bus_t*,uint8_t,const uint8_t*,size_t,uint8_t*,size_t);
#endif
