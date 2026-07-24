# __12water_objectP6entityRC7stringx

- Address: `0x001FC560`
- Size: `0x7C` (124 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 64.5161 | 48.3871 | `candidate.cpp` |
| 2 | different | 53.2258 | 38.7097 | `candidate.cpp` |
| 3 | different | 58.0645 | 41.9355 | `candidate.cpp` |
| 4 | different | 64.5161 | 48.3871 | `candidate.cpp` |
| 5 | different | 64.5161 | 48.3871 | `candidate.cpp` |

## Outcome

Deferred water_object constructor after five source-level attempts; the released base construction, entity/color fields, physical flags, fade state, and current multiplier reproduced, but the target constructor store and register scheduling did not.
