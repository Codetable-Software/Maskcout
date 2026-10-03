# Maskcout v0.1.0

Maskcout is a freestanding experimental kernel foundation targeting **AArch64/ARM64** and **x86_64/AMD64**. It is intentionally small, explicit about hardware boundaries, and organized so architecture, platform, kernel, drivers, filesystems, Rust, C++, and host tooling can evolve independently.

## Targets and boot

- **x86_64:** a Multiboot2-compatible kernel image. A Multiboot2 bootloader such as GRUB is required; the kernel is not an EFI application and does not claim universal PC firmware support.
- **ARM64:** a QEMU `virt`-oriented raw kernel entry point. The entry code is suitable for a controlled firmware/bootloader handoff with the kernel loaded at the linker address. It is not a universal Android/phone boot image and does not claim Qualcomm, MediaTek, or Rockchip boot compatibility.

## Languages

C is the primary kernel implementation language. Assembly provides architecture entry, interrupt stubs, and context primitives. C++ and Rust are built as freestanding kernel-support objects. Go is host-only tooling for image/filesystem metadata generation. Shell drives builds, tests, cleanup, and QEMU.

## Toolchain

Required for the host tests: `make`, a C compiler with C11 support, and a POSIX shell.

For x86_64 kernel builds: an x86_64-capable GCC/Clang, GNU assembler, and GNU ld. The supplied build uses the host compiler with freestanding flags.

For ARM64 kernel builds: an AArch64 ELF cross compiler named `aarch64-none-elf-gcc` plus matching binutils. The Makefile does not fake an ARM build when that toolchain is absent.

Optional: `qemu-system-x86_64`, `qemu-system-aarch64`, Rust `rustc`, and Go `go` for the respective validation/run paths.

## Build

```sh
make
make x86_64
make arm64
make test
make clean
./build.sh x86_64
./build.sh arm64
./scripts/run-x86_64.sh
./scripts/run-arm64.sh
```

The default `make` target selects x86_64. `make arm64` fails clearly if the AArch64 compiler is unavailable rather than producing an invalid artifact.

## Kernel subsystems

The common kernel provides initialization, architecture dispatch, a bitmap physical-page allocator, a simple virtual-memory mapping abstraction, a spinlock-protected heap arena, round-robin task scheduling, thread/process objects, syscall dispatch, bounded IPC queues, panic handling, and security initialization.

The architecture layer supplies CPU setup, interrupt setup, page-table primitives, and context-switch ABI definitions. Platform code exposes capability/configuration boundaries instead of inventing vendor register maps.

## Driver status

The driver tree contains real interfaces and conservative generic implementations where standards permit them. PCI enumeration is implemented for an ECAM/MMCONFIG-style configuration window; NVMe/AHCI/USB/I2C/eMMC/SDMMC/network/input/display/audio/power drivers expose validated data structures and operations but do not pretend to initialize arbitrary physical controllers without a platform resource description.

Serial has a real x86_64 COM1 implementation. The other device classes are capability-safe abstractions and state machines. Vendor-specific Qualcomm, MediaTek, Rockchip, GPU, Wi-Fi, Bluetooth, touchscreen, panel, thermal, battery, and GPIO implementations require actual SoC/controller specifications and platform resource descriptions.

## Filesystems

VFS defines mount/open/read/write/close operations. MaskFS is a compact native filesystem format with a superblock, fixed-size inode records, and extent-like data descriptors. FAT/exFAT/ext4 expose parsing/validation entry points and on-disk geometry helpers; they do not claim complete production compatibility in v0.1.0.

## Rust and C++

Rust uses `#![no_std]` and exports small allocation/security/IPC primitives. C++ uses a freestanding-safe subset with no exceptions, RTTI, or host standard library. Both are compiled without a host runtime dependency.

## Security model

The initial model uses explicit capability bits, checked object ownership, bounded IPC, validated pointer/range helpers, and fail-closed syscall dispatch. It is not a complete security boundary until user/kernel address separation, MMU enforcement, device-IOMMU policy, and a complete process loader exist.

## Tests

`make test` compiles and runs host-side unit tests for memory, scheduler, storage geometry, and network frame parsing. These tests exercise actual code paths and assertions rather than printing unconditional success.

## Project structure

- `arch/` architecture-specific CPU, boot, interrupt, MMU/paging, and context code
- `kernel/` core, memory, scheduler, process, syscall, IPC, security
- `drivers/` bus, storage, network, input, display, audio, power, serial, RTC, watchdog, GPIO
- `platform/` generic and vendor/platform resource descriptions
- `fs/` VFS and filesystem implementations
- `rust/`, `cpp/`, `go/` language-specific components/tooling
- `lib/`, `include/` freestanding support code and public kernel headers
- `linker/`, `config/`, `scripts/`, `tests/` build and validation infrastructure

## Contributions

Contributions should preserve the freestanding boundary, validate external inputs, avoid undocumented hardware claims, and add tests for host-testable logic. Hardware-specific changes should cite the public controller or SoC specification used to define registers and resource ownership.

## License

MIT. See `LICENSE`.
