# ks_fx_OnNewWave__Fv

- Address: `0x0036C4B0`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.2222 | 44.4444 | `size36-ksfx-new-wave.cpp` |
| 2 | different | 47.2222 | 44.4444 | `size36-ksfx-new-wave-2.cpp` |
| 3 | different | 27.0833 | 0.0 | `size36-ksfx-new-wave-3.cpp` |

## Outcome

Three ordinary native definitions failed to reproduce the target 36-byte call
frame; the closest form emits 28 bytes. The matching-only body was removed
and the original target function was deferred.
