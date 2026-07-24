# add_region_ambient_sound__21world_dynamics_systemR7stringxT1f

- Address: `0x002A9100`
- Size: `0x7C` (124 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/wds.cpp`
- Reference source: `KS/SRC/wds.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 48.4375 | 21.875 | `candidate.cpp` |
| 2 | different | 94.3548 | 80.6452 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 3 notes

The released region ambient-sound update matched after reconstructing the 16-byte graph iterator temporary and pinning the finish and found node pointers to the target result registers.

## Outcome

The released world-dynamics ambient-sound update matched exactly on the third attempt.
