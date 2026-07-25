# CollideWithLip__20SurfBoardObjectClass

- Address: `0x001F9B38`
- Size: `0x98` (152 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 61.8421 | 50.0 | `candidate.cpp` |
| 2 | different | 25.6579 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Restored the released vector3d constructors/operator subtraction and exact board/float fields. This reproduced the stack vector and dot-product comparison on attempt 3.

## Outcome

Matched surfboard lip collision
