# Init__Q214PhotoChallenge9CameramanP6entity

- Address: `0x00262800`
- Size: `0x14` (20 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 90.0 | 60.0 | `candidate.cpp` |
| 2 | different | 90.0 | 60.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The initializer stores `ent` at `0x4` and clears `state`, `destPhoto`, and `targetKsctrl` at `0x0`, `0x8`, and `0xC`. Reordering equivalent clears to account for EE scheduling matched on attempt three.

## Outcome

The `PhotoChallenge::Cameraman::Init` assignments matched on attempt three with the target store schedule.
