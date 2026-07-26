# __10convex_boxRC10convex_box

- Address: `0x002D7F50`
- Size: `0xE0` (224 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/convex_box.cpp`
- Reference source: `KS/SRC/convex_box.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.6607 | 0.0 | `candidate.cpp` |
| 2 | different | 23.6607 | 0.0 | `candidate_exact.cpp` |
| 3 | different | 23.6607 | 0.0 | `candidate_bbox_members.cpp` |
| 4 | different | 23.6607 | 0.0 | `candidate_full_release.cpp` |
| 5 | different | 22.7679 | 1.9608 | `candidate-5-pointer-reference-copy.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released convex_box copy constructor confirms the class layout and copy semantics, but EE GCC hoists bounding-box pointers and schedules the plane-constructor loop differently, leaving a 16-byte mismatch that would require forbidden compiler control.
