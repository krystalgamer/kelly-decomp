# force_region__6entityPQ2t5graph4Z7stringxZP6regionZP6portalZt4less1Z7stringx4node

- Address: `0x00130968`
- Size: `0x58` (88 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 73.8636 | 68.1818 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released entity::force_region body, forced-region flag/offset, graph node signature, and three helper calls. Used a source-faithful alias for the exact nested node mangling; a non-emitting post-add continuation prevented tail calling and matched on attempt 3.

## Outcome

Matched released entity force_region body
