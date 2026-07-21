# get_primary_region__C6entity

- Address: `0x00134DE0`
- Size: `0x3C` (60 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the released forced-region conditional with minimal old-STL set semantics: test the region-forced flag, use the first tree node when nonempty, otherwise return the center region. Recovered field and node offsets matched all 60 bytes.

## Outcome

The released forced-region selection matches exactly with recovered entity offsets and the old-STL region-set header, count, leftmost-node, and value layout.
