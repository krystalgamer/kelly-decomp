# __tf20max_turn_rate_attrib

- Address: `0x00145368`
- Size: `0x78` (120 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity_hard_attribs.h`
- Reference source: `KS/SRC/entity_hard_attribs.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 2 | different | 17.5 | 3.3333 | `candidate.cpp` |
| 3 | different | 14.1667 | 0.0 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 17.5 | 3.3333 | `candidate.cpp` |

## Outcome

Deferred max_turn_rate_attrib RTTI generation after five source-level attempts; the released base/derived records and RTTI calls reproduced, but the target global-address register allocation did not.
