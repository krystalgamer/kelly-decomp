# is_picked_up__6entity

- Address: `0x00144EF8`
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

The base method's assertion is removed in the Final build, leaving its
`false` fallback. The first candidate matched directly.

## Outcome

The base is_picked_up assertion is removed in the Final build, leaving its false fallback. The first candidate matched exactly and preserved the integrated ROM checksum.
