# initialize__4item

- Address: `0x0028A108`
- Size: `0x1C` (28 bytes)
- Object: `game/files_misc1`
- Debug source: `C:/KS/SRC/item.cpp`
- Reference source: `KS/SRC/item.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 7.1429 | 0.0 | `item_initialize_1.cpp` |
| 2 | different | 7.1429 | 0.0 | `item_initialize_2.cpp` |
| 3 | different | 7.1429 | 0.0 | `item_initialize_3.cpp` |

## Outcome

Three ordinary released-source forms all tail-call `spawn_item_script`. The
target retains a normal 28-byte call frame, so the function was deferred.
