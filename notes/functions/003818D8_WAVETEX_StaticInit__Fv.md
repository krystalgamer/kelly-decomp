# WAVETEX_StaticInit__Fv

- Address: `0x003818D8`
- Size: `0x1C` (28 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-gameplay-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-gameplay-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-gameplay-probes-3.cpp` |

## Outcome

All three direct forms tail-call `WAVETEXMENU_StaticInit` in eight bytes. The target retains a 28-byte frame, so the wrapper was deferred.
