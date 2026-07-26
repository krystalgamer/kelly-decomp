# LoadPanelAnim__9PanelAnimPUcRiP9PanelFile

- Address: `0x00154178`
- Size: `0xE8` (232 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 93.1034 | 89.6552 | `candidate-1-exact-released.cpp` |
| 2 | different | 91.8103 | 89.6552 | `candidate-2-native-pretty-function.cpp` |
| 3 | different | 93.1034 | 89.6552 | `candidate-3-constructor-body-initialization.cpp` |
| 4 | different | 93.1034 | 89.6552 | `candidate-4-explicit-allocation-placement.cpp` |
| 5 | different | 93.1034 | 89.6552 | `candidate-5-explicit-derived-initializers.cpp` |

## Outcome

Deferred after five source-faithful attempts. The released PanelAnim instance loader, authentic aligned layouts, allocation, vtables, construction, virtual load, failure deletion, and exact size are recovered; only six independent setup/store instructions are scheduled differently.
