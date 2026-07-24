# __tf6entity

- Address: `0x001449C8`
- Size: `0x88` (136 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 94.1176 | 85.2941 | `candidate.cpp` |
| 2 | different | 16.9118 | 0.0 | `candidate.cpp` |
| 3 | different | 78.6765 | 64.7059 | `candidate.cpp` |
| 4 | different | 78.6765 | 73.5294 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released entity RTTI helper after five source-level attempts; the signaller-to-bone-to-entity RTTI initialization chain was reconstructed, but high-address register materialization remained different.
