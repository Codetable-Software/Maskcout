#pragma once
#include <stdint.h>
namespace maskcout { struct Object { uint64_t id; uint32_t rights; }; uint32_t object_rights(const Object*); }
