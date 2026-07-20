# AddAccomplishment__11player_infoP6entity

- Address: `0x002597B0`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/player.cpp`
- Reference source: `KS/SRC/ks/player.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method bounds the 20-entry accomplishment array before storing and incrementing its count.

## Outcome

The released `player_info::AddAccomplishment` implementation matched exactly.
