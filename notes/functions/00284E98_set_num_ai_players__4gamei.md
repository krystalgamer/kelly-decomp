# set_num_ai_players__4gamei

- Address: `0x00284E98`
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

With assertions compiled out, the released setter writes `num_ai_players` at offset `0xB4`.

## Outcome

The released `game::set_num_ai_players` setter matched exactly on the first attempt.
