# fill__H2ZPQ211render_data11entity_infoZQ211render_data11entity_info_X01X01RCX11_v

- Address: `0x0010F030`
- Size: `0x2C` (44 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_algobase.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 67.3077 | 75.0 | `size44-fill-native-1.cpp` |
| 2 | different | 67.3077 | 75.0 | `size44-fill-native-2.cpp` |
| 3 | different | 67.3077 | 75.0 | `size44-fill-native-3.cpp` |

### Attempt 1 notes

The released while-loop form emits a 52-byte loop with two extra scheduling
nops after the aggregate copy.

### Attempt 2 notes

The equivalent for-loop produces the same 52-byte schedule.

### Attempt 3 notes

The guarded do-while form also produces the same 52-byte schedule.

## Outcome

Three native STL-equivalent forms retain compiler scheduling instructions that
are absent from the target. The instruction-assembly implementation was
removed and the function was deferred.
