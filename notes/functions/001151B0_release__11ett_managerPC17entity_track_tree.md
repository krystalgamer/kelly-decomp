# release__11ett_managerPC17entity_track_tree

- Address: `0x001151B0`
- Size: `0xF4` (244 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate-2.cpp` |
| 3 | different | 30.7377 | 0.0 | `candidate-3.cpp` |
| 4 | different | 29.918 | 7.0175 | `candidate-4.cpp` |
| 5 | different | 13.1148 | 0.0 | `candidate-5.cpp` |

## Outcome

Deferred after five authentic standard attempts; the released map-iterator traversal is known, but the isolated declarations did not reproduce the original STL code generation.
