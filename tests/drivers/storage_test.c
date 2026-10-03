#include <assert.h>
#include "../../fs/maskfs/maskfs.h"
#include "../../fs/fat/fat.h"
int main(void){maskfs_superblock_t s;assert(maskfs_format(&s,128,4096)==0);assert(maskfs_validate(&s)==0);fat_geometry_t g={512,8,32,128,10000};assert(fat_validate(&g)==0);g.bytes_per_sector=513;assert(fat_validate(&g)!=0);return 0;}
