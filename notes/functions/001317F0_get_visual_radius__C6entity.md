# get_visual_radius__C6entity

- Address: `0x001317F0`
- Size: `0x5C` (92 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 35.8696 | 21.7391 | `candidate.cpp` |
| 2 | different | 46.7391 | 39.1304 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

Read the exact released ternary radius lookup, entity/visual-rep offsets, age accessor, and virtual radius slot. A source-level explicit non-null branch plus slot view matched on attempt 3.

## Outcome

The empty compiler barrier was removed. Ordinary shared C++ changes the
branch-likely return schedule, so the shipped wrapper is deferred.
