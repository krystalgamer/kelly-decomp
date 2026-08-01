# SetWipeoutDone__20SurfBoardObjectClass

- Address: `0x001F1EE0`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `set-wipeout-done-1.cpp` |
| 2 | different | 5.0 | 0.0 | `set-wipeout-done-2.cpp` |
| 3 | different | 92.5 | 100.0 | `set-wipeout-done-3.cpp` |

## Outcome

The released wipeout completion body tail-calls the effect hook in native compilation; three forms did not match without call-forcing machinery.
