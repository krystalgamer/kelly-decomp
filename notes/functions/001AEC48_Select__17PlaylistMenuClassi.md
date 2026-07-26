# Select__17PlaylistMenuClassi

- Address: `0x001AEC48`
- Size: `0xD8` (216 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 66.6667 | 50.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 3 | different | 54.1667 | 40.7407 | `candidate.cpp` |
| 4 | different | 54.6296 | 42.5926 | `candidate.cpp` |
| 5 | different | 97.2222 | 92.5926 | `candidate.cpp` |

### Attempt 3 notes

Re-tested the released body against consolidated general front-end, music, sound, and developer-option headers. Layouts were correct, but altered inline context shortened the function and changed the disabled-song update schedule.

### Attempt 4 notes

Expanded the disabled-song update into source-level locals over the consolidated declarations. This recovered one instruction but still retained the music singleton across the update and did not match.

### Attempt 5 notes

Added a zero-instruction memory barrier after setCurrent to force the released singleton reload. The function reached 210/216 bytes with only four equivalent load/register choices differing.

## Outcome

Matched the released playlist selection using a consolidated playlist-menu context and two documented zero-instruction memory barriers for singleton reload and final-call scheduling.
