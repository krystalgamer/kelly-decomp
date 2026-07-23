# __15spin_controller

- Address: `0x0020BD78`
- Size: `0x54` (84 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 96.4286 | 85.7143 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 2 notes

Read the exact released spin_controller constructor, member offsets, spin-time enum ordering, constants, activation flag, and spin count. Reordered the zero initialization to reproduce the released compiler store schedule.

## Outcome

Matched released spin_controller constructor
