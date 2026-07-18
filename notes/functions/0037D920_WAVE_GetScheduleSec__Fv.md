# WAVE_GetScheduleSec__Fv

- Address: `0x0037D920`
- Size: `0x18` (24 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 66.6667 | `candidate.cpp` |
| 2 | different | 5.0 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released accessor computes total time minus schedule start. Restoring the inline `WAVE_GetTotalSec` helper reproduced operand load ordering on attempt three.

## Outcome

The released `WAVE_GetScheduleSec` subtraction matched on attempt three with the inline total-time helper.
