# LoadingStateReset__4game

- Address: `0x00284EE0`
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

The released reset clears `current_loading_state` at `0x290`, `loading_progress` at `0x298`, and `last_loading_progress` at `0x29C`.

## Outcome

The released `game::LoadingStateReset` state clears matched exactly on the first attempt.
