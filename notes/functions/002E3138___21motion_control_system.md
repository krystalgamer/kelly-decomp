# __21motion_control_system

- Address: `0x002E3138`
- Size: `0x20` (32 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/mcs.cpp`
- Reference source: `KS/SRC/mcs.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released constructor inlines the active/locked base initialization and installs the motion-control-system vtable.

## Outcome

The released `motion_control_system` constructor matched exactly.
