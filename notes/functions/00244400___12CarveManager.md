# __12CarveManager

- Address: `0x00244400`
- Size: `0x5C` (92 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/trick_system.cpp`
- Reference source: `KS/SRC/ks/trick_system.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 56.5217 | 94.1176 | `candidate.cpp` |
| 2 | different | 56.5217 | 94.1176 | `candidate.cpp` |
| 3 | different | 56.5217 | 94.1176 | `candidate.cpp` |
| 4 | different | 56.5217 | 94.1176 | `candidate.cpp` |
| 5 | different | 56.5217 | 94.1176 | `candidate.cpp` |

## Outcome

Released CarveManager constructor matched every non-nop instruction but remained eight bytes shorter in the empty CarveNode array-construction loop after five source-level layout/barrier candidates.
