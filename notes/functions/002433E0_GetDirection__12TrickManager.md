# GetDirection__12TrickManager

- Address: `0x002433E0`
- Size: `0xCC` (204 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/trick_system.cpp`
- Reference source: `KS/SRC/ks/trick_system.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.5098 | 7.8431 | `candidate.cpp` |
| 2 | different | 51.4706 | 39.2157 | `candidate.cpp` |
| 3 | different | 56.7308 | 44.2308 | `candidate.cpp` |
| 4 | different | 48.0392 | 33.3333 | `candidate.cpp` |
| 5 | different | 48.0392 | 33.3333 | `candidate.cpp` |

## Outcome

The released direction mapping was recovered, but two floating-point compare hazard nops remained irreducible after five source-level attempts.
