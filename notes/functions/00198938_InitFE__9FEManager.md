# InitFE__9FEManager

- Address: `0x00198938`
- Size: `0xE8` (232 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FrontEndManager.cpp`
- Reference source: `KS/SRC/ks/FrontEndManager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate-1-exact-released.cpp` |
| 2 | different | 87.5 | 82.7586 | `candidate-2-complete-graphical-virtual.cpp` |
| 3 | different | 86.2069 | 82.7586 | `candidate-3-native-pretty-function.cpp` |
| 4 | different | 87.5 | 82.7586 | `candidate-4-explicit-allocation-placement.cpp` |
| 5 | different | 87.5 | 82.7586 | `candidate-5-inline-factory.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released frontend initialization, object sizes, constructors, globals, target offsets, menu calls, texture reload, beach reset, and final flag are recovered at exact size; only ten independent allocation/prologue scheduling positions differ.
