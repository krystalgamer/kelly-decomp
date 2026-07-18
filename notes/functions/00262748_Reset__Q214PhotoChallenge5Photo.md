# Reset__Q214PhotoChallenge5Photo

- Address: `0x00262748`
- Size: `0xC` (12 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset clears `score` at `0x4` then `isOfSpecialTrick` at `0x8`; EE GCC schedules the first source store into the delay slot.

## Outcome

The released `PhotoChallenge::Photo::Reset` clears matched exactly on the first attempt.
