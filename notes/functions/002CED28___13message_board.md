# __13message_board

- Address: `0x002CED28`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/msgboard.cpp`
- Reference source: `KS/SRC/msgboard.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.1429 | 14.2857 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `message_board_2.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The inlined three-pointer vector constructor produced the stores but omitted the target frame. A volatile constructor local preserves the released 16-byte frame without adding instructions.

## Outcome

`message_board`'s constructor matched exactly after preserving its otherwise-empty stack frame.
