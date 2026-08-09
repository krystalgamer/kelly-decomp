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

The released getter uses the shared 20-byte schedule entry and 16-byte
schedule-type declarations to return the active height.

## Outcome

The local wave schedule layouts were removed.
