# setMaxHandicap__15GlobalDataClassii

- Address: `0x002EFD58`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc2`
- Debug source: `ks/GlobalData.cpp`
- Reference source: `KS/SRC/ks/GlobalData.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The reconstructed surfer stride is 120 bytes with handicap at relative offset 0x70; the released setter caps it at six.

## Outcome

The released maximum-handicap setter matched exactly.
