# xform__17collision_capsuleRC2po

- Address: `0x002D7910`
- Size: `0xB4` (180 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/capsule.cpp`
- Reference source: `KS/SRC/capsule.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 33.8889 | 17.7778 | `candidate.cpp` |
| 2 | different | 89.4444 | 88.8889 | `candidate.cpp` |
| 3 | different | 83.8889 | 64.4444 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 83.8889 | 64.4444 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used shared source-faithful capsule, collision_geometry, po, and vector declarations, but the reduced vector3d declaration selected aggregate 64-bit copies instead of released component assignment.

### Attempt 2 notes

Adding the released component-wise vector3d assignment restored target size and all data movement, leaving only five slow_xform argument-setup scheduling instructions.

### Attempt 3 notes

Explicit transformed-vector locals retained target size but reordered more calls and assignments.

### Attempt 4 notes

An explicit aggregate-result ABI candidate initially exposed the missing released vector3d default constructor in shared context.

### Attempt 5 notes

With the released default constructor restored, the explicit result ABI produced the same broader ordering as the local-temporary form. No local capsule or po layout was retained.

## Outcome

Deferred collision-capsule transformation after five source-level attempts; released shared types restored component copies but not slow_xform argument scheduling.
