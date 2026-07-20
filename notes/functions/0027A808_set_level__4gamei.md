# set_level__4gamei

- Address: `0x0027A808`
- Size: `0x24` (36 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/game.cpp`
- Reference source: `KS/SRC/game.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.2222 | 88.8889 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The first candidate used the effective career-data address without the `%hi` carry required by its negative low half.

### Attempt 2 notes

The reconstructed career-data stride is 0xdc with beach at offset zero; game level/beach fields are at 0x224/0x228.

## Outcome

The released integer `game::set_level` implementation matched exactly.
