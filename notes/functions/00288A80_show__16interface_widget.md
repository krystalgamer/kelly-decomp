# show__16interface_widget

- Address: `0x00288A80`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/interface.cpp`
- Reference source: `KS/SRC/interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `interface_show_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `interface_show_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `interface_show_3.cpp` |

## Outcome

Three ordinary C++ forms all compile as an eight-byte sibling call. The target
preserves a 28-byte call frame, so the barrier-dependent source was removed.
