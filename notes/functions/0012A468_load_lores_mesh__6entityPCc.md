# load_lores_mesh__6entityPCc

- Address: `0x0012A468`
- Size: `0xDC` (220 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/entity.cpp`
- Reference source: `KS/SRC/entity.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 83.1818 | 29.4118 | `candidate.cpp` |
| 2 | different | 83.1818 | 29.4118 | `candidate.cpp` |
| 3 | different | 81.3636 | 29.4118 | `candidate.cpp` |
| 4 | different | 30.2632 | 24.5283 | `candidate.cpp` |
| 5 | different | 30.5085 | 18.1818 | `candidate.cpp` |

### Attempt 1 notes

Attempted the exact released function body with the PS2 `nglFixedString(const char*)` inline conversion and recovered entity field layout. The emitted 220-byte function differs only in scheduling each fixed-string zero-fill loop: the candidate places the pointer decrement before the branch, while the target places it in the branch delay slot.

### Attempt 2 notes

Changed the fixed-string integer typedef to the released PS2 spelling (`unsigned long`, corresponding to `u_long`). Output was identical to attempt 1: correct size and all substantive operations, but both loop pointer decrements remained before their branches instead of in delay slots.

### Attempt 3 notes

Re-expressed zeroing as a descending pointer `for` loop. The compiler retained the same pre-branch decrement schedule and additionally swapped setup instructions for the second temporary, reducing the byte score; this did not approach the target schedule.

### Attempt 4 notes

Made the pointer decrement conditional on loop continuation. Without volatile stores, the optimizer peeled/combined part of each clear into `sq`, increasing the function to 228 bytes and moving later setup; this was substantially worse.

### Attempt 5 notes

Added volatile stores to prevent the conditional descending clear from being removed or merged. The optimizer still combined the first two stores, expanded the function to 236 bytes, and disturbed the early-exit epilogue schedule; attempt 1 remains best.

## Outcome

Deferred after five source-level attempts. The exact low-resolution mesh load reached the target size and 83.1818%, but both fixed-string zero-fill loops used a different delay-slot schedule.
