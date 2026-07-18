# get_state__C17entity_controller

- Address: `0x002B8A50`
- Size: `0x8` (8 bytes)
- Object: `game/files_misc1`
- Debug source: `controller.h`
- Reference source: `KS/SRC/controller.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released accessor returns `state` from offset `0x10`.

## Outcome

The released `entity_controller::get_state` accessor matched exactly on the first attempt.
