# _$_11visual_item

- Address: `0x0028AEC0`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 5.0 | 0.0 | `size40-world-dtor.cpp` |
| 2 | different | 5.0 | 0.0 | `size40-world-dtor-2.cpp` |
| 3 | different | 5.0 | 0.0 | `size40-world-dtor-3.cpp` |

## Outcome

Across three ordinary forms, the native destructor collapses to a 20-byte vptr-setting tail call. The matching-only implementation
was removed and the target function was deferred.
