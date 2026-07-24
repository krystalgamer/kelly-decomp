# _$_13PanelAnimFile

- Address: `0x001552E8`
- Size: `0x88` (136 bytes)
- Object: `game/files_frontend`
- Debug source: `C:/KS/SRC/ks/FEAnim.cpp`
- Reference source: `KS/SRC/ks/FEAnim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 47.7941 | 20.5882 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 55.5556 | 33.3333 | `candidate.cpp` |
| 4 | different | 27.5641 | 10.2564 | `candidate.cpp` |
| 5 | symbol_missing | 0.0 | 0 | `candidate.cpp` |

## Outcome

Deferred the released panel-animation-file destructor after five source-level attempts; vtable reset, linked animation deletion, and conditional object deletion were reconstructed, but generated-destructor register and branch layout remained different.
