# FixValue__16MenuEntryIntEdit

- Address: `0x0023F4D8`
- Size: `0x74` (116 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 37.931 | 20.6897 | `candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 25.0 | 0.0 | `candidate.cpp` |
| 4 | different | 30.8333 | 3.3333 | `candidate.cpp` |
| 5 | different | 37.931 | 20.6897 | `candidate.cpp` |

## Outcome

Deferred integer menu value clamping after five source-level attempts; the released virtual GetValue/SetValue and clamp logic reproduced, but the target virtual-slot caching and register allocation did not.
