# inc_count__4item

- Address: `0x002B85B0`
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

The released inline method increments `count` at offset `0x218`.

## Outcome

The released `item::inc_count` update matched exactly on the first attempt.
