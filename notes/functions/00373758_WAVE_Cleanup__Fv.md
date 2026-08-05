# WAVE_Cleanup__Fv

- Address: `0x00373758`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.2222 | 22.2222 | `size36-wave-cleanup-1.cpp` |
| 2 | different | 22.2222 | 22.2222 | `size36-wave-cleanup-2.cpp` |
| 3 | different | 22.2222 | 22.2222 | `size36-wave-cleanup-3.cpp` |

## Outcome

All three ordinary native forms emit 12 bytes instead of the target
36-byte retained call frame. The matching-only body was removed and the
original target function was deferred.
