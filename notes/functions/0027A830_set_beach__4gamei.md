# set_beach__4gamei

- Address: `0x0027A830`
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

The released method sets `levelid` at `0x224` to `LEVEL_LAST - 1` (`31`) and stores `beachid` at `0x228`.

## Outcome

The released `game::set_beach` assignments matched exactly on the first attempt.
