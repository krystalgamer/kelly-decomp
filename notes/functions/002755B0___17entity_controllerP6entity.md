# __17entity_controllerP6entity

- Address: `0x002755B0`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/controller.cpp`
- Reference source: `KS/SRC/controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 97.5 | 90.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The field order and scheduling matched, but the absolute vtable alias used the effective address instead of the carried `%hi` spelling required by the old assembler path.

### Attempt 2 notes

A minimal layout preserves the base controller flags/vtable followed by `owner` and the `NONE` state.

## Outcome

The released `entity_controller` constructor matched exactly.
