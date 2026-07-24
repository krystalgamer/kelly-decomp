# __tf11team_attrib

- Address: `0x00146128`
- Size: `0x78` (120 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity_soft_attribs.h`
- Reference source: `KS/SRC/entity_soft_attribs.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 3 | different | 16.6667 | 0.0 | `candidate.cpp` |
| 4 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 5 | different | 23.3333 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred team_attrib RTTI generation after five source-level attempts; the released base/derived records and RTTI calls reproduced, but the target global-address register allocation did not.
