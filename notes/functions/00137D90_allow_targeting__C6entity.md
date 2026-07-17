# allow_targeting__C6entity

- Address: `0x00137D90`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The current build returns `true` before the disabled targeting checks. The
constant true predicate matched on the first attempt.

## Outcome

The current build returns true before a disabled block of targeting checks. The constant predicate matched on the first attempt and preserved the exact integrated ROM checksum.
