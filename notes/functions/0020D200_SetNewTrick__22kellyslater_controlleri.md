# SetNewTrick__22kellyslater_controlleri

- Address: `0x0020D200`
- Size: `0x4C` (76 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/kellyslater_controller.cpp`
- Reference source: `KS/SRC/ks/kellyslater_controller.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

## Attempt notes

The exact released body matched immediately.  The established controller
layout was extended with the adjacent original trick-state booleans while
preserving all later offsets, and it now reuses the existing complete
`SurferTrick` declaration and released `ManualFlag`.

## Outcome

Matched the released new-trick setter using the shared controller and trick-data declarations.
