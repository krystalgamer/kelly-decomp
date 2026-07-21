# Load__15PauseMenuSystem

- Address: `0x001B3DE8`
- Size: `0x3C` (60 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Reconstructed the released GoalsMenu lookup and virtual Load call with recovered PauseMenuSystem, manager/IGO panel, object-vtable, and Load-slot layouts. All 60 bytes matched on the first attempt.

## Outcome

The released PauseMenuSystem load exactly matches the GoalsMenu lookup and virtual load of the IGO panel with recovered layouts.
