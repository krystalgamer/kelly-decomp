# ks_fx_SetDrawTrailGeom__Fb

- Address: `0x0036D2D8`
- Size: `0xC` (12 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/ksfx.cpp`
- Reference source: `KS/SRC/ks/ksfx.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter writes the word-sized trail-geometry global through a local absolute equate.

## Outcome

The released `ks_fx_SetDrawTrailGeom` global store matched exactly on the first attempt.
