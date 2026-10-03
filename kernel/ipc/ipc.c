#include "ipc.h"
void ipc_init(mc_ipc_queue_t*q){if(q)*q=(mc_ipc_queue_t){0};}
mc_status_t ipc_send(mc_ipc_queue_t*q,uint64_t v){if(!q||q->count==64)return MC_EBUSY;q->data[q->tail]=v;q->tail=(q->tail+1)%64;q->count++;return MC_OK;}
mc_status_t ipc_recv(mc_ipc_queue_t*q,uint64_t*v){if(!q||!v)return MC_EINVAL;if(!q->count)return MC_EBUSY;*v=q->data[q->head];q->head=(q->head+1)%64;q->count--;return MC_OK;}
