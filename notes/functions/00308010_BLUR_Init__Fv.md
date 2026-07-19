# BLUR_Init__Fv

- Address: `0x00308010`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misfits`
- Debug source: `ks/blur.cpp`
- Reference source: `KS/SRC/ks/blur.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released initialization delegates to `BLUR_TurnOff`; a barrier preserves the wrapper.

## Outcome

The released `BLUR_Init` wrapper matched exactly on the first attempt.
