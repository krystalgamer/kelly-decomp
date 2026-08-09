# Reset__15MeterAttackMode

- Address: `0x00286580`
- Size: `0x3C` (60 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released reset uses the shared `MeterAttackMode::PLAYER` layout and
common-tail induction pointer.

## Outcome

The released reset was already canonical and remains exact.
