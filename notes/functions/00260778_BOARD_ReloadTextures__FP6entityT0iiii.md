# BOARD_ReloadTextures__FP6entityT0iiii

- Address: `0x00260778`
- Size: `0xE8` (232 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/BoardManager.cpp`
- Reference source: `KS/SRC/ks/BoardManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.3492 | 49.2063 | `candidate.cpp` |
| 2 | different | 56.746 | 50.7937 | `candidate.cpp` |
| 3 | different | 56.746 | 50.7937 | `candidate.cpp` |
| 4 | different | 56.746 | 50.7937 | `candidate.cpp` |
| 5 | different | 63.7931 | 56.8966 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released board texture reload behavior and bindings are recovered, but EE GCC converts each terminal BOARD_LoadMesh call into sibling jumps with duplicated epilogues instead of the target normal calls and shared epilogue.
