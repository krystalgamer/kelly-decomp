# copy_instance_data__17entity_controllerRC17entity_controller

- Address: `0x00275740`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/controller.cpp`
- Reference source: `KS/SRC/controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released body uses the shared `controller` and `entity_controller`
declarations; the inlined base copy naturally accesses offsets 0, 4, and 0x10.

## Outcome

The exact released body matches natively without a flattened local class.
