# _$_13CheatCodeMenu

- Address: `0x001D1F48`
- Size: `0xE0` (224 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate-1.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate-2.cpp` |
| 3 | different | 41.9643 | 32.1429 | `candidate-3.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate-4.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate-5.cpp` |

## Outcome

Deferred after five attempts. The exact released destructor body is known, but source-faithful shared base teardown declarations did not reproduce the target destructor chain; matching would require broader header consolidation rather than a per-function class or vtable stand-in.
