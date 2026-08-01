# IncrementFloatSpeed__20SurfBoardObjectClass

- Address: `0x001F9B18`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 53.5714 | 42.8571 | `increment-float-speed-1.cpp` |
| 2 | different | 53.5714 | 42.8571 | `increment-float-speed-2.cpp` |
| 3 | different | 53.5714 | 42.8571 | `increment-float-speed-3.cpp` |

## Outcome

Three ordinary forms of the released float increment omit the target scheduling nop; the instruction-emitting assembly workaround was removed.
