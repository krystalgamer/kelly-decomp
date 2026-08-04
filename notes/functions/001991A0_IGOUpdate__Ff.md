# IGOUpdate__Ff

- Address: `0x001991A0`
- Size: `0x20` (32 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `size32-frontend-probes-1.cpp` |
| 2 | different | 0.0 | 0.0 | `size32-frontend-probes-2.cpp` |
| 3 | different | 0.0 | 0.0 | `size32-frontend-probes-3.cpp` |

## Outcome

All three released C++ forms load `frontendmanager` and tail-call `FEManager::UpdateIGO` in 12 bytes. The target retains a 32-byte frame, so the wrapper was deferred.
