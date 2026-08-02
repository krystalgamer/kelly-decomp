# _$_20force_control_system

- Address: `0x00300370`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/fcs.h`
- Reference source: `KS/SRC/fcs.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.25 | 0.0 | `dtor-1.cpp` |
| 2 | different | 6.25 | 0.0 | `dtor-2.cpp` |
| 3 | different | 8.3333 | 0.0 | `dtor-3.cpp` |

## Outcome

Three native force-control-system destructor forms did not reproduce the legacy deleting-destructor sequence; the manual vtable wrapper was removed.
