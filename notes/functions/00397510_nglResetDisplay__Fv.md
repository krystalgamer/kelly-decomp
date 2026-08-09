# nglResetDisplay__Fv

- Address: `0x00397510`
- Size: `0x2C` (44 bytes)
- Object: `ngl/ngl_ps2`
- Debug source: `C:/NGL/ps2/ngl_ps2.cpp`
- Reference source: `NGL/PS2/ngl_ps2.cpp`
- Result: **matched**

## Attempts

| # | Status | Byte score | Instruction score | Candidate |
| ---: | --- | ---: | ---: | --- |
| 1 | matched | 100.0 | 100.0 | `candidate.cpp` |
| 2 | matched | 100.0 | 100.0 | `size44-platform-final.cpp` |

### Attempt 1 notes

The target reset re-enables interrupts 5 and 2 before calling `_nglSetDisplay`. The trailing empty compiler barrier prevents a sibling call.

### Attempt 2 notes

A local function pointer preserves the normal display call without a compiler
barrier.

## Outcome

The compiler barrier was removed.
