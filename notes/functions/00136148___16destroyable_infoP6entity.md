# __16destroyable_infoP6entity

- Address: `0x00136148`
- Size: `0xE8` (232 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 86.6379 | 74.1379 | `candidate.cpp` |
| 2 | different | 30.3279 | 8.1967 | `candidate.cpp` |
| 3 | different | 90.5172 | 82.7586 | `candidate.cpp` |
| 4 | different | 88.7931 | 81.0345 | `candidate.cpp` |
| 5 | different | 68.9655 | 63.7931 | `candidate.cpp` |

### Attempt 1 notes

Compiled the exact released constructor with canonical stringx, empty-string, entity, visual-rep, and destroyable-info declarations. All member offsets, calls, values, return, and exact 232-byte size matched. Remaining differences are only callee-save/prologue scheduling and a swap of `$s3/$s4` for the first two string members.

### Attempt 2 notes

Expanded construction into a raw source-level ABI function with fixed member registers. The compiler preserved the incoming self pointer separately in `$s7` before copying it to `$s1`, increasing the frame to 144 bytes; explicit vtable/member stores also changed scheduling. This approach was abandoned.

### Attempt 3 notes

Kept the real C++ constructor and added fixed member pointers in the body. This successfully assigned offsets +8/+16/+24/+32 to `$s3/$s4/$s5/$s2`; from the first string constructor onward the function is byte-exact. Ten remaining instructions are only the compiler's prologue save/pointer scheduling before that first call.

### Attempt 4 notes

Removed the redundant fixed self alias from the expanded constructor and delayed the empty-string register until after member construction. This restored exact size and 47/58 instructions, but the compiler still saved `$ra` immediately before the first call instead of early in the target prologue; all code from that call onward remained exact.

### Attempt 5 notes

Added a zero-instruction `$ra` clobber constraint to force an earlier return-address save. It globally perturbed the prologue scheduler and reduced agreement. Attempt 3 remains best: exact size, 210/232 bytes, 48/58 instructions, and byte-exact code from the first string constructor onward.

## Outcome

Deferred after five source-level attempts. The released destroyable-info constructor, canonical layout, four string constructions and assignments, owner/mesh/hit-point stores, and full epilogue are recovered; only ten prologue save/address instructions are scheduled differently.
