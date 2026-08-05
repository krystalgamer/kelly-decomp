# arch_mallochigh__FUi

- Address: `0x002AC718`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size40-allocators.cpp` |

## Outcome

The released high-heap forwarding call matches naturally with `mafHigh` from
the shared heap declaration.
