# clear_path__13ai_locomotion

- Address: `0x00107FD8`
- Size: `0x54` (84 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion.cpp`
- Reference source: `KS/SRC/ai_locomotion.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 36.9048 | 19.0476 | `candidate.cpp` |
| 2 | different | 26.1905 | 4.7619 | `candidate.cpp` |
| 3 | different | 30.9524 | 14.2857 | `candidate.cpp` |
| 4 | different | 30.9524 | 14.2857 | `candidate.cpp` |
| 5 | different | 28.5714 | 14.2857 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released clear_path body with reconstructed path and path_graph declarations and offsets. The compiler preserved the path subobject rather than the owning ai_locomotion pointer, producing a different register/call schedule.

### Attempt 2 notes

Added the matching-only barrier after the released path clear call to prevent tail-call formation. The compiler shortened the body to 80 bytes and still preserved the path subobject.

### Attempt 3 notes

Expressed the released body through source-faithful layout helpers and explicit external calls. The optimizer again kept the path pointer instead of the owning object.

### Attempt 4 notes

Introduced an explicit ai_locomotion self alias before deriving the path and graph locals. It optimized to the same 80-byte layout form as attempt 3.

### Attempt 5 notes

Restored the class/member spelling and cached get_num_waypoints in a source local with nested released conditions. The compiler still selected the non-target path-pointer register allocation.

## Outcome

Released ai_locomotion::clear_path did not reproduce the target owning-object register allocation after five source-level attempts.
