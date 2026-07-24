# __tf13IconChallenge

- Address: `0x0026F830`
- Size: `0x88` (136 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.h`
- Reference source: `KS/SRC/ks/challenge_icon.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.1176 | 85.2941 | `candidate.cpp` |
| 2 | different | 16.9118 | 0.0 | `candidate.cpp` |
| 3 | different | 17.8571 | 5.7143 | `candidate.cpp` |
| 4 | different | 78.6765 | 73.5294 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released icon-challenge RTTI helper after five source-level attempts; EventRecipient base and derived RTTI initialization were reconstructed, but high-address register materialization remained different.
