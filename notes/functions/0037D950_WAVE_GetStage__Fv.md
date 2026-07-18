# WAVE_GetStage__Fv

- Address: `0x0037D950`
- Size: `0xC` (12 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns the current wave stage through a local absolute equate.

## Outcome

The released `WAVE_GetStage` global load matched exactly on the first attempt.
