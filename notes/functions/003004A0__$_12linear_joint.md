# _$_12linear_joint

- Address: `0x003004A0`
- Size: `0x30` (48 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/joint.h`
- Reference source: `KS/SRC/joint.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 6.25 | 0.0 | `linear-dtor-1.cpp` |
| 2 | different | 6.25 | 0.0 | `linear-dtor-2.cpp` |
| 3 | different | 8.3333 | 0.0 | `linear-dtor-3.cpp` |

## Outcome

Three native linear-joint destructor forms did not reproduce the legacy deleting-destructor sequence; the manual vtable wrapper was removed.
