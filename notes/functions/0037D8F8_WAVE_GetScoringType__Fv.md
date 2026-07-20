# WAVE_GetScoringType__Fv

- Address: `0x0037D8F8`
- Size: `0x24` (36 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wave.cpp`
- Reference source: `KS/SRC/ks/wave.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.2222 | 88.8889 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate exposed a negative-low absolute-address or cleanup-call scheduling mismatch.

### Attempt 2 notes

The reconstructed schedule entry is 20 bytes with scoring type at offset zero.

## Outcome

The released `WAVE_GetScoringType` accessor matched exactly.
