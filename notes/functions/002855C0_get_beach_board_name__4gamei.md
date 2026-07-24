# get_beach_board_name__4gamei

- Address: `0x002855C0`
- Size: `0x78` (120 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.1667 | 10.0 | `candidate.cpp` |
| 2 | different | 99.1667 | 96.6667 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released BeachDataArray scan matched after applying the nominal high-address adjustment required to reproduce the target lui/addiu pair.

## Outcome

The released beach board name lookup matched exactly on the third attempt.
