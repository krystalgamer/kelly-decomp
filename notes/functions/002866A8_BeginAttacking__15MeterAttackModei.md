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
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal player layout refreshes the selected meter attack state and marks it attacking.

## Outcome

The released `MeterAttackMode::BeginAttacking` implementation matched exactly.
