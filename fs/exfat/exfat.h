#ifndef MASKCOUT____FS_EXFAT_EXFAT_H
#define MASKCOUT____FS_EXFAT_EXFAT_H
#include <maskcout/types.h>
typedef struct{uint8_t sector_shift,cluster_shift;uint32_t fat_length;uint64_t cluster_count;} exfat_geometry_t;mc_status_t exfat_validate(const exfat_geometry_t*);
#endif
