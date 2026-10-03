#include <assert.h>
#include "../../drivers/network/ethernet/ethernet.h"
int main(void){eth_frame_t f={{0},{0},0x0800};assert(ethernet_validate(&f,14)==0);f.ethertype=0;assert(ethernet_validate(&f,14)!=0);return 0;}
