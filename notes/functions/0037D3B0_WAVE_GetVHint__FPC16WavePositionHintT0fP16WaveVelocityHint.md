# WAVE_GetVHint__FPC16WavePositionHintT0fP16WaveVelocityHint

- Address: `0x0037D3B0`
- Size: `0x90` (144 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.25 | 15.0 | `candidate.cpp` |
| 2 | different | 29.1667 | 2.7778 | `candidate.cpp` |
| 3 | different | 36.25 | 15.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 4 notes

The released velocity-hint calculation matched after exposing the spline a/b/c arrays as three adjacent coefficient pointers.

## Outcome

The released wave velocity-hint calculation matched exactly on the fourth attempt.
