# using_velocity__C18physical_interface

- Address: `0x00122CC8`
- Size: `0x30` (48 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/physical_interface.cpp`
- Reference source: `KS/SRC/physical_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A minimal entity vtable layout preserves the released virtual `is_stationary` call at slot 0x128 and the final boolean inversion.

## Outcome

The released `physical_interface::using_velocity` predicate matched exactly on the first attempt.
