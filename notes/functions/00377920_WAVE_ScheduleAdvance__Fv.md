# WAVE_ScheduleAdvance__Fv

- Address: `0x00377920`
- Size: `0x90` (144 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 22.2222 | 13.8889 | `candidate.cpp` |
| 2 | different | 22.9167 | 13.8889 | `candidate.cpp` |
| 3 | different | 64.5833 | 55.5556 | `candidate.cpp` |
| 4 | different | 50.6579 | 34.2105 | `candidate.cpp` |
| 5 | different | 42.3611 | 30.5556 | `candidate.cpp` |

## Outcome

Five released-body candidates could not reproduce the inlined remaining-time branch, FPU hazard spacing, and warning-side debug load schedule together.
