# set_game_mode__4game11game_mode_t

- Address: `0x00284C98`
- Size: `0x80` (128 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 77.3438 | 71.875 | `candidate.cpp` |
| 2 | different | 97.6562 | 100.0 | `candidate.cpp` |
| 3 | different | 97.6562 | 100.0 | `candidate.cpp` |
| 4 | different | 97.6562 | 100.0 | `candidate.cpp` |
| 5 | different | 97.6562 | 100.0 | `candidate.cpp` |

## Outcome

Deferred the released game-mode setter after five source-level attempts; all 32 instructions matched, but the standalone local switch table could not be placed at the target ROM address.
