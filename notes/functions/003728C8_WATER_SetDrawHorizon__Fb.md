# WATER_SetDrawHorizon__Fb

- Address: `0x003728C8`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/water.cpp`
- Reference source: `KS/SRC/ks/water.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter updates bit nine of the first 64-bit WaterDebug word.

## Outcome

The released `WATER_SetDrawHorizon` bit setter matched exactly.
