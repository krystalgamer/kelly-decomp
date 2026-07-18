# WAVE_GetHeightFudgeFactor__Fi

- Address: `0x0037DCE8`
- Size: `0x18` (24 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor indexes the global float height-fudge table.

## Outcome

The released `WAVE_GetHeightFudgeFactor` indexed load matched exactly on the first attempt.
