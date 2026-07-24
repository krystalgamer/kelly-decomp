# Disable__9MenuEntry

- Address: `0x0023EE50`
- Size: `0x88` (136 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 24.3056 | 11.1111 | `candidate.cpp` |
| 2 | different | 25.0 | 13.8889 | `candidate.cpp` |
| 3 | different | 25.0 | 11.4286 | `candidate.cpp` |
| 4 | different | 47.7941 | 32.3529 | `candidate.cpp` |
| 5 | different | 94.8529 | 88.2353 | `candidate.cpp` |

## Outcome

Deferred the released menu-entry disable flow after five source-level attempts; active/enabled checks, virtual callbacks, and flag clearing were reconstructed, but the target used different branch-likely flag reload scheduling.
