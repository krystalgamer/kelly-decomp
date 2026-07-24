# nvlStopAllMovies__Fv

- Address: `0x0038AE40`
- Size: `0x88` (136 bytes)
- Object: `nvl/nvl_ps2`
- Debug source: `C:/NVL/ps2/nvl_ps2.cpp`
- Reference source: `NVL/PS2/nvl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.3235 | 94.1176 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released NVL stop-all loop matched after modeling the full system base so the movie array retained its two-step address setup.

## Outcome

The released NVL stop-all-movies loop matched exactly on the second attempt.
