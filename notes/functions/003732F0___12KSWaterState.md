# __12KSWaterState

- Address: `0x003732F0`
- Size: `0x34` (52 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released scalar state initialization matched exactly with three-entry stage arrays and TotalSec at offset 0x48.

## Outcome

The released KSWaterState constructor matched exactly on the first attempt.
