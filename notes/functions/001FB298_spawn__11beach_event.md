# spawn__11beach_event

- Address: `0x001FB298`
- Size: `0x28` (40 bytes)
- Object: `game/files_kellyslater`
- Debug source: `C:/KS/SRC/ks/floatobj.cpp`
- Reference source: `KS/SRC/ks/floatobj.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 95.0 | 0.0 | `size40-gameplay-core.cpp` |
| 2 | different | 95.0 | 0.0 | `size40-gameplay-core-2.cpp` |
| 3 | different | 95.0 | 0.0 | `size40-gameplay-core-3.cpp` |

## Outcome

Across three native forms, the released shared beach-object layout addresses different fields than this older target. The local matching shim was removed and
the target function was deferred rather than corrupting the shared declarations.
