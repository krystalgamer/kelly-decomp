# ksnglSetOrthoMatrix__Fffffff

- Address: `0x00381948`
- Size: `0x1C` (28 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksngl.cpp`
- Reference source: `KS/SRC/ks/ksngl.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-platform-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-platform-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-platform-probes-3.cpp` |

## Outcome

All three direct forms tail-call `nglSetOrthoMatrix` in eight bytes. The target retains a 28-byte frame, so the wrapper was deferred.
