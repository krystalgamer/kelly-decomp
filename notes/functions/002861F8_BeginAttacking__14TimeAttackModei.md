# BeginAttacking__14TimeAttackModei

- Address: `0x002861F8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_timeattack.cpp`
- Reference source: `KS/SRC/ks/mode_timeattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal player layout refreshes the selected time attack state and marks it attacking.

## Outcome

The released `TimeAttackMode::BeginAttacking` implementation matched exactly.
