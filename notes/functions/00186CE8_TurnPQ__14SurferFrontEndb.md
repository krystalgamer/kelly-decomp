# TurnPQ__14SurferFrontEndb

- Address: `0x00186CE8`
- Size: `0x178` (376 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/SurferFrontEnd.cpp`
- Reference source: `KS/SRC/ks/SurferFrontEnd.cpp`
- Result: **source_pending**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |

### Attempt 1 notes

Exact released-source first-pass attempt using the body from `kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.cpp:259-275` and the released class declaration/layout from `kelly-slaters-pro-surfer/KS/SRC/ks/SurferFrontEnd.h:18-135`.

Canonical result: `compile_failed`, score `0.0`. The released header dependency chain could not find required headers such as `global.h`, `inputmgr.h`, and `commands.h` under the fixed test include paths. Per the one-attempt lane constraint, no retry or declaration variant was attempted.

## Outcome

Exact released-source first pass for surfer front end rotation did not match.
