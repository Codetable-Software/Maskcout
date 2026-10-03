#!/bin/sh
set -eu
command -v qemu-system-aarch64 >/dev/null 2>&1 || { echo 'qemu-system-aarch64 is not installed'; exit 1; }
test -f build/arm64/maskcout.elf || make arm64
exec qemu-system-aarch64 -M virt -cpu cortex-a57 -nographic -kernel build/arm64/maskcout.elf
