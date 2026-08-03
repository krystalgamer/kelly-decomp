# arch_free__FPv

- Address: `0x002AC768`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `remaining_wrappers_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `remaining_wrappers_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `remaining_wrappers_3.cpp` |

## Outcome

All three released-source forms tail-call `mem_free`. The target preserves a
normal 28-byte call frame, so the barrier-dependent wrapper was deferred.
