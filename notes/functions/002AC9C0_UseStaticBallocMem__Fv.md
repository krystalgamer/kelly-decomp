# UseStaticBallocMem__Fv

- Address: `0x002AC9C0`
- Size: `0xF0` (240 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/hwosps2/ps2_archalloc.cpp`
- Reference source: `KS/SRC/HWOSPS2/ps2_archalloc.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 21.6667 | 0.0 | `candidate-1-exact-released.cpp` |
| 2 | different | 21.6667 | 0.0 | `candidate-2-bound-buffer.cpp` |
| 3 | different | 16.6667 | 3.3333 | `candidate-3-buffer-reference.cpp` |
| 4 | different | 16.6667 | 0.0 | `candidate-4-local-cursor.cpp` |
| 5 | different | 16.6667 | 3.3333 | `candidate-5-do-loops.cpp` |

## Outcome

Deferred after five bounded source-faithful attempts. The exact static Balloc setup and libc reent layout are recovered, but isolated static-buffer relocations and the broader target register schedule remain different.
