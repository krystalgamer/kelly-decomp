# WAVE_ResetSchedule__Fv

- Address: `0x00377900`
- Size: `0x20` (32 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-final-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-final-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-final-probes-3.cpp` |

## Outcome

All three direct forms clear `WAVE_ScheduleIndex` and tail-call `WAVE_ScheduleSync` in 12 bytes. The target retains a 32-byte frame, so the wrapper was deferred.
