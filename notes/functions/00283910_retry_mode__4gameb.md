# retry_mode__4gameb

- Address: `0x00283910`
- Size: `0xC0` (192 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.5 | 80.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset logic matched until the final IGO notification, where the
reduced declaration used the wrong class symbol and tail-called it.

### Attempt 2 notes

Binding the source-faithful IGO method and direct frontend pointer, then
blocking the tail call, matched exactly.

## Outcome

Matched game mode score resets, mode resets, level retry, and IGO notification.
