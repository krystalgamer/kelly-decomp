# BeginAttacking__15MeterAttackModei

- Address: `0x002866A8`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `size44-attack-wrapper-core.cpp` |

### Attempt 1 notes

The shared mode and controller declarations read the embedded scoring-manager
score and mark the selected player attacking.

## Outcome

The released `MeterAttackMode::BeginAttacking` implementation matched exactly.
