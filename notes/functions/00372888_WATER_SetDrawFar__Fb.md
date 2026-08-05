# WATER_SetDrawFar__Fb

- Address: `0x00372888`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/water.cpp`
- Reference source: `KS/SRC/ks/water.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size36-water-debug.cpp` |

### Attempt 1 notes

The shared released `WaterDebugStruct` bitfield updates bit six of its 64-bit storage unit.

## Outcome

The released `WATER_SetDrawFar` bit setter matched exactly.
