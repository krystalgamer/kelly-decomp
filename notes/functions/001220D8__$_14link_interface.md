# _$_14link_interface

- Address: `0x001220D8`
- Size: `0xBC` (188 bytes)
- Object: `game/files_entity`
- Debug source: `C:/KS/SRC/link_interface.cpp`
- Reference source: `KS/SRC/link_interface.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 2 | different | 64.3617 | 55.3191 | `candidate.cpp` |
| 3 | different | 30.3571 | 10.7143 | `candidate.cpp` |
| 4 | different | 33.8235 | 11.7647 | `candidate.cpp` |
| 5 | different | 67.1569 | 56.8627 | `candidate.cpp` |

### Attempt 1 notes

The exact released body did not compile because the first shared declaration
emitted a duplicate link-interface vtable.

### Attempt 2 notes

Suppressing local vtable emission reproduced the child unlink loop, but the
compiler emitted an out-of-line base destructor call.

### Attempt 3 notes

Inlining the base cleanup manually changed vtable selection and expanded the
function to 224 bytes.

### Attempt 4 notes

A source-level layout reconstruction reproduced the semantics but hoisted the
generic vtable address into an extra saved register.

### Attempt 5 notes

Separate branch-local vtable aliases improved the loop and cleanup score, but
the function remained 204 bytes with different whole-TU scheduling.

## Outcome

Five source-level variants reproduced the released child unlink and owned-pose cleanup semantics, but the original inlined base-destructor vtable scheduling did not match.
