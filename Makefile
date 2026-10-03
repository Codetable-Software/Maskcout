SHELL := /bin/sh
CC ?= gcc
CXX ?= g++
AS ?= $(CC)
LD ?= ld
AR ?= ar
CFLAGS_COMMON := -std=c11 -ffreestanding -fno-builtin -fno-stack-protector -Wall -Wextra -Werror -Iinclude
CXXFLAGS_COMMON := -std=c++17 -ffreestanding -fno-exceptions -fno-rtti -fno-stack-protector -fno-builtin -Wall -Wextra -Werror -Iinclude -Icpp
X86_CFLAGS := $(CFLAGS_COMMON) -m64 -mno-red-zone -mcmodel=kernel -fno-pie
ARM_CC ?= aarch64-none-elf-gcc
ARM_CFLAGS := $(CFLAGS_COMMON) -march=armv8-a
COMMON_C := kernel/core/kernel.c kernel/core/init.c kernel/core/panic.c kernel/memory/pmm.c kernel/memory/vmm.c kernel/memory/heap.c kernel/scheduler/scheduler.c kernel/scheduler/task.c kernel/scheduler/thread.c kernel/process/process.c kernel/syscall/syscall.c kernel/ipc/ipc.c kernel/security/security.c drivers/serial/serial.c lib/memory.c lib/string.c lib/printf.c
X86_ARCH_C := arch/x86_64/cpu/cpu.c arch/x86_64/interrupts/interrupt.c arch/x86_64/memory/paging.c platform/x86_64/generic/platform.c
ARM_ARCH_C := arch/arm64/cpu/cpu.c arch/arm64/interrupts/interrupt.c arch/arm64/memory/mmu.c platform/arm64/generic/platform.c
X86_CPP := cpp/kernel/object.cpp cpp/runtime/runtime.cpp

.PHONY: all clean test x86_64 arm64
all: x86_64

build/x86_64:
	mkdir -p $@
build/arm64:
	mkdir -p $@

x86_64: build/x86_64
	@set -e; for f in $(COMMON_C) $(X86_ARCH_C); do o=build/x86_64/$$(echo $$f | tr '/.' '__').o; $(CC) $(X86_CFLAGS) -c $$f -o $$o; done
	@for f in $(X86_CPP); do o=build/x86_64/$$(echo $$f | tr '/.' '__').o; $(CXX) $(CXXFLAGS_COMMON) -c $$f -o $$o; done
	$(CC) $(X86_CFLAGS) -c arch/x86_64/boot/boot.S -o build/x86_64/boot.o
	$(CC) $(X86_CFLAGS) -c arch/x86_64/interrupts/interrupt.S -o build/x86_64/interrupt.o
	$(CC) $(X86_CFLAGS) -c arch/x86_64/context/context.S -o build/x86_64/context.o
	$(LD) -nostdlib -T linker/x86_64.ld -o build/x86_64/maskcout.elf build/x86_64/*.o

arm64: build/arm64
	@command -v $(ARM_CC) >/dev/null 2>&1 || { echo 'aarch64-none-elf-gcc is required for ARM64 build'; exit 1; }
	@set -e; for f in $(COMMON_C) $(ARM_ARCH_C); do o=build/arm64/$$(echo $$f | tr '/.' '__').o; $(ARM_CC) $(ARM_CFLAGS) -c $$f -o $$o; done
	$(ARM_CC) $(ARM_CFLAGS) -c arch/arm64/boot/boot.S -o build/arm64/boot.o
	$(ARM_CC) $(ARM_CFLAGS) -c arch/arm64/interrupts/interrupt.S -o build/arm64/interrupt.o
	$(ARM_CC) $(ARM_CFLAGS) -c arch/arm64/context/context.S -o build/arm64/context.o
	$(ARM_CC) -nostdlib -T linker/arm64.ld -o build/arm64/maskcout.elf build/arm64/*.o

test:
	mkdir -p build/tests
	$(CC) -std=c11 -Wall -Wextra -Werror -Iinclude tests/kernel/memory_test.c kernel/memory/pmm.c kernel/memory/vmm.c -o build/tests/memory_test
	$(CC) -std=c11 -Wall -Wextra -Werror -Iinclude tests/kernel/scheduler_test.c kernel/scheduler/scheduler.c -o build/tests/scheduler_test
	$(CC) -std=c11 -Wall -Wextra -Werror -Iinclude tests/drivers/storage_test.c fs/maskfs/maskfs.c fs/fat/fat.c -o build/tests/storage_test
	$(CC) -std=c11 -Wall -Wextra -Werror -Iinclude tests/drivers/network_test.c drivers/network/ethernet/ethernet.c -o build/tests/network_test
	build/tests/memory_test
	build/tests/scheduler_test
	build/tests/storage_test
	build/tests/network_test

clean:
	rm -rf build .config
