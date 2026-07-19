# GetSickness__CQ214ScoringManager5Chain

- Address: `0x002490C0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/scoringmanager.cpp`
- Reference source: `KS/SRC/ks/scoringmanager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released method returns `GetRawSickness` directly; retaining the float across a barrier preserves the wrapper.

## Outcome

The released `ScoringManager::Chain::GetSickness` wrapper matched exactly on the first attempt.
