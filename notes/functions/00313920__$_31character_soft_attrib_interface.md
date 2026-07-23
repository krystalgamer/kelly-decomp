# _$_31character_soft_attrib_interface

- Address: `0x00313920`
- Size: `0x54` (84 bytes)
- Object: `game/files_misfits`
- Debug source: `C:/KS/SRC/soft_attrib_interface.h`
- Reference source: `KS/SRC/soft_attrib_interface.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 14.2857 | 0.0 | `candidate.cpp` |
| 2 | different | 22.619 | 0.0 | `candidate.cpp` |
| 3 | different | 55.9524 | 23.8095 | `candidate.cpp` |
| 4 | different | 66.6667 | 38.0952 | `candidate.cpp` |
| 5 | different | 92.8571 | 90.4762 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the released empty derived destructor from the exact generic-interface, team basic-attribute, and two bounded-attribute vtable resets. Without a continuation barrier, deletion was tail-called.

### Attempt 2 notes

Added a non-emitting post-delete continuation barrier. The compiler emitted a normal call but used a shorter self/register allocation.

### Attempt 3 notes

Tried binding the object to the target argument register. The old compiler coalesced it and assigned the fixed register to a vtable constant instead.

### Attempt 4 notes

Constrained the object register through a non-emitting operand boundary. Structure and size matched, but vtable constants used different registers and schedules.

### Attempt 5 notes

Constrained the object and three exact vtable constants to the target registers. This reached 92.86%; only the equivalent deleting-mask/team-vtable store ordering differed.

## Outcome

Generated character_soft_attrib_interface destructor remained blocked by an equivalent deleting-mask/team-vtable store schedule after five source-level attempts.
