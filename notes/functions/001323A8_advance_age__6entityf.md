# advance_age__6entityf

- Address: `0x001323A8`
- Size: `0x5C` (92 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 58.0 | 48.0 | `candidate.cpp` |
| 2 | different | 91.3043 | 91.3043 | `candidate.cpp` |
| 3 | different | 91.3043 | 91.3043 | `candidate.cpp` |
| 4 | different | 91.3043 | 91.3043 | `candidate.cpp` |
| 5 | different | 19.2308 | 0.0 | `candidate.cpp` |

## Outcome

Released age advancement and pmesh UV animation matched all semantics and 21/23 instructions, but two prologue scheduling instructions remained reordered after five source-level candidates.
