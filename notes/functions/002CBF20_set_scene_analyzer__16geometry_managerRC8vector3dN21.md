# set_scene_analyzer__16geometry_managerRC8vector3dN21

- Address: `0x002CBF20`
- Size: `0x2C` (44 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/geomgr.cpp`
- Reference source: `KS/SRC/geomgr.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 52.2727 | 54.5455 | `candidate.cpp` |
| 3 | different | 59.0909 | 54.5455 | `candidate.cpp` |
| 4 | different | 59.0909 | 54.5455 | `candidate.cpp` |
| 5 | different | 25.0 | 9.0909 | `candidate.cpp` |

### Attempt 1 notes

The first candidate failed due to an access or exact signature-mangling mismatch.

### Attempt 2 notes

The symbol-preserving outer alias worked, but the inner `set_look_at` declaration emitted `T2T2` while the absolute alias named `N22`, leaving a relocation and altering scheduling.

### Attempt 3 notes

Resolving the inner symbol left only the isolated argument/prologue schedule mismatch.

### Attempt 4 notes

Explicit argument register constraints moved the stack adjustment and RA save too early relative to the target setup.

### Attempt 5 notes

The fifth saved-target source shape still could not reproduce the target argument/prologue interleave; the five-attempt limit is exhausted.

## Outcome

Five source shapes could not reproduce the target argument/prologue interleave around the `set_look_at` call; best byte score was 59.0909%.
