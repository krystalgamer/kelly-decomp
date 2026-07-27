# unpause__4game

- Address: `0x0027D878`
- Size: `0xEC` (236 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 38.1356 | 28.8136 | `candidate.cpp` |
| 2 | different | 80.8333 | 68.3333 | `candidate.cpp` |
| 3 | different | 20.3125 | 10.9375 | `candidate.cpp` |
| 4 | different | 20.3125 | 10.9375 | `candidate.cpp` |
| 5 | different | 80.8333 | 68.3333 | `candidate.cpp` |

## Outcome

Deferred after five source-faithful attempts. The complete unpause behavior, calls, MusicMan selection, audio gating, and 64-bit game flag accesses are recovered, but register allocation and a five-instruction clear mask remain one instruction longer than target.
