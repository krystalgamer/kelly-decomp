# is_health__C4item

- Address: `0x002B8620`
- Size: `0x10` (16 bytes)
- Object: `game/files_misc1`
- Debug source: `item.h`
- Reference source: `KS/SRC/item.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released predicate compares `usage_type` at `0x20C` with `HEALTH` (`7`).

## Outcome

The released `item::is_health` predicate matched exactly on the first attempt.
