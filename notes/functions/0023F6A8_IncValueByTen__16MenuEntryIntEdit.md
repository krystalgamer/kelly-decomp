# IncValueByTen__16MenuEntryIntEdit

- Address: `0x0023F6A8`
- Size: `0x74` (116 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 13.7931 | 0.0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 27.3438 | 12.5 | `candidate.cpp` |
| 4 | different | 24.1935 | 0.0 | `candidate.cpp` |
| 5 | different | 26.7241 | 6.8966 | `candidate.cpp` |

## Outcome

Deferred integer menu increment-by-ten after five source-level attempts; the released virtual value update and clamp call reproduced, but the target cached virtual receiver/slot register allocation did not.
