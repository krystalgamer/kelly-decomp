# nglRelockAllTexturesPS2__Fv

- Address: `0x0039C9D8`
- Size: `0xB8` (184 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **deferred**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | different | 19.0217 | 4.3478 | `candidate.cpp` |
| 2 | different | 57.0652 | 41.3043 | `candidate.cpp` |
| 3 | different | 57.0652 | 41.3043 | `candidate.cpp` |
| 4 | compile_failed | 0.0 | 0 | `candidate.cpp` |
| 5 | different | 22.0 | 4.0 | `candidate.cpp` |

### Attempt 1 notes

Exact released traversal with 32-bit flag fields; the compiler used word flag
operations instead of the target doubleword sequence.

### Attempt 2 notes

Packed 64-bit flag fields recovered the target function size and loop shape,
but mask synthesis and saved-register allocation differed.

### Attempt 3 notes

Using the released EE-width unsigned long bitfields produced the same remaining
mask and register-allocation differences as attempt 2.

### Attempt 4 notes

A source-level register-allocation adaptation exceeded the old compiler's
inline-assembly operand limit and did not compile.

### Attempt 5 notes

Splitting the non-emitting register constraints compiled, but increased the
function to 200 bytes and did not reproduce the released whole-TU allocation.

## Outcome

Five source-level variants recovered the released traversal and packed flag semantics, but the original whole-TU register allocation and 64-bit mask synthesis did not match.
