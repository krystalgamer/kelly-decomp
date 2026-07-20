# WAVE_GetNextScheduleIndex__Fv

- Address: `0x0037D8C8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.7273 | 90.9091 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released schedule globals are `u_int`; restoring their unsigned type reproduces the target `divu` modulo sequence.

## Outcome

The released next-wave schedule index helper matched exactly on attempt two.
