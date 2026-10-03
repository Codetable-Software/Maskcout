#ifndef MASKCOUT____FS_FAT_FAT_H
#define MASKCOUT____FS_FAT_FAT_H
#include <maskcout/types.h>
typedef struct{uint16_t bytes_per_sector,sectors_per_cluster,reserved_sectors;uint32_t sectors_per_fat,total_sectors;} fat_geometry_t;mc_status_t fat_validate(const fat_geometry_t*);
#endif
