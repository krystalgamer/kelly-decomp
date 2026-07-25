# to_entity_flavor_t__FRC7stringx

- Address: `0x00128940`
- Size: `0x9C` (156 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.625 | 10.0 | `candidate.cpp` |
| 2 | different | 30.7692 | 10.2564 | `candidate.cpp` |
| 3 | different | 17.0213 | 2.1277 | `candidate.cpp` |
| 4 | different | 92.3077 | 87.1795 | `candidate.cpp` |
| 5 | different | 23.7179 | 7.6923 | `candidate.cpp` |

## Outcome

Five released-source string-buffer variants reproduced entity flavor lookup; the best exact-size candidate matched 34 of 39 instructions, but GCC2 buffer register allocation and length reload scheduling differed.
