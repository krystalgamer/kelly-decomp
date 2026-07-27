# ToMainScreen__15FEEntityManager

- Address: `0x001C3488`
- Size: `0xEC` (236 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEEntityManager.cpp`
- Reference source: `KS/SRC/ks/FEEntityManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.339 | 91.5254 | `candidate-1-exact-released.cpp` |
| 2 | different | 97.4576 | 94.9153 | `candidate-2-full-menu-vtable.cpp` |
| 3 | different | 97.4576 | 94.9153 | `candidate-3-named-loading-index.cpp` |
| 4 | different | 97.4576 | 94.9153 | `candidate-4-named-call-arguments.cpp` |
| 5 | different | 97.4576 | 93.3333 | `candidate-5-index-first-wrapper.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released main-screen transition reaches exact size and 97.4576%, with every branch, offset, virtual dispatch, call, state store, and loop exact; only three SetSurferPo argument-load positions differ.
