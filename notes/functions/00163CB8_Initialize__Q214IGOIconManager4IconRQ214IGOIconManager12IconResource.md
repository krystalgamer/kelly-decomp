# Initialize__Q214IGOIconManager4IconRQ214IGOIconManager12IconResource

- Address: `0x00163CB8`
- Size: `0x7C` (124 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/igoiconmanager.cpp`
- Reference source: `KS/SRC/ks/igoiconmanager.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 49.2424 | 42.4242 | `candidate.cpp` |
| 2 | different | 68.5484 | 64.5161 | `candidate.cpp` |
| 3 | different | 93.5484 | 93.5484 | `candidate.cpp` |
| 4 | different | 93.5484 | 93.5484 | `candidate.cpp` |
| 5 | compile_failed | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred IGOIconManager::Icon::Initialize after five source-level attempts; the released icon fields, quad initialization, texture, color, and depth calls reproduced at 93.5%, but the target prologue save scheduling did not.
