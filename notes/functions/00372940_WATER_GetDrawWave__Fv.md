# WATER_GetDrawWave__Fv

- Address: `0x00372940`
- Size: `0x1C` (28 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/water.cpp`
- Reference source: `KS/SRC/ks/water.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The water compatibility accessor directly returns the wave draw flag and
naturally retains the target call frame.

## Outcome

The exact released wrapper matches without a compiler barrier.
