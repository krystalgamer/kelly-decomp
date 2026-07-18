# WAVE_GetScheduleIndex__Fv

- Address: `0x0037D8B8`
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

The released accessor returns the wave schedule index through a local absolute equate.

## Outcome

The released `WAVE_GetScheduleIndex` global load matched exactly on the first attempt.
