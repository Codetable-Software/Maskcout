#ifndef MASKCOUT_IPC_H
#define MASKCOUT_IPC_H
#include <maskcout/types.h>
typedef struct{uint64_t data[64];size_t head,tail,count;} mc_ipc_queue_t;
void ipc_init(mc_ipc_queue_t*q);mc_status_t ipc_send(mc_ipc_queue_t*q,uint64_t v);mc_status_t ipc_recv(mc_ipc_queue_t*q,uint64_t*v);
#endif
