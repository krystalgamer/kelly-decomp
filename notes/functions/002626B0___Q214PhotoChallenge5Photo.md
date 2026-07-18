# __Q214PhotoChallenge5Photo

- Address: `0x002626B0`
- Size: `0x14` (20 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor clears `texture`, `score`, and `isOfSpecialTrick` at offsets `0x0`, `0x4`, and `0x8`, then returns `this`.

## Outcome

The released `PhotoChallenge::Photo` constructor matched exactly on the first attempt.
