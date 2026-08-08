# fill_n__H3ZPP16ai_polypath_cellZUiZP16ai_polypath_cell_X01X11RCX21_X01

- Address: `0x00111AA0`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.0769 | 0.0 | `size44-fill-native-1.cpp` |
| 2 | different | 86.3636 | 41.6667 | `size44-fill-native-2.cpp` |
| 3 | different | 17.3077 | 8.3333 | `size44-fill-native-3.cpp` |

### Attempt 1 notes

The post-decrement while form expands to 52 bytes and changes the loop shape.

### Attempt 2 notes

The source-faithful for-loop keeps the 44-byte size but omits the target's two
generated scheduling nops.

### Attempt 3 notes

Converting the count to an end pointer expands the loop to 52 bytes.

## Outcome

No native form reproduced the target scheduler output. The hand-encoded
backedge and nop sequence was removed and the function was deferred.
