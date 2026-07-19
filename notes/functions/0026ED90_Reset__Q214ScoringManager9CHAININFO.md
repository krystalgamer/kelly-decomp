# Reset__Q214ScoringManager9CHAININFO

- Address: `0x0026ED90`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `ks/scoringmanager.h`
- Reference source: `KS/SRC/ks/scoringmanager.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released field order and reset statement order reproduce the target's scheduled six zero stores.

## Outcome

The inline `ScoringManager::CHAININFO::Reset` implementation matched exactly on the first attempt.
