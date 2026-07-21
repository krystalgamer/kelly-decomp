# WAVE_GetHeight__Fv

- Address: `0x0037DC40`
- Size: `0x38` (56 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released getter indexes the 20-byte active schedule entry, then the 16-byte schedule type, and returns its height field. Recovered globals, strides, and offsets match exactly.

## Outcome

The original active-wave height lookup matches exactly with the recovered schedule and type table layouts.
