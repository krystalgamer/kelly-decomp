# is_paused__C4game

- Address: `0x0027D968`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 32.1429 | 28.5714 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released query reads the `game_paused` bit at position 44 from the 64-bit flag container at offset `0xC8`. Reconstructing the bitfield avoided extra integer widening and matched on attempt two.

## Outcome

The released `game::is_paused` bitfield extraction matched on attempt two with the source-faithful bitfield layout.
