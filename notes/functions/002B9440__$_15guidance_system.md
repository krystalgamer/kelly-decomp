# _$_15guidance_system

- Address: `0x002B9440`
- Size: `0x34` (52 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/guidance_sys.h`
- Reference source: `KS/SRC/guidance_sys.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 30.7692 | 15.3846 | `guidance-dtor-1.cpp` |
| 2 | different | 30.7692 | 15.3846 | `guidance-dtor-2.cpp` |
| 3 | different | 30.7692 | 15.3846 | `guidance-dtor-3.cpp` |

## Outcome

Three released guidance-system destructor forms generated a different vtable/delete sequence; the manual wrapper was removed.
