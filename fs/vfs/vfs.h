#ifndef MASKCOUT_VFS_H
#define MASKCOUT_VFS_H
#include <maskcout/types.h>
typedef struct mc_file mc_file_t;typedef struct{mc_status_t(*open)(void*,const char*,uint32_t,mc_file_t**);mc_status_t(*read)(mc_file_t*,void*,size_t,size_t*);mc_status_t(*write)(mc_file_t*,const void*,size_t,size_t*);mc_status_t(*close)(mc_file_t*);} vfs_ops_t;struct mc_file{const vfs_ops_t*ops;void*private_data;uint64_t offset;};
mc_status_t vfs_open(const vfs_ops_t*,void*,const char*,uint32_t,mc_file_t**);

#endif
