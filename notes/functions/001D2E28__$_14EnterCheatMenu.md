# _$_14EnterCheatMenu

- Address: `0x001D2E28`
- Size: `0xF0` (240 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/CheatFrontEnd.cpp`
- Reference source: `KS/SRC/ks/CheatFrontEnd.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.6667 | 5.0 | `candidate-1-exact-released.cpp` |
| 2 | different | 17.5 | 5.0 | `candidate-2.cpp` |
| 3 | compile_failed | 0.0 | 0 | `candidate-3.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate-4.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate-5.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The derived deletes and string destruction are recovered, but the compiler calls an out-of-line FEMultiMenu destructor instead of inlining the shipped multiple-inheritance teardown.
