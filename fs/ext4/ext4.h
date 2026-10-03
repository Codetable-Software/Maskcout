#ifndef MASKCOUT____FS_EXT4_EXT4_H
#define MASKCOUT____FS_EXT4_EXT4_H
#include <maskcout/types.h>
typedef struct{uint32_t block_size,inodes_per_group,blocks_per_group;uint64_t blocks_count;} ext4_geometry_t;mc_status_t ext4_validate(const ext4_geometry_t*);
#endif
