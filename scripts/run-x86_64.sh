#!/bin/sh
set -eu
command -v qemu-system-x86_64 >/dev/null 2>&1 || { echo 'qemu-system-x86_64 is not installed'; exit 1; }
test -f build/x86_64/maskcout.elf || make x86_64
exec qemu-system-x86_64 -kernel build/x86_64/maskcout.elf -serial stdio -display none
