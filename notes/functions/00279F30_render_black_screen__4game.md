# render_black_screen__4game

- Address: `0x00279F30`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released target configuration reduces the black-screen helper to an empty body.

## Outcome

The configuration-empty `game::render_black_screen` method matched exactly on the first attempt.
