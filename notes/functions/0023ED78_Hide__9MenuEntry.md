# Hide__9MenuEntry

- Address: `0x0023ED78`
- Size: `0x88` (136 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 73.5714 | 54.2857 | `candidate.cpp` |
| 2 | different | 75.7143 | 60.0 | `candidate.cpp` |
| 3 | different | 94.8529 | 88.2353 | `candidate.cpp` |
| 4 | different | 27.9412 | 11.7647 | `candidate.cpp` |
| 5 | different | 94.8529 | 88.2353 | `candidate.cpp` |

## Outcome

Deferred the released menu-entry hide flow after five source-level attempts; enable/visibility checks, virtual callbacks, and flag clearing were reconstructed, but the target used different branch-likely flag reload scheduling.
