# get_light_set__C6entity

- Address: `0x00130E48`
- Size: `0x5C` (92 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.9565 | 17.3913 | `candidate.cpp` |
| 2 | different | 81.5217 | 60.8696 | `candidate.cpp` |
| 3 | different | 81.5217 | 60.8696 | `candidate.cpp` |
| 4 | different | 97.8261 | 95.6522 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Exact released parent light-set recursion remained one delay-slot instruction short after four compiling source-level variants; attempt 4 reached 97.83%, and the fifth distinct variant failed compilation.
