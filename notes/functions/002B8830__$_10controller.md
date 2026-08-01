# _$_10controller

- Address: `0x002B8830`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc1`
- Debug source: `controller.h`
- Reference source: `KS/SRC/controller.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 20.8333 | 8.3333 | `controller-dtor-1.cpp` |
| 2 | different | 20.8333 | 8.3333 | `controller-dtor-2.cpp` |
| 3 | different | 20.8333 | 8.3333 | `controller-dtor-3.cpp` |

## Outcome

Three native controller destructor forms did not reproduce the legacy deleting-destructor sequence; the manual vtable wrapper was removed.
