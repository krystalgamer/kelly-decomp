# check_for_pickup__4item

- Address: `0x0028A1E0`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released pickup logic is gated by disabled `GCCULL`, leaving a `false` result.

## Outcome

The configuration-reduced `item::check_for_pickup` predicate matched exactly on the first attempt.
