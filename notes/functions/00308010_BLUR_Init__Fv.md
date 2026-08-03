# BLUR_Init__Fv

- Address: `0x00308010`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misfits`
- Debug source: `ks/blur.cpp`
- Reference source: `KS/SRC/ks/blur.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `size28-block2-probes-1.cpp` |
| 2 | different | 7.1429 | 0.0 | `size28-block2-probes-2.cpp` |
| 3 | different | 7.1429 | 0.0 | `size28-block2-probes-3.cpp` |

## Outcome

All three direct-call forms tail-call `BLUR_TurnOff`. A function-pointer
rewrite can inhibit that optimization, but it is not released source and was
rejected; the direct wrapper was deferred.
