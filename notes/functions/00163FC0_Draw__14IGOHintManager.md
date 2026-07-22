# Draw__14IGOHintManager

- Address: `0x00163FC0`
- Size: `0x4C` (76 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igohintmanager.cpp`
- Reference source: `KS/SRC/ks/igohintmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body matched immediately after extending the shared game and TextString declarations and adding the original IGOHintManager member order. The adjusted absolute global representation emits the signed-low load of the real g_game_ptr address.

## Outcome

Matched the released hint manager draw path using shared game, text, and hint manager declarations.
