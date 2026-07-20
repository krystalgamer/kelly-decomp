# _$_11clue_widget

- Address: `0x002FF780`
- Size: `0x28` (40 bytes)
- Object: `game/files_misc2`
- Debug source: `C:/KS/SRC/widget_script.h`
- Reference source: `KS/SRC/widget_script.h`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

A symbol-preserving destructor restores the parent vtable before delegating the `clue_widget` object to its base.

`KELLY_DECOMP_COMPILER_BARRIER()` is a matching-only annotation that emits no target instruction. It prevents EE GCC from applying the sibling/tail-call or scheduling transformation described above.

## Outcome

The released `clue_widget` destructor matched exactly.
