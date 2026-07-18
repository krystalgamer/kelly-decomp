# set_combat_mode__10controllerb

- Address: `0x0026E9C0`
- Size: `0x8` (8 bytes)
- Object: `game/files_kellyslater`
- Debug source: `controller.h`
- Reference source: `KS/SRC/controller.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released base combat-mode setter is an empty virtual hook.

## Outcome

The released empty `controller::set_combat_mode` hook matched exactly on the first attempt.
