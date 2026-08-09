# OnLevelLoaded__13BeachFrontEnd

- Address: `0x0018F4F0`
- Size: `0x54` (84 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/BeachFrontEnd.cpp`
- Reference source: `KS/SRC/ks/BeachFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

Read the exact released BeachFrontEnd::OnLevelLoaded body and relevant state, system, virtual startDraw, menu constant, and frontendmanager field declarations.

## Outcome

The local shipped-layout wrapper was removed. The shared hierarchy places the
pause-menu pointer at `0x160` instead of the target `0x50`, so this function
was deferred.
