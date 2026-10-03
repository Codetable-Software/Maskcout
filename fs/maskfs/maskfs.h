#ifndef MASKCOUT_MASKFS_H
#define MASKCOUT_MASKFS_H
#include <maskcout/types.h>
#define MASKFS_MAGIC 0x4d465331u
typedef struct{uint32_t magic,version,block_size;uint64_t total_blocks,inode_table_block,data_block;} maskfs_superblock_t;typedef struct{uint64_t size,first_block;uint32_t mode,links;} maskfs_inode_t;mc_status_t maskfs_format(maskfs_superblock_t*,uint64_t,uint32_t);mc_status_t maskfs_validate(const maskfs_superblock_t*);

#endif
