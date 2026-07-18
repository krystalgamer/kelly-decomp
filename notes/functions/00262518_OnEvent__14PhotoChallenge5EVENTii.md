# OnEvent__14PhotoChallenge5EVENTii

- Address: `0x00262518`
- Size: `0x14` (20 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released callback clears `recordChain` at `0x14` only for global event `7`. Restoring `EVENT` to global scope corrected the old-GCC symbol on attempt two.

## Outcome

The released `PhotoChallenge::OnEvent` conditional clear matched on attempt two with the correct global event type.
