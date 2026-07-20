# _compute_duration__17entity_track_tree

- Address: `0x00114970`
- Size: `0x38` (56 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.0714 | 35.7143 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 85.7143 | 85.7143 | `candidate.cpp` |
| 4 | different | 85.7143 | 85.7143 | `candidate.cpp` |
| 5 | different | 85.7143 | 85.7143 | `candidate.cpp` |

### Attempt 1 notes

Used the released duration reset, get_root, and recursive computation calls. EE GCC converted the final recursive call into a sibling tail jump, producing 52 bytes.

### Attempt 2 notes

Added the required KELLY_DECOMP_COMPILER_BARRIER call without including its annotation header. The isolated candidate did not compile because the macro was undefined.

### Attempt 3 notes

Included decomp_annotations.h and used a trailing KELLY_DECOMP_COMPILER_BARRIER to preserve the framed recursive call. The body matched, but EE GCC copied `this` into s0 before saving `ra`; the target saves `ra` first. Best score: 85.71%.

### Attempt 4 notes

Added a second KELLY_DECOMP_COMPILER_BARRIER at function entry to perturb prologue scheduling. The emitted sequence remained identical to attempt 3.

### Attempt 5 notes

Stored get_root in an explicit local and placed a KELLY_DECOMP_COMPILER_BARRIER between the two calls. The same two prologue instructions remained reversed.

## Outcome

Five source-authentic candidates could not reproduce the target ra-save before s0-copy prologue ordering; best score was 85.7143%.
