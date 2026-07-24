# WAVETEX_ProjectLight__FP12light_source

- Address: `0x0037F418`
- Size: `0x74` (116 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 28.125 | 15.625 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the released projection guard, light-scale vector writes, shadow texture lookup, matrix/vector globals, blend mode, and projector-light arguments. Preventing the final tail call matched on attempt 2.

## Outcome

Matched wave texture light projection
