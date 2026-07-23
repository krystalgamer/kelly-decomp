# OnUnactivate__16TutorialFrontEndP6FEMenu

- Address: `0x001D0CC0`
- Size: `0x58` (88 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/TutorialFrontEnd.cpp`
- Reference source: `KS/SRC/ks/TutorialFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 60.4167 | 50.0 | `candidate.cpp` |
| 2 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 3 | different | 90.9091 | 90.9091 | `candidate.cpp` |
| 4 | different | 84.0909 | 81.8182 | `candidate.cpp` |
| 5 | different | 90.9091 | 90.9091 | `candidate.cpp` |

### Attempt 1 notes

Used the exact released tutorial unactivation calls plus target-observed current-voice null check, FE/IGO/tutorial/wave-indicator offsets, and Stop/Hide helpers. Hide was tail-called and duplicated epilogues grew the function.

### Attempt 2 notes

Added a non-emitting post-Hide continuation. Size matched; only the first frontend load and return-address save order differed (90.91%).

### Attempt 3 notes

Named the first IGO pointer explicitly. The same two-instruction prologue schedule remained.

### Attempt 4 notes

Constrained the first IGO pointer to v0. This changed surrounding load scheduling and regressed.

### Attempt 5 notes

Used an explicit frontend manager pointer while retaining the two required IGO loads. The compiler returned to the 90.91% prologue schedule.

## Outcome

Released TutorialFrontEnd::OnUnactivate remained blocked by an equivalent first-load/return-address prologue schedule after five source-level attempts.
