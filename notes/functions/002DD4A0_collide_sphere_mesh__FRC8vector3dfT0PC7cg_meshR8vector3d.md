# collide_sphere_mesh__FRC8vector3dfT0PC7cg_meshR8vector3d

- Address: `0x002DD4A0`
- Size: `0x22C` (556 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/collide.cpp`
- Reference source: `KS/SRC/collide.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

FIRST PASS wave107 B5
Target: 0x002DD4A0 collide_sphere_mesh__FRC8vector3dfT0PC7cg_meshR8vector3d (556/0x22C), game/files_misc2
Reference: historicalsource/kelly-slaters-pro-surfer/KS/SRC/collide.cpp
Attempts before: 0
Attempt 1: exact released function with LF line endings
Result: compile_failed; the standalone harness could not resolve the released source header paths KS/SRC/global.h, KS/SRC/hwmath.h, and KS/SRC/collide.h.
Exactly one candidate was tested. No follow-up, alternatives, retries, build, git operations, queue edits, or tracked edits were performed.

## Outcome

The exact released sphere-mesh collision candidate failed to compile with its minimal declarations; no alternate source was attempted.
