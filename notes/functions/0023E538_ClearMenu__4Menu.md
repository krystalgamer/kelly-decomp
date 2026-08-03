# ClearMenu__4Menu

- Address: `0x0023E538`
- Size: `0x1C` (28 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/menu.cpp`
- Reference source: `KS/SRC/ks/menu.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 0.0 | 0.0 | `native_gameplay_wrapper_probe_1.cpp` |
| 2 | different | 0.0 | 0.0 | `native_gameplay_wrapper_probe_2.cpp` |
| 3 | different | 0.0 | 0.0 | `native_gameplay_wrapper_probe_3.cpp` |

## Outcome

Three ordinary C++ forms all compile as eight-byte sibling calls. The target
preserves a 28-byte call frame, so the former barrier-dependent match was
removed and the function was deferred.
