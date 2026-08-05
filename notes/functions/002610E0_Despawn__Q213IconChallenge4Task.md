# Despawn__Q213IconChallenge4Task

- Address: `0x002610E0`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/challenge_icon.cpp`
- Reference source: `KS/SRC/ks/challenge_icon.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 25.0 | 10.0 | `size40-challenge-core.cpp` |
| 2 | matched | 100.0 | 100.0 | `size40-challenge-tasks-2.cpp` |
| 3 | different | 25.0 | 10.0 | `size40-challenge-tasks-3.cpp` |

## Outcome

The shared challenge task uses an ordinary local call pointer to preserve the
released conditional call frame without barriers or local class shells.
