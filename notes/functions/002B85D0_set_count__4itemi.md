# set_count__4itemi

- Address: `0x002B85D0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `item.h`
- Reference source: `KS/SRC/item.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released setter assigns `count` at offset `0x218`.

## Outcome

The released `item::set_count` setter matched exactly on the first attempt.
