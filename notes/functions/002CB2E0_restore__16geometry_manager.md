# restore__16geometry_manager

- Address: `0x002CB2E0`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/geomgr.cpp`
- Reference source: `KS/SRC/geomgr.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released restore method delegates to `rebuild_view_frame`; a barrier preserves the wrapper.

## Outcome

The released `geometry_manager::restore` wrapper matched exactly on the first attempt.
