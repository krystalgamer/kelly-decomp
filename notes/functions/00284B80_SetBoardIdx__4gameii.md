# SetBoardIdx__4gameii

- Address: `0x00284B80`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the released setter indexes the board array at offset `0x250`.

## Outcome

The released `game::SetBoardIdx` indexed store matched exactly on the first attempt.
