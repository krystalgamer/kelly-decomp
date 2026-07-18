# WAVE_GetScheduleRemainingSec__Fv

- Address: `0x0037D938`
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

The released accessor subtracts the wave timer global from the remaining schedule endpoint.

## Outcome

The released `WAVE_GetScheduleRemainingSec` global subtraction matched exactly on the first attempt.
