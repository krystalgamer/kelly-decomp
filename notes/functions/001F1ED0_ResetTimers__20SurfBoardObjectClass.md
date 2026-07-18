# ResetTimers__20SurfBoardObjectClass

- Address: `0x001F1ED0`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.3333 | 33.3333 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The header places `backwards_time` at `0xA54` and `standing_time` at `0xA60`; restoring that order produced the released source scheduling on attempt three.

## Outcome

The released `SurfBoardObjectClass::ResetTimers` clears matched on attempt three after restoring the header member order.
