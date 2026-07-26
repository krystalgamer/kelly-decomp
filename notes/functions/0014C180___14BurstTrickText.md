# __14BurstTrickText

- Address: `0x0014C180`
- Size: `0xCC` (204 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEPanel.cpp`
- Reference source: `KS/SRC/ks/FEPanel.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 39.2157 | 34.6939 | `candidate.cpp` |
| 3 | different | 41.6667 | 48.9796 | `candidate.cpp` |
| 4 | different | 67.6471 | 75.5102 | `candidate.cpp` |
| 5 | different | 58.3333 | 97.9592 | `candidate.cpp` |

## Outcome

The released constructor hierarchy was recovered, but the compiler retained irreducible array-construction padding and scheduling differences after five source-level attempts.
