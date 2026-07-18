# WATER_GetDrawHorizon__Fv

- Address: `0x003728B0`
- Size: `0x14` (20 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/water.cpp`
- Reference source: `KS/SRC/ks/water.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor extracts draw-horizon bit 9 from the global water flags.

## Outcome

The released `WATER_GetDrawHorizon` bit test matched exactly on the first attempt.
