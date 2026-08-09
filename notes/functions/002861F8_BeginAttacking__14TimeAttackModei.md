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
| 1 | matched | 100.0 | 100.0 | `size44-attack-wrapper-core.cpp` |

### Attempt 1 notes

The shared mode and controller declarations read the embedded scoring-manager
score and mark the selected player attacking.

## Outcome

The released `TimeAttackMode::BeginAttacking` implementation matched exactly.
