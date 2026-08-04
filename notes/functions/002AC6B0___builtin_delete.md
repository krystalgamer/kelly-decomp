# __builtin_delete

- Address: `0x002AC6B0`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 12.5 | 0.0 | `size32-gameplay-probes-1.cpp` |
| 2 | different | 12.5 | 0.0 | `size32-gameplay-probes-2.cpp` |
| 3 | different | 12.5 | 0.0 | `size32-gameplay-probes-3.cpp` |

## Outcome

All three null-guarded C++ forms emit a 24-byte scalar-delete helper that tail-calls `mem_free`. The target is 32 bytes, so the manual runtime wrapper was removed.
