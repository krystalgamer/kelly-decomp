# pop_process__4game

- Address: `0x00286A80`
- Size: `0x64` (100 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game_process.cpp`
- Reference source: `KS/SRC/game_process.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.0 | 4.0 | `candidate.cpp` |
| 2 | different | 22.2222 | 2.7778 | `candidate.cpp` |
| 3 | different | 30.5556 | 0.0 | `candidate.cpp` |
| 4 | different | 30.5556 | 3.7037 | `candidate.cpp` |
| 5 | different | 30.5556 | 3.7037 | `candidate.cpp` |

## Outcome

Released process-list pop, destructor, and allocator return were reconstructed, but compiler stack iterator placement and scheduling resisted five candidates.
