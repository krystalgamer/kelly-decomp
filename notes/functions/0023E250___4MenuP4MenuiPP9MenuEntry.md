# __4MenuP4MenuiPP9MenuEntry

- Address: `0x0023E250`
- Size: `0x5C` (92 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.9565 | 82.6087 | `candidate.cpp` |
| 2 | different | 88.0435 | 91.3043 | `candidate.cpp` |
| 3 | different | 91.3043 | 91.3043 | `candidate.cpp` |
| 4 | different | 30.0 | 8.0 | `candidate.cpp` |
| 5 | different | 39.5833 | 29.1667 | `candidate.cpp` |

## Outcome

Released Menu constructor reached 21/23 matching instructions with exact body/vtable bytes, but the RA save and self-register move remained reversed after five source-level candidates.
