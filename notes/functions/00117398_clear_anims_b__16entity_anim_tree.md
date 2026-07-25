# clear_anims_b__16entity_anim_tree

- Address: `0x00117398`
- Size: `0xB4` (180 bytes)
- Object: `game/files_anim`
- Debug source: `C:/KS/SRC/entity_anim.cpp`
- Reference source: `KS/SRC/entity_anim.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 16.5 | 0.0 | `candidate.cpp` |
| 2 | different | 22.3958 | 4.1667 | `candidate.cpp` |
| 3 | different | 21.9388 | 4.0816 | `candidate.cpp` |
| 4 | different | 22.9592 | 4.0816 | `candidate.cpp` |
| 5 | different | 22.3958 | 4.1667 | `candidate.cpp` |

### Attempt 1 notes

The exact released delete-and-resize body used the shared source-faithful tree and vector declarations, but EE GCC retained extra embedded-vector base pointers and emitted a larger frame.

### Attempt 2 notes

Binding the released loop iterators and embedded vector address to the target callee-saved registers still left an additional vector-base pointer live.

### Attempt 3 notes

Constraining the shared vector storage pointer added another move without eliminating the retained base pointer.

### Attempt 4 notes

Expanding the released resize branch through shared vector methods preserved behavior but still required two extra callee-saved vector addresses.

### Attempt 5 notes

A final shared-vector layout experiment retained the same oversized register frame. No per-function layout or vtable surrogate was introduced.

## Outcome

Deferred secondary animation clearing after five source-level attempts; the reduced shared PS2 vector context could not reproduce the original embedded-vector register allocation.
