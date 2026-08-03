# _$_11cube_marker

- Address: `0x002B9290`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/marker.h`
- Reference source: `KS/SRC/marker.h`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 10.7143 | 0.0 | `remaining_wrappers_1.cpp` |
| 2 | different | 10.7143 | 0.0 | `remaining_wrappers_2.cpp` |
| 3 | different | 10.7143 | 0.0 | `remaining_wrappers_3.cpp` |

## Outcome

The compiler-generated forms set the derived vptr and tail-call
`rectangle_marker::~rectangle_marker` in 20 bytes. The target directly calls
`entity::~entity` through a 28-byte frame, so the manual wrapper was removed.
