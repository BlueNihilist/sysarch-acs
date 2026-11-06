# Baremetal README for aboba Platform

**Please Note**: This target was generated from the `RDN2` reference target using
`python tools/scripts/generate.py aboba`. All PAL API implementations are stubs that print
`PAL API <name> not implemented` and return 0. Platform description tables in
`src/platform_cfg_fvp.c` and macros in `include/platform_override_fvp.h` still contain RDN2
values and must be replaced with the real `aboba` hardware description before this target is
usable.

## Steps to Build

Follow the build steps mentioned in [README](../README.md) with the TARGET parameter as:

```bash
-DTARGET=aboba
```

For example:

```bash
export CROSS_COMPILE=<path_to_the_toolchain>/bin/aarch64-none-elf-
cmake --preset bsa -DTARGET=aboba
cmake --build --preset bsa
```

## Files That Must Be Filled In

| File | Purpose |
| --- | --- |
| `include/platform_override_fvp.h` | Platform constants (PE count/MPIDRs, GIC bases, timer/watchdog GSIVs, UART base, PCIe ECAM/BAR windows, memory map, cache/PPTT/SRAT/HMAT/PMU/RAS/MPAM/PCC/TPM2/CXL info, exerciser IDs, compliance levels). |
| `include/platform_image_def.h` | ACS image load address, image size, memory pool/heap/shared region layout. |
| `include/platform_override_struct.h` | Struct definitions used by the tables below; extend only if new info types are needed. |
| `include/pal_exerciser.h` | PCIe exerciser register offsets/IDs for this platform. |
| `src/platform_cfg_fvp.c` | The `platform_*_cfg` info tables, execution policy (`g_platform_execution_policy`) and run-request defaults (`g_platform_run_request_defaults`). |
| `src/pal_bsa.c` | BSA/common PAL APIs (34 common + 6 BSA-only). |
| `src/pal_sbsa.c` | SBSA-only PAL APIs (8). |
| `src/pal_exerciser.c` | PCIe exerciser PAL APIs (7 common + 6 SBSA). |

-----------------

*Copyright (c) 2025-2026, Arm Limited and Contributors. All rights reserved.*
