# Attack__15MeterAttackModeif

- Address: `0x002867A8`
- Size: `0x11C` (284 bytes)
- Object: `game/files_misc1`
- Debug source: `ks/mode_meterattack.cpp`
- Reference source: `KS/SRC/ks/mode_meterattack.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.5479 | 5.4795 | `candidate.cpp` |

### Attempt 1 notes

# Attack__15MeterAttackModeif — first pass A3

- Released body copied exactly, with only self-contained class/player declarations and `MAX_PLAYERS` materialized as `2`.
- Shared 24-byte player layout is confirmed by the exact matches for `BeginAttacking` and `IsAttacking`.
- The single non-placeholder compile/compare test produced `different`: 20.5479% byte score, 5.4795% instruction score, 292 candidate bytes versus 284 target bytes.
- No variants were attempted.

## Outcome

The exact released meter-attack mode handler differed from the target; the sole attempt scored 20.5479%.
