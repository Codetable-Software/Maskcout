#ifndef MASKCOUT_STORAGE_SDMMC_SDMMC_H
#define MASKCOUT_STORAGE_SDMMC_SDMMC_H
#include <maskcout/types.h>
typedef struct{uint32_t block_size;uint64_t block_count;} sdmmc_card_t;mc_status_t sdmmc_validate(const sdmmc_card_t*);
#endif
