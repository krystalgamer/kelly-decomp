# __Q213script_object8instanceRC7stringxi

- Address: `0x00350308`
- Size: `0x88` (136 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/script_object.cpp`
- Reference source: `KS/SRC/script_object.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 29.4118 | 5.8824 | `candidate.cpp` |
| 2 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 3 | different | 45.5882 | 14.7059 | `candidate.cpp` |
| 4 | symbol_missing | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 45.5882 | 14.7059 | `candidate.cpp` |

## Outcome

Deferred the released script-object instance constructor after five source-level attempts; name/data construction, list-sentinel allocation, and suspension initialization were reconstructed, but generated member-construction register scheduling remained different.
