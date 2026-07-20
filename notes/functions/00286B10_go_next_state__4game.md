# go_next_state__4game

- Address: `0x00286B10`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game_process.cpp`
- Reference source: `KS/SRC/game_process.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 42.5 | 10.0 | `candidate.cpp` |
| 2 | different | 18.75 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A fully inline trivial iterator was optimized away, producing a 16-byte frame and no stack materialization for the list iterator.

### Attempt 2 notes

Making the iterator non-trivial forced a real destructor call and a 48-byte frame, overshooting the target's spill-only temporary.

### Attempt 3 notes

A minimal list layout plus a volatile trivial iterator reproduces the old library's stack-only iterator materialization before delegating to the current `game_process`.

## Outcome

The released `game::go_next_state` wrapper matched exactly.
