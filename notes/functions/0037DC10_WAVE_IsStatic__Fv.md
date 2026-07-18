# WAVE_IsStatic__Fv

- Address: `0x0037DC10`
- Size: `0x10` (16 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor tests the wave-static global through a local absolute equate.

## Outcome

The released `WAVE_IsStatic` global predicate matched exactly on the first attempt.
