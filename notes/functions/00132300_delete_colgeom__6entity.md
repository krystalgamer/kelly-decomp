# delete_colgeom__6entity

- Address: `0x00132300`
- Size: `0x6C` (108 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the colgeom pointer/instance flag, cg_mesh bank deletion path, collision-geometry deleting destructor slot, and null reset. It matched on attempt 1.

## Outcome

Matched entity collision geometry deletion
