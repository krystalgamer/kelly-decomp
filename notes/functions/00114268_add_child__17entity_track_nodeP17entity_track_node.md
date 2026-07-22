# add_child__17entity_track_nodeP17entity_track_node

- Address: `0x00114268`
- Size: `0x4C` (76 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 46.0526 | 26.6667 | `candidate.cpp` |
| 2 | different | 46.0526 | 26.6667 | `candidate.cpp` |
| 3 | different | 47.3684 | 33.3333 | `candidate.cpp` |
| 4 | different | 51.3158 | 13.3333 | `candidate.cpp` |
| 5 | different | 46.0526 | 26.6667 | `candidate.cpp` |

### Attempt 1 notes

The exact released add-child body with the shared original entity_track_node layout emitted a 68-byte traversal, but the target retains a longer 76-byte sibling-loop schedule.

### Attempt 2 notes

Moving the traversal local outside the branch preserved the same 68-byte code and did not affect allocation or scheduling.

### Attempt 3 notes

Testing the cached child pointer directly changed allocation slightly but still emitted a compact non-branch-likely loop.

### Attempt 4 notes

An explicit next-sibling local remained 68 bytes and selected a different register schedule from the target.

### Attempt 5 notes

A normalized empty compiler barrier after the sibling advance did not alter the emitted code, confirming the mismatch is not resolved by narrowly preventing loop motion.

## Outcome

Deferred after five source-faithful sibling traversal forms retained a compact 68-byte GCC loop instead of the target branch-likely schedule.
