# WAVE_RegionIsFoamy__F14WaveRegionEnum

- Address: `0x00374D20`
- Size: `0x1C` (28 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 82.1429 | 57.1429 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The source-faithful pair of positive tests caused EE GCC to make the tube case fall through; the target branches the tube case to a trailing true return.

### Attempt 2 notes

The recovered enum values 9 and 1 preserve the released two-region predicate.

## Outcome

The local `WAVE_RegionIsFoamy` predicate matched exactly.
