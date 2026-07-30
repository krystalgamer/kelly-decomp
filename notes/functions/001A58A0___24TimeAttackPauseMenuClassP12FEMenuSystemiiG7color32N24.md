# __24TimeAttackPauseMenuClassP12FEMenuSystemiiG7color32N24

- Address: `0x001A58A0`
- Size: `0x424` (1060 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndMenus.cpp`
- Reference source: `KS/SRC/ks/FrontEndMenus.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released constructor body from `kelly-slaters-pro-surfer/KS/SRC/ks/FrontEndMenus.cpp:208-225` (queue reference `KS/SRC/ks/FrontEndMenus.cpp`) with released/source-faithful declarations. The compiler emitted a differently mangled constructor symbol, so the harness reported `symbol_missing`; no alternate was tried.

## Outcome

Exact released-source constructor attempt deferred because the candidate compiler emitted a different constructor mangling; no alternate was tried.
