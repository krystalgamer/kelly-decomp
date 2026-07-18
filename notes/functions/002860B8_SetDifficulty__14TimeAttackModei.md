# SetDifficulty__14TimeAttackModei

- Address: `0x002860B8`
- Size: `0x14` (20 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter stores strength at `0x38` and ten times that value at `0x3C`.

## Outcome

The released `TimeAttackMode::SetDifficulty` assignments matched exactly on the first attempt.
