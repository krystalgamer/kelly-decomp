# __uninitialized_fill_n_aux__H3ZP5planeZUiZ5plane_X01X11RCX21G12__false_type_X01

- Address: `0x00110468`
- Size: `0x4C` (76 bytes)
- Object: `game/files_ai`
- Debug source: `C:/usr/local/sce/ee/gcc/include/g++-2/stl_uninitialized.h`
- Reference source: ``
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 26.3158 | 0.0 | `candidate.cpp` |
| 2 | different | 11.4286 | 0.0 | `candidate.cpp` |
| 3 | matched | 100.0 | 100.0 | `candidate.cpp` |

### Attempt 1 notes

The canonical released GCC 2 uninitialized-fill loop with an inline placement-new helper copied the four floats correctly, but the optimizer removed the placement-construction null check.

### Attempt 2 notes

Declaring placement new out of line retained a call and expanded the function to 140 bytes, unlike the released target's inlined construction.

### Attempt 3 notes

Restoring the inline released placement-new form while expressing the SDK construct helper's null guard explicitly produced the exact 76-byte target. This preserves the canonical uninitialized-fill loop and source-faithful plane copy construction.

## Outcome

Matched the released GCC 2 plane uninitialized-fill loop using shared source-faithful plane declarations and the SDK construct null guard.
