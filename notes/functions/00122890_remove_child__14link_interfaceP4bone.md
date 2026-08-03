# remove_child__14link_interfaceP4bone

- Address: `0x00122890`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/link_interface.cpp`
- Reference source: `KS/SRC/link_interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 3.5714 | 0.0 | `candidate.cpp` |
| 2 | different | 3.5714 | 0.0 | `candidate.cpp` |
| 3 | different | 3.5714 | 0.0 | `candidate.cpp` |

## Outcome

Three ordinary C++ forms all tail-call clear_parent into 8 bytes; target preserves a 28-byte call frame, so deferred without barriers.
