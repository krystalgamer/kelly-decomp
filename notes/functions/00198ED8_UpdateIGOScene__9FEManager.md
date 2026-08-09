# UpdateIGOScene__9FEManager

- Address: `0x00198ED8`
- Size: `0x38` (56 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The released draw guard and virtual `PauseMenuSystem::UpdateInScene` call use
the shared manager and menu-system hierarchy, including the protected base
slots and derived `Load` slot.

## Outcome

The local manager and vtable hierarchy were removed.
