# has_dirname__C6entity

- Address: `0x00144FB0`
- Size: `0x8` (8 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.h`
- Reference source: `KS/SRC/entity.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Base entities do not provide directory names. Returning `false` matched the
target fallback on the first candidate.

## Outcome

Base entities do not provide directory names and return false. The first candidate matched exactly and preserved the byte-identical integrated ROM.
