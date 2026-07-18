# get_count__C4item

- Address: `0x002B85A8`
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

The released accessor returns `count` from offset `0x218`.

## Outcome

The released `item::get_count` accessor matched exactly on the first attempt.
