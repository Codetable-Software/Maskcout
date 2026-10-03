#include "vfs.h"
mc_status_t vfs_open(const vfs_ops_t*o,void*c,const char*p,uint32_t f,mc_file_t**out){if(!o||!o->open||!p||!out)return MC_EINVAL;return o->open(c,p,f,out);}
