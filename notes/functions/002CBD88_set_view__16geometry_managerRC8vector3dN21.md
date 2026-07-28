# set_view__16geometry_managerRC8vector3dN21

- Address: `0x002CBD88`
- Size: `0x198` (408 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/geomgr.cpp`
- Reference source: `KS/SRC/geomgr.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

# FIRST PASS wave 70 lane B2 — 0x002CBD88

- Result: **symbol_missing**
- Attempts: **1**
- Score: **0.0000%**
- Candidate: `tmp/functions/002CBD88_set_view__16geometry_managerRC8vector3dN21/attempt-1/candidate.cpp`
- SHA-1: `e7fc61a75163eae119bbef7aa4f29b32fe613ac6`

The exact released `geometry_manager::set_view` body was submitted once with minimal source-faithful declarations. Compilation emitted `set_view__16geometry_managerRC8vector3dT1T1` rather than the target symbol `set_view__16geometry_managerRC8vector3dN21`, so the harness could not score the body. Per first-pass constraints, no retry, declaration variant, or diff chase was performed.

## Citations

- `kelly-slaters-pro-surfer/KS/SRC/geomgr.cpp:236-262`
- `kelly-slaters-pro-surfer/KS/SRC/geomgr.h:39-73,176-190`
- `kelly-slaters-pro-surfer/KS/SRC/HWOSPS2/ps2_algebra.h:292-371`
- `tmp/functions/002CBD88_set_view__16geometry_managerRC8vector3dN21/attempt-1/result.json`

## Outcome

The exact released geometry-manager view setter emitted no target symbol; no source variant was attempted.
