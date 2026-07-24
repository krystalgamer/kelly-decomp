# GetColor__14MenuEntryTitle

- Address: `0x0023F170`
- Size: `0x84` (132 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.2941 | 20.5882 | `candidate.cpp` |
| 2 | different | 35.2941 | 20.5882 | `candidate.cpp` |
| 3 | different | 35.2941 | 20.5882 | `candidate.cpp` |
| 4 | different | 16.9118 | 2.9412 | `candidate.cpp` |
| 5 | different | 22.2222 | 8.8889 | `candidate.cpp` |

## Outcome

Deferred the released menu-title color accessor after five source-level attempts; the exact aggregate return was reconstructed, but the compiler materialized one mask constant with a different instruction sequence.
