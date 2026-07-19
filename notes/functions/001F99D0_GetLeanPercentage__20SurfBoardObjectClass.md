# GetLeanPercentage__20SurfBoardObjectClass

- Address: `0x001F99D0`
- Size: `0x20` (32 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Minimal padding preserves the lean fields at 0xd8 and 0x9d0 and the released degree-to-radian conversion.

## Outcome

The released `SurfBoardObjectClass::GetLeanPercentage` expression matched exactly.
