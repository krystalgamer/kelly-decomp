# __12conglomerateRC9entity_idUi

- Address: `0x00302C58`
- Size: `0x70` (112 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/conglom.cpp`
- Reference source: `KS/SRC/conglom.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.3214 | 25.0 | `candidate.cpp` |
| 2 | different | 49.1071 | 21.4286 | `candidate.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 4 | different | 63.3929 | 25.0 | `candidate.cpp` |
| 5 | different | 51.7857 | 21.4286 | `candidate.cpp` |

## Outcome

Deferred conglomerate constructor after five source-level attempts; the released entity base call and member initialization reproduced, but the target nontrivial-vector constructor frame and store scheduling did not.
