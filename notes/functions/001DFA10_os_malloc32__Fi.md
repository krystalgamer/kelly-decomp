# os_malloc32__Fi

- Address: `0x001DFA10`
- Size: `0x24` (36 bytes)
- Object: `game/files_hwosps2`
- Debug source: `C:/KS/SRC/hwosps2/ps2_alloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_alloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size36-os-alloc.cpp` |

### Attempt 1 notes

The canonical aligned wrapper directly returns `arch_malloc(size, description, 0)`. The released pretty-function literal is linker-bound at its original address.

## Outcome

The released `os_malloc32` wrapper matched exactly.
