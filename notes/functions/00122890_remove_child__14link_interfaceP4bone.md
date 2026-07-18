# remove_child__14link_interfaceP4bone

- Address: `0x00122890`
- Size: `0x1C` (28 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/link_interface.cpp`
- Reference source: `KS/SRC/link_interface.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

With assertions removed, the released method loads the child's link interface at offset `0x68` and calls `clear_parent`; a barrier preserves the wrapper.

## Outcome

The released `link_interface::remove_child` call wrapper matched exactly on the first attempt.
