# soft_reset_process__4game

- Address: `0x00288950`
- Size: `0x60` (96 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game_process.cpp`
- Reference source: `KS/SRC/game_process.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 15.625 | 0.0 | `candidate.cpp` |
| 2 | different | 89.5833 | 83.3333 | `candidate.cpp` |
| 3 | different | 89.5833 | 83.3333 | `candidate.cpp` |
| 4 | different | 95.8333 | 91.6667 | `candidate.cpp` |
| 5 | different | 79.1667 | 75.0 | `candidate.cpp` |

## Outcome

Released game soft-reset process reached 22/24 matching instructions, but S0/RA and resize argument scheduling resisted five fixed-register candidates.
