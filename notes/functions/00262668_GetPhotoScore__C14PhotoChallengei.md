# GetPhotoScore__C14PhotoChallengei

- Address: `0x00262668`
- Size: `0x18` (24 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 87.5 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

The released accessor indexes 12-byte photo records from pointer `0x30` and calls inline `GetScore`, returning offset `0x4`. Restoring the helper matched register allocation on attempt two.

## Outcome

The released `PhotoChallenge::GetPhotoScore` address calculation matched on attempt two with the inline record accessor.
