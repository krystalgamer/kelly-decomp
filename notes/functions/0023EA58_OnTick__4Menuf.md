# OnTick__4Menuf

- Address: `0x0023EA58`
- Size: `0x84` (132 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 96.2121 | 84.8485 | `candidate.cpp` |
| 3 | different | 96.2121 | 84.8485 | `candidate.cpp` |
| 4 | different | 96.2121 | 84.8485 | `candidate.cpp` |
| 5 | different | 87.1212 | 84.8485 | `candidate.cpp` |

## Outcome

Deferred the released menu tick loop after five source-level attempts; the entry iteration and virtual OnTick dispatch were reproduced, but the original count-register and reload scheduling remained different.
