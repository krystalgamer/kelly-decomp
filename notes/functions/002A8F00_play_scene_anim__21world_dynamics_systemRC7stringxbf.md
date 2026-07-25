# play_scene_anim__21world_dynamics_systemRC7stringxbf

- Address: `0x002A8F00`
- Size: `0x90` (144 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 40.2778 | 22.2222 | `candidate.cpp` |
| 2 | different | 30.4054 | 21.6216 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released scene-animation lookup matched after constructing the map end iterator only after find returned, preserving target stack and comparison scheduling.

## Outcome

The released scene-animation playback matched exactly on the third attempt.
