# __adjust_heap__H4ZP16ai_polypath_nodeZiZ16ai_polypath_nodeZt7greater1Z16ai_polypath_node_X01X11X11X21X31_v

- Address: `0x001100B0`
- Size: `0xE0` (224 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_heap.h`
- Reference source: ``
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 2.2321 | 0.0 | `candidate-round1.cpp` |
| 2 | different | 61.1607 | 32.1429 | `candidate-round2.cpp` |
| 3 | different | 54.9107 | 28.5714 | `candidate-round3.cpp` |
| 4 | different | 61.1607 | 32.1429 | `candidate-round4.cpp` |
| 5 | different | 50.8333 | 26.6667 | `candidate-round5.cpp` |

### Attempt 1 notes

The initial shared-template wrapper remained out of line and emitted a 52-byte forwarding function.

### Attempt 2 notes

Lowered the standard adjust_heap body directly with the AI node comparator and target push_heap address. It matched the 224-byte size and was the best result, with register and floating-comparison scheduling differences.

### Attempt 3 notes

Treated the value argument as an ABI pointer. The altered signature changed parameter allocation and lowered the score while retaining 224 bytes.

### Attempt 4 notes

Re-expressed child-index updates with equivalent algebra. GCC reproduced the 224-byte attempt-2 result.

### Attempt 5 notes

Used a for-loop and explicit saved node before push_heap. The extra copy expanded the function to 240 bytes.

## Outcome

Deferred after five source-level attempts. The standard AI-node sift-down and exact 224-byte size were recovered, but floating comparator branches, parameter registers, and the push_heap setup remained scheduled differently.
