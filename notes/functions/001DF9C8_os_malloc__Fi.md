# os_malloc__Fi

- Address: `0x001DF9C8`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_alloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_alloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.7778 | 77.7778 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size36-os-alloc.cpp` |

### Attempt 1 notes

The direct absolute alias scheduled its low-half add before the target RA save.

### Attempt 2 notes

The canonical wrapper directly returns `arch_malloc(size, description, 0)`. The released pretty-function literal is linker-bound at its original address.

## Outcome

The released `os_malloc` wrapper matched exactly.
