# _$_20SurfBoardObjectClass

- Address: `0x001EDD40`
- Size: `0x5C` (92 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released destructor, rb/vtable offsets, PhysicsObject deleting-destructor call, and generated delete flags. It matched on attempt 1.

## Outcome

Matched surfboard object destructor
