#include "runtime.hpp"
namespace maskcout { void runtime_barrier(){__asm__ volatile("":: : "memory");} uint64_t runtime_version(){return 1;} }
