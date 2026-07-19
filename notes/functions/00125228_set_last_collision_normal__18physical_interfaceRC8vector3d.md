# set_last_collision_normal__18physical_interfaceRC8vector3d

- Address: `0x00125228`
- Size: `0x20` (32 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/physical_interface.cpp`
- Reference source: `KS/SRC/physical_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 34.375 | 12.5 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The POD vector assignment used 64-bit aggregate copies instead of the target scalar float sequence.

### Attempt 2 notes

A minimal layout places `last_collision_normal` at offset 0x50 and preserves the three-float assignment.

## Outcome

The inline physical-interface collision-normal setter matched exactly.
