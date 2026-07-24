# WAVETEX_GetTextureAnim__Fi

- Address: `0x00380120`
- Size: `0x60` (96 bytes)
- Object: `game/files_wave`
- Debug source: `C:/KS/SRC/ks/wavetex.cpp`
- Reference source: `KS/SRC/ks/wavetex.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.875 | 100.0 | `candidate.cpp` |
| 2 | different | 47.9167 | 41.6667 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 37.5 | `candidate.cpp` |
| 5 | different | 47.9167 | 33.3333 | `candidate.cpp` |

### Attempt 3 notes

Read the exact PS2 switch and five static texture globals. The released switch plus its fixed compiler jump table matched on attempt 3.

### Attempt 4 notes

Read the exact PS2 switch and five static texture globals. The released switch and fixed original jump table matched on attempt 4; build tooling discards only the duplicate label-retention metadata.

## Outcome

Matched animated wave texture lookup
