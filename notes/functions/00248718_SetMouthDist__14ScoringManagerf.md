# SetMouthDist__14ScoringManagerf

- Address: `0x00248718`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions compiled out, the released method assigns `mouthDist = dist` at offset `0x1D4`.

## Outcome

The released `ScoringManager::SetMouthDist` setter matched exactly on the first attempt.
