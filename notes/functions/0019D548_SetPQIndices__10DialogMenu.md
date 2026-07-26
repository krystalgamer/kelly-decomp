# SetPQIndices__10DialogMenu

- Address: `0x0019D548`
- Size: `0xC0` (192 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SaveLoadFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 81.25 | 77.0833 | `candidate.cpp` |
| 2 | different | 82.2917 | 79.1667 | `candidate.cpp` |
| 3 | different | 72.9167 | 70.8333 | `candidate.cpp` |
| 4 | different | 82.2917 | 79.1667 | `candidate.cpp` |
| 5 | different | 75.5208 | 70.8333 | `candidate.cpp` |

### Attempt 2 notes

Restoring the released dialog entry-array layout recovered all member offsets.
The remaining differences were callee-save order and the compiler's
store-versus-next-vtable-prefetch scheduling.

### Attempt 5 notes

Function barriers and named return temporaries could not reproduce the target
schedule across the five virtual `GetPointer` calls.

## Outcome

Five source-level forms could not reproduce the dialog pointer setup's callee-save and inter-call prefetch scheduling.
