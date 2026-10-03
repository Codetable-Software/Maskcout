#ifndef MASKCOUT_PROCESS_H
#define MASKCOUT_PROCESS_H
#include <maskcout/types.h>
typedef uint32_t mc_process_id_t;
typedef struct mc_process { mc_process_id_t id; uint32_t flags; uint64_t address_space; } mc_process_t;
mc_status_t process_create(mc_process_t *out);
mc_status_t process_destroy(mc_process_id_t id);

#endif
