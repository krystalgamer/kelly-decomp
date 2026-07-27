# copy__21hard_attrib_interfaceP21hard_attrib_interface

- Address: `0x00121FE8`
- Size: `0xEC` (236 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/hard_attrib_interface.cpp`
- Reference source: `KS/SRC/hard_attrib_interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 92.0833 | 90.0 | `candidate-1-exact-released.cpp` |
| 2 | different | 92.0833 | 90.0 | `candidate-2-pointer-pstring-copy.cpp` |
| 3 | different | 92.0833 | 90.0 | `candidate-3-postincrement-pstring-copy.cpp` |
| 4 | different | 92.0833 | 90.0 | `candidate-4-pointer-for-loop.cpp` |
| 5 | different | 92.0833 | 90.0 | `candidate-5-labeled-pstring-loop.cpp` |

## Outcome

Deferred after five source-faithful attempts. The exact hard-attribute copy matches every instruction through the final pstring loop, but GCC increments the destination before the backedge and leaves a nop instead of using the branch delay slot.
