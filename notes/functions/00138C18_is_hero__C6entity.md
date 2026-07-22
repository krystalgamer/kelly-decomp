# is_hero__C6entity

- Address: `0x00138C18`
- Size: `0x50` (80 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 23.8636 | 9.0909 | `candidate.cpp` |
| 3 | different | 16.6667 | 9.5238 | `candidate.cpp` |
| 4 | different | 75.0 | 60.0 | `candidate.cpp` |
| 5 | different | 51.25 | 35.0 | `candidate.cpp` |

## Outcome

deferred after five source candidates; exact immutable hero scan retains unreproduced loop induction scheduling
