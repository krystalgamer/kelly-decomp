# clear_anims__16entity_anim_tree

- Address: `0x001172E0`
- Size: `0xB4` (180 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 23.4375 | 2.0833 | `candidate.cpp` |
| 2 | different | 23.4375 | 2.0833 | `candidate.cpp` |
| 3 | different | 51.1111 | 40.0 | `candidate.cpp` |
| 4 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The exact released body used the new shared entity_anim_tree and vector declarations, but the reduced vector reconstruction kept an extra container pointer live across the destructor loop.

### Attempt 2 notes

An empty shared-context reload barrier did not change the extra callee-saved container register.

### Attempt 3 notes

The vector helpers were reshaped to follow the released PS2 GCC 2 `stl_vector.h`, but the reduced reconstruction did not inline the resize overload as the original translation unit did.

### Attempt 4 notes

The released delete-and-resize body matched after preserving its iterator scopes while binding the loop state to the original callee-saved registers. All class and vector layouts remain shared and source-faithful.

## Outcome

Matched primary entity animation cleanup using shared released tree and PS2 STL vector declarations.
