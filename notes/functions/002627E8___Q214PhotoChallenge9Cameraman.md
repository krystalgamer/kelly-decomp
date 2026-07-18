# __Q214PhotoChallenge9Cameraman

- Address: `0x002627E8`
- Size: `0x18` (24 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 66.6667 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The constructor clears entity/state/photo/controller fields at offsets `0x4`, `0x0`, `0x8`, and `0xC`. Ordering equivalent clears to reproduce EE scheduling matched on attempt two.

## Outcome

The `PhotoChallenge::Cameraman` constructor matched on attempt two with the target store schedule.
