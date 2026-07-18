# Reset__Q214PhotoChallenge9Cameraman

- Address: `0x00262818`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset assigns `CSTATE_NONE` (`0`) to `state` at offset `0xC`.

## Outcome

The released `PhotoChallenge::Cameraman::Reset` state clear matched exactly on the first attempt.
