# release__6entity

- Address: `0x0012AAB0`
- Size: `0x68` (104 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 75.0 | 69.2308 | `candidate.cpp` |
| 2 | different | 75.0 | 69.2308 | `candidate.cpp` |
| 3 | different | 75.0 | 69.2308 | `candidate.cpp` |
| 4 | different | 30.7692 | 11.5385 | `candidate.cpp` |
| 5 | different | 75.0 | 69.2308 | `candidate.cpp` |

## Outcome

Released entity release sequence matched semantically but requires a compiler-inserted loop nop; five source candidates could not reproduce it without prohibited instruction assembly.
