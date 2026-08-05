# __builtin_new

- Address: `0x002AC618`
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

The released global allocator matches naturally with the shared allocator
declarations and canonical `operator new` description symbol.
