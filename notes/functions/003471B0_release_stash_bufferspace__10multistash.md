# release_stash_bufferspace__10multistash

- Address: `0x003471B0`
- Size: `0x30` (48 bytes)
- Object: `game/files_vsim`
- Debug source: `C:/KS/SRC/mustash.cpp`
- Reference source: `KS/SRC/mustash.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 91.6667 | 83.3333 | `candidate.cpp` |
| 2 | different | 79.1667 | 75.0 | `candidate.cpp` |
| 3 | different | 91.6667 | 83.3333 | `candidate.cpp` |
| 4 | different | 91.6667 | 83.3333 | `candidate.cpp` |
| 5 | different | 91.6667 | 83.3333 | `candidate.cpp` |

### Attempt 1 notes

Used the released method with recovered 0x264/0x268 member offsets and the `arch_free` target. All body instructions matched, but EE GCC saved `s0` before `ra`; the target saves `ra` before `s0`, leaving two instructions swapped (91.67%).

### Attempt 2 notes

Added an entry compiler barrier to perturb scheduling. It kept `s0` before `ra` and moved the `this` copy between the saves, increasing the mismatch to three prologue instructions.

### Attempt 3 notes

Recast the method as an ABI-named wrapper over an explicit layout. The emitted body again matched except for the same `s0`/`ra` save ordering as attempt 1.

### Attempt 4 notes

Changed the free call to a C-linkage alias carrying the target mangled symbol. This did not affect scheduling; only the two prologue saves remained swapped.

### Attempt 5 notes

Used the released source-level `free` spelling, aliased to the target `arch_free` address, to test builtin-aware scheduling. Output remained 91.67% with only the `s0` and `ra` saves reversed.

## Outcome

Five released-source and ABI-shaped candidates reproduced the body but could not match the target's ra-before-s0 prologue save order.
