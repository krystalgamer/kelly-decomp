# _$_15floating_object

- Address: `0x001FD850`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-gameplay-dtors.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-gameplay-dtors-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-gameplay-dtors-3.cpp` |

## Outcome

Across three native forms, the compiler-generated derived destructor collapses to a 20-byte vptr-setting tail call. The local matching shim was removed and
the target function was deferred rather than corrupting the shared declarations.
