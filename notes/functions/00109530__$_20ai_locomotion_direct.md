# _$_20ai_locomotion_direct

- Address: `0x00109530`
- Size: `0x28` (40 bytes)
- Object: `game/files_ai`
- Debug source: `C:/KS/SRC/ai_locomotion_direct.cpp`
- Reference source: `KS/SRC/ai_locomotion_direct.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `init40_candidate.cpp` |
| 2 | compile_failed | 0.0 | 0 | `direct_locomotion_dtor_2.cpp` |
| 3 | different | 0.0 | 0.0 | `direct_locomotion_dtor_3.cpp` |
| 4 | different | 80.0 | 80.0 | `direct_locomotion_dtor_4.cpp` |
| 5 | different | 45.4545 | 36.3636 | `direct_locomotion_dtor_5.cpp` |

### Attempt 1 notes

The symbol-preserving wrapper reproduced the call shape, but the vtable
absolute needed the old assembler's +0x10000 carry bias and the prologue/body
instructions were scheduled in the wrong order.

Re-evaluating this identical first candidate after the generalized EE destructor fixup now produces an exact match; this infrastructure recheck does not consume a sixth source attempt.

### Attempt 2 notes

Using the native C++ inheritance/destructor shape caused this isolated
translation unit to emit its own derived vtable, conflicting with the target
vtable alias at assembly time.

### Attempt 3 notes

`#pragma interface` suppressed the duplicate vtable, but EE GCC tail-called
the base destructor and emitted only the vtable store plus jump.

### Attempt 4 notes

Applying the vtable carry bias and barriers recovered eight of ten
instructions. The remaining mismatch was the target order `lui`, RA save,
`this` copy versus the compiler's `this` copy, RA save, `lui`.

### Attempt 5 notes

Splitting the prologue-sensitive sequence across inline assembly blocks did
not reproduce the compiler-generated schedule and added an extra instruction.
The target destructor remains authoritative assembly.

## Outcome

The original source-shaped destructor matched after the EE object fixup restored the released vtable carry and prologue schedule.
