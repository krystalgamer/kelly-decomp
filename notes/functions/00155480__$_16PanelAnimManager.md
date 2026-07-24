# _$_16PanelAnimManager

- Address: `0x00155480`
- Size: `0x80` (128 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 41.9118 | 38.2353 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 55.4688 | 45.1613 | `candidate.cpp` |
| 4 | different | 57.8125 | 86.2069 | `candidate.cpp` |
| 5 | different | 57.8125 | 86.2069 | `candidate.cpp` |

## Outcome

Deferred the released panel-animation manager destructor after five source-level attempts; the closest source reproduced all operations but lacked two target-preserved nops in the delete loop.
