# GetPhotoIsOfSpecialTrick__14PhotoChallengei

- Address: `0x00262698`
- Size: `0x18` (24 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_photo.cpp`
- Reference source: `KS/SRC/ks/challenge_photo.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor indexes 12-byte photo records from pointer `0x30` and returns the word-sized special flag at record offset `0x8`.

## Outcome

The released `PhotoChallenge::GetPhotoIsOfSpecialTrick` indexed load matched exactly on the first attempt.
