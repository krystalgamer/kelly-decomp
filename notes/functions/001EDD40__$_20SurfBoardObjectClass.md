# _$_20SurfBoardObjectClass

- Address: `0x001EDD40`
- Size: `0x5C` (92 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/board.cpp`
- Reference source: `KS/SRC/ks/board.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 63.0 | 60.0 | `destructor-1.cpp` |
| 2 | different | 63.0 | 60.0 | `destructor-2.cpp` |
| 3 | different | 63.0 | 60.0 | `destructor-3.cpp` |

## Outcome

The released native destructor and two equivalent forms generated a different vtable/delete sequence; the manual vtable and extern-C destructor wrapper were removed.
