# __13message_board

- Address: `0x002CED28`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/msgboard.cpp`
- Reference source: `KS/SRC/msgboard.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.1429 | 14.2857 | `msgboard.cpp` |
| 2 | different | 32.1429 | 14.2857 | `message_board_2.cpp` |
| 3 | different | 32.1429 | 14.2857 | `message_board_3.cpp` |

## Outcome

The exact empty constructor, an explicit member initializer, and an explicit
return all emit the three vector stores without the target stack frame. The
volatile-local workaround was removed and the constructor was deferred.
