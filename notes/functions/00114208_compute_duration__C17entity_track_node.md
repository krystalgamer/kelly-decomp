# compute_duration__C17entity_track_node

- Address: `0x00114208`
- Size: `0x5C` (92 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.913 | 34.7826 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released entity_track_node duration calculation, track offsets/get_duration accessors, and max-by-const-reference behavior. Restoring value-return accessors created the target temporary and matched on attempt 2.

## Outcome

Matched released entity track duration computation
